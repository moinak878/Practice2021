#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    //pattern recognition , maths dunno 
    if (n % 2 == 0)
        cout << k % n + 1 << "\n";
    else
    {
        cout << (k + k / ((n - 1) / 2)) % n + 1 << "\n";
    }
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