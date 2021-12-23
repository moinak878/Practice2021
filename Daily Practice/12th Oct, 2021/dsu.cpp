#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int parent[10000001],size[10000001];

int find_set(int a)
{
    if(a == parent[a]) return a;
    return parent[a] = find_set(parent[a]);
}

void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    if(u == v)
        return;
    if(size[u] < size[v])
        swap(u,v);
    parent[v] = u;
    size[u] += size[v];
}

void solve()
{
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
