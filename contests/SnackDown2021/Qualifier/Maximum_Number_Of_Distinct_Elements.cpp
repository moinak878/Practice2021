#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll> > b(n);
    for (int i = 0; i < n; i++)
        {
            b[i].first = i;
            cin >> b[i].second;
        }
    // (index , value) -- sort value  -> coord compr types -> sort coord
    sort(b.begin(), b.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
        return a.second < b.second;
    });
    ll k = 0;
    for (int i = 0; i < n; i++)
        {
            if (b[i].second > k)
                b[i].second = k++;
            else
                b[i].second = k;
        }
    sort(b.begin(), b.end());
    for (int i = 0; i < n;i++)
        cout << b[i].second << " ";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
