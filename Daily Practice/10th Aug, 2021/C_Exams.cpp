// https://codeforces.com/problemset/problem/479/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll> > v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back (make_pair(a, b));
    }
    sort (v.begin(), v.end());
    ll ans = -1;
    for (int i = 0; i < n; i++)
    {
        ll a = v[i].first;
        ll b = v[i].second;
        ans = b<ans ? a : b;
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
