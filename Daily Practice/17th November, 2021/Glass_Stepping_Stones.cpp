#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

// segment tree minimum on euler tour 

const int n = 2e5+10;
const int INF = 1e9 + 7;
vector<vector<int>> adj;
int par[n], tempered[n],tin[n],tout[n];

void dfs(int x , int p){
    par[x] = p;
    for(int u : adj[x])
        if(u!=p)    dfs(u,x);
}

int f(int x){
    if (tempered[x] == INF)
    {
        tempered[x] = x;
        tempered[par[x]] = min(tempered[par[x]], x);
        return INF;
    }
    int ans = tempered[x];
    tempered[x] = min(tempered[x], x);
    tempered[par[x]] = min(tempered[par[x]], x);
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n + 1);
    for(int i=0;i<=n;i++)
        tempered[i] = INF;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin >> q;
    dfs(1, 1);
    while (q--)
    {
        int x;
        cin >> x;
        int ans = f(x);
        if(ans==INF)
            cout << "NO\n";
        else
            cout << "YES " << ans << "\n";
    }
}
int main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
