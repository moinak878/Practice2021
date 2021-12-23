#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));
    for (ll i = 0; i < k-1;i++)
        ans.push_back(a[i]);

    for (ll i = n - 1; i >= k - 1; i--)
        ans.push_back(a[i]);
    // cout << " ans : ";
    // for (ll i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";
    // cout << "\n";
    ll flag = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        if(ans[i]<=ans[i+1])
            flag++;
    }
    if(flag==k-1)
        {
            for (ll i = 0; i < n;i++)
                cout << ans[i] << " ";
            cout << "\n";
        }
    else
        cout << "-1\n";
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
