#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x , y;
    cin >> x >> y;
    /*
        how many (a,b) = ? 
        a/b = a%b;
        a -> 1 to x 
        b -> 1 to y 
        observations : 
        -- a>b 
        -- a is not a multiple of b
        -- if y>x -> no use -> y=x-1;
        -- a lies in (x1* b , (x1+1) *b )
        -- pairs are (a,b) when b>x1 
    */
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
