#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        ans = max(ans, x - i);
    }
    cout << ans << '\n';
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
