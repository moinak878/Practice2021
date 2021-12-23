#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    // xo (odd) + (1-2-3+4)+(5-6-7+8)+.....
    // n%4==0 => ans = 0
    // n%4==1 => ans = n
    // n%4==2 => ans = -1
    // n%4==3 => ans= -1-n
    ll xo , n;
    cin >> xo >> n;
    ll ans;
    if(n%4==0)
        ans = 0;
    else if (n % 4 == 1)
        ans = n;
    else if (n % 4 == 2)
        ans = -1;
    else
        ans = -1 - n;
    if(xo&1)
        xo += ans;
    else
        xo -= ans;
    cout << xo<<'\n';
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
