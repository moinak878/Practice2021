#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string key, s;
    map<char, int> m;
    cin >> key >> s;
    for (int i = 0; i < 26;i++)
        m[key[i]] = i+1;
    int n = s.length();
    ll ans = 0;
    for (int i = n - 1; i > 0; i--)
        ans += abs(key[s[i]] - key[s[i - 1]]);
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
