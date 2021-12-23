//stupid long long error --> careful !
#include<bits/stdc++.h>
#define ll long long
using namespace std;

//reference : https://www.geeksforgeeks.org/minimum-number-of-edges-between-two-vertices-of-a-graph/
ll minEdgeBFS(vector <ll> edges[], ll u,
                              ll v, ll n)
{
    
    vector<bool> visited(n, 0);
 
    
    vector<ll> distance(n, 0);
 
  
    queue <ll> Q;
    distance[u] = 0;
 
    Q.push(u);
    visited[u] = true;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
 
        for (ll i=0; i<edges[x].size(); i++)
        {
            if (visited[edges[x][i]])
                continue;
 
            // update distance for i
            distance[edges[x][i]] = distance[x] + 1;
            Q.push(edges[x][i]);
            visited[edges[x][i]] = 1;
        }
    }
    return distance[v];
}




int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin>>t;
    while(t--){
        ll n, k, a;
        cin >> n >> k >> a;
        vector<ll> f(k);
        for (ll i = 0; i < k; i++)
            cin >> f[i];
        vector <ll> edges[n+1];
        for (int i = 0; i < n - 1;i++)
            {
                ll u,v;
                cin >> u >> v;
                edges[u].push_back(v);
                edges[v].push_back(u);
            }
            ll INF = 1e5 + 7;
            ll d_max = -INF, special = 0;
            for (ll i = 0; i < k; i++)
            {
                ll x = minEdgeBFS(edges, a, f[i], n);
                if (x > d_max)
                {
                    d_max = x;
                    special = f[i];
                }
            }

            for (ll i = 0; i < n;i++){
                cout << d_max - minEdgeBFS(edges, i+1, special, n) << " ";
            }
             cout << endl;
            for (ll i = 0; i < n;i++)
                cout << special << " ";
            cout << endl;
    }
    return 0;
}