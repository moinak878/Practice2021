#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x;
    cin >> x;
    /*
        g + ab/g = x;
        1 + ab = x; (a,b coprimes)
        so , ab =  x - 1 
        if , a = 1 
        then => b = x -1 
        since gcd(1,anything) = 1

    */
    cout << 1 << " " << x - 1 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
