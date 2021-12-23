#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = a[0];
    for (int i = 1; i < n;i++)
        ans = max(ans, a[i] - a[i - 1]);
    cout << ans << endl;
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
