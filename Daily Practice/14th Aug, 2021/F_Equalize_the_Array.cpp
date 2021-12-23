// https://codeforces.com/problemset/problem/1490/F 
#include <bits/stdc++.h>
#include<iterator>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    set<ll> s;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for(ll i = 0;i < n;i++){
        m[a[i]]++;
    }
    for(map<ll,ll>::iterator it = m.begin();it != m.end();it++)
        s.insert(it->second);
    
    ll ans = LLONG_MAX;
    for(set<ll>::iterator it = s.begin();it != s.end();it++){
        //for each unique C
        ll temp_ans=0;
        for (map<ll, ll>::iterator it1 = m.begin(); it1 != m.end(); it1++)
        {
            if(it1->second >= * it)
                temp_ans += (it1->second - *it);
            else
                temp_ans += (it1->second);
        }
        ans=min(ans,temp_ans);
        temp_ans = 0;
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

