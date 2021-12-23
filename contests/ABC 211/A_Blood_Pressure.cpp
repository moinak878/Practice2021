#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b;
    cin >> a >> b;
    double c = (a - b) / 3.0 + b;
    cout <<setprecision(8)<< c << endl;
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
