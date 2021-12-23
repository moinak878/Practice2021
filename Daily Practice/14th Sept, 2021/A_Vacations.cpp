//AC mf !! heheh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),dp(n);
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll ans = 0;
    for(ll i=0;i<n;i++){
        if(i==0)
            dp[i] = a[i];
        else if(i!=0 && ( dp[i-1]==3 || dp[i-1]==0 ) && a[i]==3)
            dp[i] = 3;
        else if(i!=0 && dp[i-1]!=1 && (a[i]==1||a[i]==3))
            dp[i] = 1;
        else if(i!=0 && dp[i-1]!=2 && (a[i]==2||a[i]==3))
            dp[i] = 2;
        else 
            dp[i] = 0;
        if(dp[i]==0)
            ans++;
    }
    cout <<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
