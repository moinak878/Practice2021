// kth ancestor , binary lifting 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
#define tree_input(edges) for (int i = 0; i < (edges); i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj,up,res;
int lg=20;
int tin[100005],tout[100005];
int val[100005],depth[100005];
int ti=0;

void dfs(int node, int parent, int d ){ // set 2^j ancestors ,tin,tout for every node 
    depth[node]=d;
    tin[node]=ti++;
    up[node][0]=parent , res[node][0]=val[parent];
    for(int i=1;i<=lg;i++)
            up[node][i] = up[up[node][i-1]][i-1] , res[node][i]=res[node][i-1] + res[up[node][i-1]][i-1];

    for( int child : adj[node]){
    if(child != parent)
        dfs(child,node,d+1);
   }
   tout[node]=ti;
}

bool is_ancestor(int u , int v){ // is u ancestor of v ?
    if(tin[v]>=tin[u] && tout[v]<=tout[u])
        return true;
    return false;
}

int lca(int u , int v){
    if(is_ancestor(u,v))
            return u;
    if(is_ancestor(v,u))
            return v;
    for(int i=lg;i>=0;i--){
        if(!is_ancestor(up[u][i],v))
            u = up[u][i];
    }
    return up[u][0];
}

int kth_ancestor(int u, int k){
    for(int i=lg;i>=0;i--){
        if(k & (1<<i))
            u = up[u][i];  
    }
    return u;
}

int kth_result(int u , int k){
    // sum from kth ancestor till u -- ancestral path sum
    int ans = val[u];
    for (int i=lg;i>=0;i--){
        if(k & (1<<i)){
            ans+= res[u][i];
            u = up[u][i];
        }
    }
    return ans;
}

int result_xy(int x , int y){
    int l = lca(x,y);
    int X = kth_result(x , depth[x]-depth[l]);
    int Y = kth_result(y, depth[y]-depth[l]);
    return X+Y-val[l];
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n);
    tree_input(n-1);
    up.assign(n+1, vector<int>(32));
    for(int i=0;i<=lg;i++)
        up[0][i]=0,res[0][i]=0;
    val[0]=0; //val of zero 
    dfs(1,0,0); // rooted at zero
    // kth ancestor 
    int u, k;
    cout<<"enter  a node : "; cin>>u;
    cout<<"Enter k : "; cin>>k;
    int ans = kth_ancestor(u,k);
    ans==0?cout<<-1:cout<<ans;
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
