// https://codeforces.com/problemset/problem/1366/C
//solved mf 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector< vector<ll> > a;
    for(ll i = 0; i < n; i++){
        vector<ll> temp(m);
        for(ll j = 0; j < m; j++)
            cin >> temp[j];
        a.push_back(temp);
    }
    vector<map<ll, ll> > count(n+m-1);
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < m;j++){
            if(a[i][j]==0)
                count[i + j][0]++;
            else
                count[i + j][1]++;
        }
    }
    ll ans = 0;
    // first and last check
    if(count[0][0]!=count[n+m-2][0])
        {
            ans++;
        }
    // odd and even check
    ll skip = LLONG_MAX;
    if ((n + m - 1) & 1)
        skip = (n + m - 2) / 2;
    // loop over all maps 
    for (ll i = 1; i <= (n + m - 2)/2; i++)
    {
        if(i==skip)
            continue;
        // cout << "zeroes , ones : " << count[i][0] << " , " << count[i][1] << endl;
        ll i_ = n + m - 2 - i;
        // cout << "i : " << i << ",";
        // cout << "alternate : " << i_ << "\n";
        // first zero : count[i][0] and first one : count[i][1]
        // last zero : count[n+m-1-i][0] and last one : count[n+m-1-i][1]
        ans += min(count[i][1] + count[i_][1],
                   count[i][0] + count[i_][0]);
    }
    cout<< ans << "\n";
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
