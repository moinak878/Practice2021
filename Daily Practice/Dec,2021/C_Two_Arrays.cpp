#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

int dp[30][1005];

// a1,a2,a3,....am,bm,...b3,b2,b1 -> non decr sequence

void solve()
{
    int n, m;
    cin >> n >> m;
   
    // dp[i][j]=at position i with elememt j 
    // base cases dp[2m][1...n] = 1 
    for (int j = 1; j <= n;j++){
        dp[2 * m][j] = 1;
    }
    //transitions 
    for (int i = 2*m-1; i >=1;i--){
        for (int j = 1; j <= n;j++){
            // dp[i][j]+=dp[i+1][all k such that k>=j]
            for (int k = j; k <= n;k++)
                dp[i][j] = (dp[i][j] + dp[i+1][k])%mod;
        }
    }

    ll ans = 0;
    for (int j = 1; j <= n;j++)
            ans = (ans + dp[1][j])%mod;
    cout << ans << "\n";
}

int main() {

    fuck off
    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
