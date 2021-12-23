#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n), b(n);
    for (int i = 0;i<n;i++) cin>>a[i];
    for (int i = 0;i<n;i++) cin>>b[i];
    sort(all(a));
    sort(all(b));
    for (int i = 0; i < n;i++)
        if(b[i]<a[i] || b[i]-a[i]>1)   {cout<<"NO\n";return;}
    cout << "YES\n";
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
