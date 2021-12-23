#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    for (ll i = 0; i < (r - l) / 2 + 1;i++)
        cout<<l+2*i<<" "<<l+2*i+1<<"\n";
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
