#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

bool f (ll x , ll m , ll n , vector< vector<ll> > &p){
    // one store with atleast a pair of gifts out of m stores 
    // all frens must get >= x joi
    vector<bool> yessa(n,false);
    bool pair = false;
    for (int i = 0; i < m; i++)
    {
        ll cnt = 0LL;
        for (int j = 0; j < n; j++)
        {
            if(p[i][j]>=x){
                cnt++;
                yessa[j] = true;
            }
            if(cnt>1)
                pair = true;
        }
    }
    if(!pair && n>1)
        return false;
    bool ans=true;
    for(auto i : yessa)
        ans = ans & i;
    return ans;
}

void solve()
{
    ll n , m;
    cin>>m>>n;
    vector< vector<ll> > p;
    ll alpha = LLONG_MAX;
    ll mx = LLONG_MIN;
    for (int i = 0; i < m; i++){
        vector<ll> temp(n);
        for (int j = 0; j < n;j++){
            cin >> temp[j];
            alpha = min(alpha, temp[j]);
            mx = max(mx, temp[j]);
        }
        p.push_back(temp);
    }
    // maximize alpha = min(a1,a2,a3,.....)
    // what is the lowest alpha ? -> minimum of all p[i]
    ll l=alpha, r=mx;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if(f(mid,m,n,p)){
            alpha = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << alpha<<"\n";
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