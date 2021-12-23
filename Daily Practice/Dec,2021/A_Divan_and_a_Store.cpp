#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    ll n , l , r , k;
    cin>>n>>l>>r>>k;
    vector<ll> a(n);
    for (int i = 0; i < n;i++)
        cin>>a[i];
    sort(all(a));
    ll cnt = 0LL;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=l && a[i]<=r){
            k -= a[i];
            if(k<0)
                break;
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
