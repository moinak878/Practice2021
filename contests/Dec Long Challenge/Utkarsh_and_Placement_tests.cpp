#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    char a, b, c;
    cin>>a>>b>>c;
    unordered_map<char, int> m;
    m[a] = 1, m[b] = 2, m[c] = 3;
    char x, y;
    cin >> x >> y;
    char ans = m[x] < m[y] ? x : y;
    cout << ans << '\n';
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
