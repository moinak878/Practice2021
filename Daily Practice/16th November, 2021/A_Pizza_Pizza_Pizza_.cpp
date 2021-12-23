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
    cin >> n;
    n++;
    if(n==1) // always consider edge cases :  here, zero cuts -> 1 slice 
        cout << 0;
    else if (n & 1)
        cout << n;
    else
        cout << n / 2;
}

int main() {

    fuck off
    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
