#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> s(n);
    vector<ll> t(n);
    for(ll i=0;i<n;i++)
        cin >> s[i];
    ll mini=LLONG_MAX,minii=LLONG_MAX;
    for(ll i=0;i<n;i++)
        {
            cin >> t[i];
            if(t[i]<mini){
                mini=t[i];
                minii = i;
            }
        }
    vector<ll> dp(n);
    dp[minii] = mini;
    for (ll i = 1; i < n; i++)
    {
        ll index = (minii + i)%n;
        ll prev_index = (minii + i - 1)%n;
        dp[index] = min(t[index], dp[prev_index] + s[prev_index]);
    }
    for(auto i : dp)
        cout << i << "\n";
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
