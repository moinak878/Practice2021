#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

int n;
const int mx = 2e5 + 10;
vector<pair<ll, ll>> v(mx);

bool f(int x)
{
    // return true if x is possible to form 
    // how to check if x is possible to form ??
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if( min (v[i].first , n-i-1) + min(v[i].second , i+1 ) >= x - 1 ){
            ans++;
        }
            
    }
    if(ans>=x)
        return true;
    return false;
}
void solve()
{
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    ll lo = 0, hi = n;
    ll ans=0;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        if ( f(mid)){
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    cout << ans<<'\n';
}
signed main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
