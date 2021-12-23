#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int h, w;
    cin >> w >> h;
    ll ans = 0;
    for (int i = 0; i < 2;i++){
        ll k;
        cin>>k;
        vector<ll> x(k);
        for (ll j = 0; j < k; j++)
            cin >> x[j];
        sort(all(x));
        ans = max(ans, h * (x[k - 1] - x[0]));
    }
    for (int i = 0; i < 2;i++){
        ll k;
        cin>>k;
        vector<ll> x(k);
        for (ll j = 0; j < k; j++)
            cin >> x[j];
        sort(all(x));
        ans = max(ans, w * (x[k - 1] - x[0]));
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
