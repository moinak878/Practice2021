//stupid long long error --> careful !
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin>>t;
    while(t--){
        ll n, w, wr;
        cin >> n >> w >> wr;
        vector<ll> weights(n);
        for (ll i = 0; i < n;i++)
            cin >> weights[i];
        if (w <= wr)
            cout << "YES" <<"\n";
        else
        {
            map<ll,ll> m;
            for(ll i=0;i<n;i++)
            m[weights[i]]++;
            w-=wr;
        //cout << "w : " << w << endl;
        for (auto x : m)
        {
            ll cnt = x.second;
            if(cnt>=2){
                if(cnt%2==0)
                    w -= cnt * x.first;
                else
                    w -= (cnt - 1) * x.first;
            }
        }
        if(w<=0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
     }
    }
    return 0;
}