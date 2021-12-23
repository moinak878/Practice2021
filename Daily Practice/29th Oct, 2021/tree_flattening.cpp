#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
#define tree_input(edges) for (int i = 0; i < (edges); i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj;
int euler_tour[100005];
int ti=1;

void dfs(int node, int parent) //tree flattening and plus-minus trick ^^ 
{
   euler_tour[ti++]=node;
   for(auto children : adj[node]){
        if(children==parent) continue;
        dfs(children,node);
   }
   euler_tour[ti++]=node;
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n);
    tree_input(n-1);
    dfs(1, 0); // tree rooted at 1
    cout<<"Flattened Tree :- ";
    for (int i = 1; i <ti;i++){
        cout<<euler_tour[i]<<",";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
