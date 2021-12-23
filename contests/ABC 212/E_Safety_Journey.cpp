#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector< vector<ll> > g(n);
    while(m--){
        ll u,v;
        cin >> u >> v;
        --u;
        --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<ll> dp(n);
    dp[0] = 1;
    for (ll i = 0; i < k; i++)
    {
        vector<ll> dp_temp(n);
        ll sum = 0;
        for (ll j = 0; j < (ll)dp.size();j++){
            sum += dp[j];
        }
        for(ll j = 0; j < n;j++){
            dp_temp[j] = sum;
            for (ll l = 0; l < (ll)g[j].size();l++)
            {
                dp_temp[j]-=dp[g[j][l]];
            }
            dp_temp[j] -= dp[j];
        }
        for (int j = 0;j<n;j++){
            dp_temp[j] %= mod;
        }
        dp = dp_temp;
    }
    ll res = dp[0];
    if(res<0)
        res += mod;
    cout << res;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll test = 1;
        //cin>>test;
        while (test--)
        {
            solve();
        }
        return 0;
    }
