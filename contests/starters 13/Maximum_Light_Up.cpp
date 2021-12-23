#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll p, a, b, c, x, y;
    cin >> p >> a >> b >> c >> x >> y;
    // p =  total
    ll anar = b + x * a;
    ll chakri = c + y * a;
    ll ans = 0;
    if (p/anar >= p/chakri)
    {
        ans = p / anar;
        p-= ans * anar;
    }
    else
    {
        ans = p / chakri;
        p-= ans * chakri;
    }
    ans+= max(0LL,max(p/anar, p/chakri));
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);\
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
