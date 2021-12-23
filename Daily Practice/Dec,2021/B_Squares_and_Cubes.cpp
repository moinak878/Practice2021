#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    // square and cube => ()^2 = ()^3 => (()^3)^2 or (()^2)^3 
    // inclusion-exclusion => (cubes) + (squares) + (sq and cubes) 
    cout << (ll)sqrt(n) + (ll)cbrt(n) - (ll)sqrt(cbrt(n)) << "\n";
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
