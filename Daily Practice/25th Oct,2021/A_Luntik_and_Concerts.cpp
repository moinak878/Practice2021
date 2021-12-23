/*
 a=1 mins => 1 , 0
 b = 2 mins => 2 , 0
 c = 3mins => 3 , 0
s = a + 2b + 3c
s/2 , s/2
odd s/2 s/2-1
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll s = a + 2 * b + 3 * c;
    if(s&1)
    {
        cout << 1 << endl;
        return;
    }
    cout << 0<< "\n";
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
