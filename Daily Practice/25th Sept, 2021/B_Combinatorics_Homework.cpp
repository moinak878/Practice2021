#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    vector<ll> v = {a, b, c};
    sort(v.begin(), v.end());
    ll mx = a + b + c - 3;
    ll mn = v[2] - 1 - v[1] - v[0];
    if ( m<=mx && m>=mn)
        cout << "YES" <<"\n";
    else
        cout << "NO" <<"\n";
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
