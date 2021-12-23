#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
#define tree_input(edges) for (int i = 0; i < (edges); i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj;
int par[100000], cnt[100000];

void dfs(int node, int parent)
{
    cnt[node] = 1;
    for (auto child : adj[node])
    {
        if(child == parent)
            continue;
        dfs(child, node);
        cnt[node] += cnt[child];
    }
    par[node] = parent;
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n);
    tree_input(n-1);
    dfs(1, 0); // tree rooted at 1
    for (int i = 1; i <=n;i++){
         cout << "nodes in subtree of " << i << " : " << cnt[i];
        cout << "\nparent of node " << i << " is : " << par[i]<<endl<<endl;
    }

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
