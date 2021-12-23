#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<tuple<ll, ll, ll> > edge(n-1);
    for(auto &e: edge){
        cin >> get<0>(e) >> get<1>(e) >> get<2>(e);
        get<1>(e)--; // u
        get<2>(e)--; // v
    }
    sort(edge.begin(), edge.end());
    //dsu of n elements
    ll ans = 0;
    for (auto &e : edge)
    {
        ll w = get<0>(e);
        ll u = get<1>(e);
        ll v = get<2>(e);
        // ans + = w * dsu(u).size * dsu(v).size;
        // dsu.merge(u, v);
    }
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
