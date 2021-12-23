#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];

//1>>node_1
//node_1>>node_2 
// (node1,node2) ->diametric ends
//multiple diametric ends can be present --> symmetric case

void dfs(int v , int p, int d, int& mx , int& node){
    if(d>mx)
        {
            mx=d;
            node = v;
        }
    for (int x : adj[v])
    {
        if(x!=p){
            dfs(x,v,d+1,mx,node);
        }
    } 
}

void calc(int node , int d , int b , vector<int> x){}

int main(){
    int n;
    cin >> n;

    int x, y;
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int mx = 0;
    int node_1, node_2;
    dfs(1,0,0,node_1,mx);
    mx = -1;
    dfs(node_1, 0, 0, mx, node_2);
    int d = mx;

    vector<int> dist_1(n+1), dist_2(n+1);
    calc(node_1, 0, 0, dist_1);
    calc(node_2, 0, 0, dist_2);
}