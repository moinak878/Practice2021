#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


// ============================== segment tree template ===================================================================

struct node
{
    ll sum;
    node()
    {
        sum = 0;
    }

    node(ll x)
    {
        sum = x;
    }
};
 
ll n;
node t[(int)2e5+3]; // careful ! <-- set to 2*MAXN 
node combine(node a,node b)
{
    node ret;
    ret.sum = a.sum + b.sum;
    return ret;
}
 
void build() 
{
  for (ll i = n - 1; i > 0; --i) 
  t[i] = combine(t[i<<1],t[i<<1|1]);
}
 
node query(ll l, ll r)  // [0 ... r-1] 
{
    node resl, resr;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) 
    {
        if (l&1) resl = combine(resl, t[l++]);
        if (r&1) resr = combine(t[--r], resr);
    }
    return combine(resl, resr);
}

node query(int p) {
    node res;
    for (p += n; p > 0; p >>= 1)
        res = combine(res, t[p]);
    return res;
}

void modify(ll p,ll value) 
{
  for (t[p += n] = node(value); p >>= 1; ) 
  t[p] = combine(t[p<<1], t[p<<1|1]);
}

void modify(int l, int r, int value) {
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) t[l] = combine(value, t[l++]);
    if (r&1) t[--r] = combine(t[r], value);
  }
}

// ================================================================================================================
/*      --------------------- USING THE TEMPLATE -----------------------------
        1) set struct 
        2) set size 2*maxN
        3) set combine
        4) enter leaf node values 
        5) build() for other nodes
        6) do query,modify,...
        ----------------------------------------------------------------------
*/
// ================================================================================================================

void solve()
{
    ll q;
    cin >> n >> q;
    for (int i = 0; i < n;i++){
        ll x;
        cin >> x;
        t[n + i] = node(x);
    }
    build();
    while (q--)
    {
        int t;
        cin >> t;
        if(t==1){
            ll i, v;
            cin >> i >> v;
            modify(i, v);
        }
        else{
            ll l, r;
            cin >> l >> r;
            cout << query(l, r).sum << '\n';
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
