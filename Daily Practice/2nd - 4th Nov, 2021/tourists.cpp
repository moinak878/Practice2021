#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define mod 1000000007

vector<vector<int>> adj , up;
int ti = 0;
int lg=32;
vector<int> tin, tout, d;

void dfs(int u, int p, int depth)
{
    tin[u] = ti++;
    d[u] = depth;
    up[u][0] = p;
    for (int i = 1; i <= lg;i++)
        up[u][i] = up[up[u][i - 1]][i - 1];
    for (int ch : adj[u])
    {
        if (ch == p)
            continue;
        dfs(ch, u, depth + 1);
        }
    tout[u] = ti;
}

bool is_ancestor(int u, int v)
{
    if(u==0)
        return true;
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u , int v ){
    if(is_ancestor(u,v))
        {
           
            return u;
        }
    if(is_ancestor(v,u))
        {
            
            return v;
        }
    for (int i = lg; i >= 0;i--){
        if(!is_ancestor(up[u][i],v))
            {
                u = up[u][i];
                
            }
    }
    return up[u][0];
}

int result(int u , int v){
    int l = d[lca(u, v)];
    int a = d[u];
    int b = d[v];
    return a + b - 2*l + 1;
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n + 1);
    tin.resize(n + 1);
    tout.resize(n + 1);
    d.resize(n + 1);
    up.assign(n + 1, vector<int>(lg + 1));
    for (int i = 0; i <= lg; i++)
        up[0][i] = 0;
    // tree input done
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // calculate lca
    dfs(1, 0, 0);
    int ans = 0;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 2 * x; y <= n; y += x){
                ans += result(x, y);
        }
        cout << endl;
    }
    cout << ans << endl;
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
