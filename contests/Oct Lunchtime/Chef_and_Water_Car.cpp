#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, v;
    cin >> n >> v;
    // dist = n-1 
    // v litres it can take
    ll x = n+1-v;
    ll min_cost = 0;
    ll needed = n-1;
    ll max_cost = ((n - 1) * n / 2);
    if(v==1)
        min_cost = max_cost;
    else if (v >= needed)
        min_cost = needed;
    else
        min_cost = (x) * (x - 1) / 2 + (v - 1);
    cout << max_cost << " " << min_cost << '\n';
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
