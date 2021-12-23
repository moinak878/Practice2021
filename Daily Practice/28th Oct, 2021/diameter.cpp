#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n' 
#define tree_input(edges) for (int i = 0; i < (edges); i++) { ll a,b; cin>>a>>b;  adj[a].push_back(b);  adj[b].push_back(a);}
#define mod 1000000007

vector<vector<int> > adj;
int path[100000], dia[100000];

void dfs(int node, int parent)
{
    path[node] = 0; // max of path of children to leaf + 1 
    dia[node] = 0; // summation of two distinct children whose path to leaf are largest 
    for (auto child : adj[node])
    {
        if(child == parent)
            continue;
        dfs(child, node);
        if(path[child]+1>=path[node]){
            dia[node] = path[node];
            path[node] = path[child] + 1;
        }
    }
    dia[node] += path[node];
}

void solve()
{
    int n;
    cin >> n;
    adj.resize(n);
    tree_input(n-1);
    dfs(1, 0); // tree rooted at 1
    for (int i = 1; i <=n;i++){
        cout << "path to leaf from  "<< i << " : " << path[i]<<endl;
        cout << "dia to leaf from  "<< i << " : " << dia[i]<<endl<<endl;
    }
    cout << "diameter of tree is : ";
    ll diameter = 0;
    for (int i = 1; i <= n; i++)
        diameter = max(diameter, dia[i]);
    cout << diameter << endl;
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
