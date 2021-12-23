#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll f (ll n,ll k) {
    if(2<=k && k<=n+1)
        return k-1;
    else if(n+2<=k && k<=2*n)
        return 2*n+1-k;
    else 
        return 0;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll x = 2; x <= 2 * n; x++)
    {
        
        ans+=f(n,x)*f(n,x-k);
    }
    cout << ans << "\n";
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
