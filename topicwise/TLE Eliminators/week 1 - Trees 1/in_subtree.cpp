#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int in[100005];
int out[100005];
int ti;

void dfs(int v,int p){
    in[v] = ti++;
    for(int x:adj[v]){
        if(x!=p){
            dfs(x,v);
        }
    }
    out[v] = ti;
}

int main(){
    int n;
    cin >> n;

    int x, y;
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ti = 0;
    dfs(1,0);

    int q;
    cin >> q;

    while(q--){
        cin >> x >> y;
        cout<<(in[x]<=in[y] && out[x]>=out[y]?"YES":"NO")<<endl;
    }
}