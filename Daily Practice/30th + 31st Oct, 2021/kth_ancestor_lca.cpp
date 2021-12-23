// kth ancestor , binary lifting 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
#define tree_input(edges) for (int i = 0; i < (edges); i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj,up;
int lg=20;
int tin[100005],tout[100005];
int ti=0;

void dfs(int node, int parent){ // set 2^j ancestors ,tin,tout for every node 
    tin[node]=ti++;
    up[node][0]=parent;
    for(int i=1;i<=lg;i++)
            up[node][i] = up[up[node][i-1]][i-1];

    for( int child : adj[node]){
    if(child != parent)
        dfs(child,node);
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

void solve()
{
    int n;
    cin >> n;
    adj.resize(n);
    tree_input(n-1);
    up.assign(n+1, vector<int>(32));
    for(int i=0;i<=lg;i++)
        up[0][i]=0;
    dfs(1, 0); // tree rooted at 1 self loop best for up array ;)
    //kth ancestor 
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
