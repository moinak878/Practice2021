#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    if(n>=1 && n<=125)
    cout<<4<<endl;
    else if(n>=126 && n<=211)
    cout<<6<<endl;
    else
    cout<<8<<endl;
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
