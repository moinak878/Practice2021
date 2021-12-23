#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll s, r;
            cin >> s >> r;
            if (s <= x){
                ans = max(ans, r);
            }
        }
        cout<<ans << endl;
    }
    return 0;
}