#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll gcd(ll a , ll b)
{
    return (b == 0 ) ?  a : gcd(b, a % b);
}
void solve()
{
    ll u,v;
    cin >> u >> v;
    // x/u + y/v  = x+y/u+v
    // x(u+v)v + y(u+v)u = xuv+yuv
    // x ( uv + v^2 - uv ) + y (u^2 + uv -uv) = 0
    // v^2. x + u^2. y = 0
    // x = u^2 ,  y = -v^2 
    // more general solution : 
    // gcd(a,b) = G  
    // A (B/G) + B (-A/G) = 0

    ll A = v * v;
    ll B = u * u;
    ll G = gcd(A, B);
    cout << -B/ G << " " << A / G << '\n';
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
