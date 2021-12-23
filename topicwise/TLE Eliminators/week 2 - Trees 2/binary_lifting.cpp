//kth ancestor of a node 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

const int lg = 20; // lill over 10^6 so kewl
int par[100005][lg];
int adj[100005][1000005];
void solve()
{
    
}

void dfs(int v , int p){
    par[v][0] = p;
    for(int i = 1 ; i < lg ; i++){
        if(par[v][i-1] == -1)
            par[v][i] = -1;
        else
            par[v][i] = par[par[v][i-1]][i-1];
    }
    for(int x : adj[v]){
        if(x != p)
            dfs(x , v);
    }
}

int kth_ancestor(int v , int k){
    if(k==0)
        return a;
    for(int i = 0 ; i < lg ; i++){
    if((k>>i)&1){
        a=par[a][i];
    }
    if(a==-1)
        return a;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        dfs(1, -1);
        //kth ancestor
        solve();
    }
    return 0;
}
