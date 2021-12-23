#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    x--;
    ll col = x / n;
    ll row = x - col * n;
    cout << row * m + col + 1<<'\n';
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
