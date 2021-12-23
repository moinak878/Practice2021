#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> q(n);
    for(auto &it : q)
        cin >> it;
    set<ll> smin;
    set<ll> smax;
    for (ll i = 1; i <= n;i++){
        smin.insert(i);
        smax.insert(i);
    }
    vector<ll> pmin;
    vector<ll> pmax;
    set<ll>::iterator mini;
    set<ll>::iterator maxi;
    for (ll i = 0; i < n; i++)
    {
        //fill pmin
        if(smin.find(q[i]) != smin.end()){
            pmin.push_back(q[i]);
            smin.erase(q[i]);
            mini=smin.begin();
        }
        else {
            pmin.push_back(*mini);
            smin.erase(*mini);
            mini=smin.begin();
        }
    }
     for (ll i = 0; i < n;i++){
        //fill pmax
        if(smax.find(q[i]) != smax.end()){
            pmax.push_back(q[i]);
            maxi = smax.find(q[i]);
            if(maxi!=smax.begin())maxi--;
            smax.erase(q[i]);
        }
        else{
            pmax.push_back(*maxi);
            smax.erase(*maxi);
            if(maxi!=smax.begin())maxi--;
        }
    }
    for (ll i = 0;i<n;i++){
        cout << pmin[i] << " ";
    }
    cout << "\n";
    for (ll i = 0; i < n; i++)
    {
        cout << pmax[i] << " ";
    }
    cout <<"\n";
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

