#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define tree_input(edges) for (int i = 0; i < edges; i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj;

void dfs(int node , int parent){
    cout << node << " , ";
    for(auto child : adj[node]){
        if(child != parent)
            dfs(child, node);
    }  
    cout << node << " , ";
}

void solve()
{
    int nodes, edges;
    cin >> nodes;
    edges = nodes-1;
    adj.resize(nodes);
    tree_input(edges);
    cout << "flattened tree :- \n";
    dfs(1, 0);
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
