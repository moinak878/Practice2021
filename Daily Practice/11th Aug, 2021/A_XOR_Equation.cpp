// https://codeforces.com/problemset/problem/627/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll s, x;
    cin >> s >> x;
    ll ans = 1;
    ll AND = s - x;
    ll sub = 0;
    if (s == x)
        sub = 2;
    if (AND & 1)
    {
        cout << 0 << '\n';
        return;
    }
    AND /= 2;
    while (x)
    {
        ll ai = AND & 1;
        ll xi = x & 1;
        AND >>= 1;
        x >>= 1;
        if (ai & xi){
            cout << 0 << '\n';
            return;
        }
        if((!ai) & xi)
            ans *= 2;
    }
    cout << ans - sub << '\n';
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
