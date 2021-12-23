#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x,ans=-1;
        cin >> n >> m >> x;
        for (ll i = 0; i < n; i++)
        {
            ll j = (x - 1 - i);
            if (j%n==0 && j >= 0 && j/n < m)
            {
                j = j / n;
                ans = m * i + j + 1;
                break;
            }
        }
        cout<<ans << endl;
    }
    return 0;
}