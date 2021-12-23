#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,p,x,y;
    cin>>n>>p>>x>>y;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    ll ans = 0;
    for (int i = 0; i < p; i++)
    {
        if(a[i]==0)
            ans += x;
        else
            ans += y;
    }
    cout << ans << "\n";
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
