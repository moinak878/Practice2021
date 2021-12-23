//non-commutative operations -- lazy propagation 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> tree;
ll INF = 1e9 + 7;
//update left..right with some value v
ll f(ll node , ll lx , ll rx , ll left , ll right , ll v){
    // cout <<"node : "<<node<<" with left : " << lx << " , right : " << rx<< "\n";
    if (rx < left || lx > right)
        return -1;
    if (lx >= left && rx <= right)
    {
        if (v != -1)
            tree[node] = v;
        return tree[node];
        }
        if(tree[node]!=INF) 
           { 
               //propagate changes
               tree[2 * node] = tree[2 * node + 1] = tree[node];
               //reset
               tree[node] = INF;
           }
        int mid = (lx+rx) / 2;
        ll x = f(2 * node, lx, mid, left, right, v);
        ll y = f(2 * node + 1, mid + 1, rx, left, right, v);
        return (x!=-1?x:y);
}

int main()
{
    ll n, m;
    cin >> n >> m;
    while(__builtin_popcount(n)!=1)
        n++;
    //tree.resize(2 * n);
    tree.assign(2 * n, INF);
    while (m--)
    {
        ll type;
        cin >> type;
        if(type==1){
            ll l,r,v;
            cin>>l>>r>>v;
            r--;
            f(1, 0, n - 1, l, r, v);
        }
        else{
            ll i;
            cin >> i;
            ll ans = f(1, 0, n - 1, i, i, -1);
            ans = (ans == INF ? 0 : ans);
            cout << ans << "\n";
        }
    }
    return 0;
}