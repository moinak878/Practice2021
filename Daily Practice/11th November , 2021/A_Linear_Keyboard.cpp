#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string key, s;
    unordered_map<char, int> m;
    m.reserve(1024);
    m.max_load_factor(0.25);
    cin >> key >> s;
    for (int i = 0; i < 26;i++)
        m[key[i]] = i+1;
    int n = s.length();
    ll ans = 0;
    for (int i = n - 1; i > 0; i--)
        ans += abs(m[s[i]] - m[s[i - 1]]);
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
