#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]>=0)
                ans+=a[i];
            else
                b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        for (int i = 0; i < min(k,(ll)b.size());i++)
            ans+=(-1*b[i]);

        cout << ans << "\n";
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
