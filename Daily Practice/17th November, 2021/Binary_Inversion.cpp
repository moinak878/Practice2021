#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}

string sort(map<string, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<string, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
    string s="";
    // Print the sorted value
    for (auto& it : A) {
        s=it.first+s;
    }
    return s;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n;i++)
        cin >> s[i];
    ll len = n * m;
    // map<string, ll> mp;
    vector <pair<ll,string>> mp;
    for (ll i = 0; i < n;i++){
        ll cnt = 0;
        for (ll j = 0; j < m; j++)
        {
            if(s[i][j]=='0')
                cnt++;
        }
        mp.push_back({-cnt,s[i]});
    }
    // string con_s = sort(mp); --> why RE figure out later !!!
    sort(all(mp));
    string con_s="";
       for(ll i=0;i<n;i++){
           con_s += mp[i].second;
       }
    ll cnt_zero = 0;
    ll ans = 0;
    for (ll i = len - 1; i >= 0; i--)
    {
        if(con_s[i]=='0')
            cnt_zero++;
        else
            ans += cnt_zero;
    }
    cout << ans << '\n';
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



