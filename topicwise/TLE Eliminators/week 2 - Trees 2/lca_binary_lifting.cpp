#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    
}

//dfs calc in time and out time 
//making 2d array for binary lifting pre calculation 

int in[1000005],out[1000005];
bool is_ancestor(int u,int v){
    if(in[u]<=in[v] && out[v]<=out[u])
        return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
