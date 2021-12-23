#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

int parent[500005];

// iota(parent,parent+500005,0); // assigns incr values from 0 to N 
void init( ){
    for (int i = 0; i < 500005;i++){
        parent[i] = i;
    }
}

void solve()
{
    init();
    ll q;
    cin >> q;
    // we got to store queries
    vector<pair<int, pair<int, int>>> queries;
    vector<int> a;
    for(int i =0;i<q;i++) {
        ll type, x, y;
        cin >> type;
        if(type==1){
            cin >> x;
            queries.push_back({1, {x, 0}});
        }
        else {
            cin>>x>>y;
            queries.push_back({2, {x, y}});
        }
    }

    for(int i =q-1;i>=0;i--) 
    {
        ll type = queries[i].first;
        if (type == 1 )
        {
            ll x = queries[i].second.first;
            a.push_back(parent[x]);
        }
        else {
            ll x = queries[i].second.first;
            ll y = queries[i].second.second;
            parent[x] = parent[y];
        }
    }
    reverse(all(a));
    for (auto &i : a)
        cout << i << " ";
    cout << "\n";
}
// 3 2 2 3 2
int main() {

    fuck off
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
