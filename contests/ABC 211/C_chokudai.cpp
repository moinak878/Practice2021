#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    ll n=s.size();
    string test = "chokudai";
    ll dp[8][n];
    for(ll i=0;i<8;i++){
        for(ll j=0;j<n;j++){
            if(test[i]==s[j]){
                if(i==0 && j==0)
                    dp[i][j] = 1;
                else if(i==0 && j>0)
                    dp[i][j] = (dp[i][j-1] + 1) %mod;
                else if (i>0 && j==0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i][j - 1])%mod;
            }
            else{
                 if (j>0)
                    dp[i][j] = dp[i][j-1];
                else
                    dp[i][j] = 0;
            }
        }
    }

    cout<<((dp[7][n-1])%mod)<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
