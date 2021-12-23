#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll n, q;
vector<ll> tree;
ll f(ll node , ll left_node , ll right_node , ll lx , ll rx , ll v ){
    if(lx<=left_node && rx>=right_node){
        if(v!=-1)
            tree[node] = v;
        return tree[node];
    }
    if(lx > right_node || rx < left_node)
        return 0;
    ll next = left_node + (right_node - left_node) / 2;
    ll sum = f(2 * node, left_node, next, lx, rx, v) + f(2 * node + 1, next + 1, right_node, lx, rx, v);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
    return sum;
}
void solve()
{
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    //build segtree
   
    while(__builtin_popcount(n)!=1)  // size = highest power of 2 
        n++;
    tree.resize(2*n);
    for (ll i = 0; i < (ll)a.size();i++)
        tree[n + i] = a[i];
    for (ll i = n - 1; i >= 1;i--)
        tree[i] = tree[2 * i] + tree[2 * i + 1];

    for (ll i = 0; i < q;i++){
        ll t;
        cin >> t;
        if(t==1){
            ll x, v;
            cin >> x >> v;
            // update
            f(1, 0, n - 1, x, x, v);
        }
        else{
            ll x, y;
            cin >> x >> y;
            y--;
            // query
            cout << f(1, 0, n - 1, x, y, -1)<<'\n';
        }
    }
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
