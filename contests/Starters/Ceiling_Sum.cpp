#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define rep(i,a,n) for (ll i=(a);i<=(n);i++)
void solve()
{
    ll a,b;
    cin >> a >> b;
    ll ans = -INT_MAX;
    // O(1) < O(n) 
    rep(i, min(a, b), max(a, b))
    {
        ll term1 = (ll)ceil((b - i) / 2.0);
        ll term2 = (ll)ceil((i - a) / 2.0);
        cout<<term1+term2<<" ";
    }
    cout <<endl;
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

for (int i = 0; i <= n-k+1;i++){
    
}
