/*
http://codeforces.com/contest/734/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    while (ans > 0)
    {
        a *= 3;
        b *= 2;
        if(a>b)
            break;
        ans++;
    }
    cout << ans << "\n";
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
