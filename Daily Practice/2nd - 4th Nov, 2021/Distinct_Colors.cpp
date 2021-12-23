#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long 
#define mod 1000000007

vector<vector<int> > adj;
vector<set<int> > c;
vector<int> ans;

void dfs(int u , int p ){
    // c[u] -- color of this node 
    for( int v : adj[u]){
        if(v==p)
            continue;
        dfs(v, u);
        if(c[u].size()< c[v].size())
            swap(c[u], c[v]);
        for(int x : c[v])
            c[u].insert(x);
    }
    ans[u] = c[u].size();
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n+1);
    c.resize(n+1);
    ans.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        c[i].insert(a);
    }
    for (int i = 0; i < n - 1;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
