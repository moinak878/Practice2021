#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    // dp => o(n^2) TLE
    // do dfs then o(n)
    ll dp[n+1][n+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1;j++)
           dp[i][j] = 0;
    }
    dp[0][0] = 1;
    
    for (ll i = 0; i < n;i++){
        ll x, y;
        cin >> x >> y;
        x--, y--;
        dp[x][y] = -1;
    }
    for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (dp[i][j] == 1){
                    if(dp[i+1][j]!=-1)
                        dp[i + 1][j] = 1;
                    if (dp[i][j + 1] != -1)
                        dp[i][j + 1] = 1;
                }
                    
            }
    }
    dp[n - 1][n - 1] == 1 ? cout << "YES\n" : cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
