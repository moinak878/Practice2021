#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define mod 1000000007
void solve()
{
    int x, y;
    cin>>x>>y;
    ll ans = abs(y - x) ;
    if(ans&1)
        ans = ans / 2 + 2;
    else
        ans = ans / 2;
    cout << ans << "\n";
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
