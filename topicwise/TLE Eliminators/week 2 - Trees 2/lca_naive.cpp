#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve(){

}

//assign parents to all nodes of tree p[root]=-1
void dfs(int v , int p){

}

int lca(int a , int b){
    vector<int> one, two;
    // store ancestral root

    //r everse so that it is in order from root to leaf
    reverse(one.begin(), one.end());
    reverse(two.begin(), two.end());

    for(int i=0;i<min(one.size(),two.size())-1;i++){
        // check first one different break
        // else update ans  
    }
    return 0;
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
