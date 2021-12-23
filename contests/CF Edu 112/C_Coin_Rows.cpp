//minimise SCORE ! 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll m;
    cin >> m;
    ll a[2][m];
    // ll dp[2][m];
    // for(int i = 0;i < 2;i++){
    //     for (int j = 0; j < m;j++)
    //         dp[i][j] = 0;
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = LLONG_MAX;
    ll pref[m+1];
    ll suff[m+1];
    pref[0]=0;
    suff[0] = 0;
    // cout << "pref : ";
    for (int i = 1; i <= m; i++)
    {
        pref[i] = pref[i - 1] + a[1][i - 1];
        // cout << pref[i] << " ";
      }
    //   cout << "\nsuff: ";

      for (int i = 1; i <= m; i++)
          {suff[i] = suff[i - 1] + a[0][m - i];
        //   cout<<suff[i]<<" ";
          }
        //   cout << endl;
          for (ll split = 0; split < m; split++)
          {
              ans = min(ans, max(pref[split], suff[m-1-split]));
    }
    cout << ans << "\n";

    // //alice -- wants min
    // for (int i = 0; i < 2;i++){
    //     for (int j = 0; j < m;j++){
    //         if(i==0 && j==0)
    //                    dp[i][j] = a[i][j];
    //         else if(i>0 && j==0)
    //             dp[i][j]=a[i][j]+dp[i-1][j];
    //         else if(i==0 && j>0)
    //             dp[i][j]=a[i][j]+dp[i][j-1];
    //         else
    //             dp[i][j] = a[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
    //     }
    // }
    // cout<<"ans : "<<dp[1][m-1]<<endl;
    // for (int i = 0; i < 2;i++){
    //     for (int j = 0; j < m;j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    // //backtracking
    // int x = 1,y = m - 1;
    // while (x >= 0 && y >= 0)
    // {
    //     if(x==0 && y==0){
    //         a[x][y] = 0;
    //         break;
    //     }
    //     if(x==0 && y>0){
    //         a[x][y] = 0;
    //         y--;
    //     }
    //     else if(y==0 && x>0){
    //         a[x][y] = 0;
    //         x--;
    //     }
    //     else if (dp[x][y]==dp[x-1][y]+a[x][y])
    //         {
    //             a[x][y] = 0;
    //             x--;
    //         }
    //     else {
    //         a[x][y] = 0;
    //         y--;
    //     }
    // }
    // for (int i = 0; i < 2;i++){
    //     for (int j = 0; j < m;j++)
    //         cout<<a[i][j]<<" ";
    //     cout << endl;
    // }
    // //bob --max
    // for(int i = 0;i < 2;i++){
    //     for (int j = 0; j < m;j++)
    //         dp[i][j] = 0;
    // }
    // for (int i = 0; i < 2;i++){
    //     for (int j = 0; j < m;j++){
    //         if(i==0 && j==0)
    //                    dp[i][j] = a[i][j];
    //         else if(i>0 && j==0)
    //             dp[i][j]=a[i][j]+dp[i-1][j];
    //         else if(i==0 && j>0)
    //             dp[i][j]=a[i][j]+dp[i][j-1];
    //         else
    //             dp[i][j] = a[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
    //     }
    // }
    // cout << dp[1][m - 1] << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
