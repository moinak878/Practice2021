// https://codeforces.com/problemset/problem/479/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++)
        cin >> a[i];
    ll s = LLONG_MAX;
    ll m = 0;
    vector<pair<ll, ll> > v;
    ll index1 = max_element(a.begin(), a.end()) - a.begin();
    ll index2 = min_element(a.begin(), a.end()) - a.begin();
    s = a[index1]-a[index2];
    for (ll i = 0; i < k;i++){
        a[index1]--;
        a[index2]++;
        ll new_min= min_element(a.begin(), a.end()) - a.begin();
        ll new_max = max_element(a.begin(), a.end()) - a.begin();
        if ( a[new_max]-a[new_min] <= s && index1!=index2){
            m++;
            s = a[new_max]-a[new_min];
            v.push_back(make_pair(index1, index2));
            index1 = new_max;
            index2 = new_min;
        }
        else
            break;
    }
    cout << s << " " << m << "\n";
    for (ll i = 0; i < v.size(); i++)
        cout<<v[i].first+1<<" "<<v[i].second+1<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
