#include<bits/stdc++.h>
#include<unordered_set>
#define ll long long
using namespace std;

ll fact(ll n, ll m) 
{
    if (n >= m)
        return 0;
    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i)%m;

    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        unordered_set <ll> s;
        ll cnt = 0;
        ll m = 1e9 + 7;
        ll f = fact(n - 2, m) % m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            }
            for (ll i = 0; i < n;i++){
                if(s.find(a[i]+1)!=s.end())
                    {
                        cnt += 1*f;
                        cnt = cnt % m;
                    }
                if (s.find(a[i] - 1) != s.end())
                    {
                        cnt += 1*f;
                        cnt = cnt % m;
                    }
            }
            cout << cnt % m<<endl;
    }
    return 0;
}