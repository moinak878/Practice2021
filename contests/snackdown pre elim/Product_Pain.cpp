#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

ll max_subset(set<ll> s , ll mi , ll mx ){
    // cout << " \n mi , mx : " << mi << " , " << mx << endl;
    ll ans = 0;
    auto idx = s.lower_bound((mx+mi) / 2);
    ll ele = *idx;
    if (idx != s.end())
        ans = max(ans, (mx - ele) * (ele - mi));
    if(idx == s.begin())
        return ans;
    idx--;
    ele = *idx;
    ans = max(ans, (mx - ele) * (ele - mi));
    // cout << " \n max : " << ans<<endl;
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin>>a[i];
    ll ans=0;
    ll mi, mx;
    for (ll i = 0; i < n;i++){
        set<ll> s;
        mi = mx = a[i];
        // cout << " here a[i] : " << mi << "\n";
        for (ll j = i; j < n; j++)
        {
            s.insert(a[j]);
            ll temp = 0;
            mx = max(mx, a[j]);
            mi = min(mi, a[j]);
            // cout << " i , j : " << i << " , " << j << endl;
            if( j - i + 1 >=  3)
            ans += max_subset(s, mi, mx);
        }
    }
    cout << ans << "\n";
}

int main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

