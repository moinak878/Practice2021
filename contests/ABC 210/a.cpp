#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    ll ans = 0;
    if(a<n)
        {
            ans = a * x;
            n = n - a;
            ans+= n * y;
        }
    else
        ans = n * x;
    cout << ans << "\n";
    return 0;
}