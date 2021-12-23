#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long
#define mod 1000000007

vector<ll> compress(vector<ll> a) {
  ll n = a.size();
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++) mp[a[i]] = 0;
  ll id = 1;
  for (pair<const ll, ll> &p : mp) p.second = id++;
  for (ll i = 0; i < n; i++) a[i] = mp[a[i]];
  return a;
}

void solve()
{
    ll h, w, n;
    cin >> h >> w >> n;
    vector<ll> r, c;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        r.push_back(x);
        c.push_back(y);
    }

    //coord compress r , c;
    r = compress(r);
    c = compress(c);
    for (int i = 0; i < n; i++)
        cout << r[i] << " " << c[i] << "\n";
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
