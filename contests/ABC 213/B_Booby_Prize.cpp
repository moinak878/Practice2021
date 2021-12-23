#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
        }
        sort(a.begin(), a.end());
        cout << mp[a[n - 2]]+1;
        return;
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
