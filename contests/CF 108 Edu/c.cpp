#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        ll n;
        vector<int> u(n);
        vector<ll> s(n);
        cin >> n;
        for(auto &i:u)
            cin>>i;
        map<int, vector<ll> > m;
        for( int i=0;i<n;i++){
            ll s;
            cin >> s;
            if(m.find(u[i])==m.end()){
                vector<ll> v = m[u[i]];
                v.push_back(s);
            }
            else
                m[u[i]].push_back(s);
        }
        for(auto &map : m){
            cout << map.first << " --> ";
            // for (int i = 0; i < map.second.size();i++)
            //     cout << map.second[i] << " ";
            cout << endl;
        }   
    }
    return 0;
}