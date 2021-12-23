//dunno what da prob 🤷🏻‍♂️
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<int> > adj(n + 1);
    vector<int> degree(n+1,0);
    int max_degree = 0;
    int node = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
        max_degree = max(max_degree, degree[u]);
        max_degree = max(max_degree, degree[v]);
        if (max_degree == degree[u])
            node = u;
        else if (max_degree == degree[u])
            node = v;
    }
    for (int i = 0; i < 12; i++)
    {
        cout << "? " << node<<endl;
        int ans;
        cin >> ans;
        if (ans == -1){
            cout << "! " << node<<endl;
            return;
        }
        node = ans;
    }
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
