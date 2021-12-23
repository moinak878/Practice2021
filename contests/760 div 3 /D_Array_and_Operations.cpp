#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
        cin>>a[i];
    ll score = 0;
    sort(all(a));
    ll lo = 1, hi = n;
    lo = n - 2 * k;
    for (int i = 0; i < lo;i++)
        score += a[i];
    for (int i = lo; i < hi-k;i++)
        score += a[i] / a[hi - k + i - lo];
    // ,cout << a[i] << " / " << a[hi - k - 1 + i - lo] << "\n";
    cout << score << "\n";
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
