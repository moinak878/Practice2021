#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> v;
        ll ans=0;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i]=='*')
                v.push_back(i);
        }
        if(v.size()<=2)
            ans = v.size();
        else{
            //greedy
            ll prev_i =v[0];
            ans = 1;
            for (ll i = 1; i < v.size(); i++)
            {
                if(i==v.size()-1)
                    ans += 1;
                else if(v[i]<prev_i+k)
                    continue;
                else{
                    ans += 1;
                    prev_i = v[i];
                }
            }
        }
        cout<<ans << endl;
    }
    return 0;
}