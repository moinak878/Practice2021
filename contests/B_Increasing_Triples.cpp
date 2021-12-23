#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define rep(i,n) for(ll i=0;i<(n);i++)
#define mod 1000000007
ll f(ll x, vector<ll> &v){
    int ans = -1;
    ll l = 0;
    ll r = v.size()-1;
    while(l<=r){
        ll m = l + (r-l)/2;
        if(v[m]>x){
            ans = m;
            r = m-1;
        }
        else
            l=m+1;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i, n) 
        cin >> a[i];
    rep(i, n) 
        cin >> b[i];
    rep(i, n) 
        cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    ll ans = 0;
    for (int i = 0; i < n; i++){
        
            ll temp = f(a[i], b);
            if (temp == -1)
                break;
            ll temp2 = f(b[temp], c);
            if( temp2 == -1)
                break;
            // cout << "b[temp] : " << b[temp];
            // cout << ", c[temp2] : " << c[temp2]<<endl;

            b.erase(b.begin() + temp);
            c.erase(c.begin()+temp2);
            ans++;
        
    }

 cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
