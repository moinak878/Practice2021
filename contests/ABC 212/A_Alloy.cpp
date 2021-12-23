#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a>0 && b==0)
        cout << "Gold\n";
    else if(a==0 && b>0)
        cout << "Silver\n";
    else if(a>0 && b>0)
        cout << "Alloy\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
