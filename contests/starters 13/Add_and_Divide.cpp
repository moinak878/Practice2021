#include <bits/stdc++.h>
#define YY "YES"
#define NN "NO"
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll i = 2;
    ll p = b % a;
    while (i <= 100)
    {
        // a.x = b^k 
        p *= b; 
        p = p % a;
        if(p==0)
            break;
        i++;
    }
    if(p==0)
        cout << YY << "\n";
    else
        cout << NN << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
