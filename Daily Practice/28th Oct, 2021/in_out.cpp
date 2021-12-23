#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
#define tree_input(edges) for (int i = 0; i < (edges); i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj;
int in_time[100005],out_time[100005];
int t=1;

void dfs(int node, int parent)
{
   in_time[node]=t++;
   for(auto children : adj[node]){
        if(children!=parent)
            dfs(children,node);
   }
   out_time[node]=t;
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n);
    tree_input(n-1);
    dfs(1, 0); // tree rooted at 1
    for (int i = 1; i <=n;i++){
        cout<<"node "<<i<<" => in :"<<in_time[i]<<" , out : "<<out_time[i]<<endl;
    }
    // if b is in subtree of a
    ll a,b;
    cin>>a>>b;
    if(in_time[a] <= in_time[b] && out_time[a] >= out_time[b])
            cout<<b<<" is in subtree of "<<a<<endl;
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
