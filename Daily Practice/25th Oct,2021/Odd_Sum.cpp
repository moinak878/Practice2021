// https://www.codechef.com/COOK134B/problems/ODDSUM
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    // 1 + [0 + 2 + 4 + 6 ... (n-1 terms)]
    // 1 + (n-1)[(n-2)]
    cout << 1 + (n - 1) * (n - 2) << '\n';
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
