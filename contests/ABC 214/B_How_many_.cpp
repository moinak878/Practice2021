#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll s,t;
    cin>>s>>t;
    ll ans=0;
    for (int a = 0;a<=s;a++){
        for (int b = 0;b<=s;b++){
            for (int c = 0;c<=s-a-b;c++){
                if(a+b+c<=s && a*b*c<=t)
                    ans++;
            }
        }
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
