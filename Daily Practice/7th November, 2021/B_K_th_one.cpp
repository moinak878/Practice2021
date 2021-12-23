//WA on test 59
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// ============================== segment tree template ===================================================================

struct node
{
    int sum;
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

// use these stuff for [lazy prop]
// int h = sizeof(int) * 8 - __builtin_clz(n); 
// int d[(int)1e5+3]; // N 

node combine(node a,node b) 
{
    node ret;
    ret.sum = a.sum + b.sum;
    return ret;
}
 
void build() // building the tree ✅
{
  for (ll i = n - 1; i > 0; --i) 
  t[i] = combine(t[i<<1],t[i<<1|1]);
}

int query(ll l, ll r, ll k, ll nn )
{
    if(l==r)
        return l;
    ll left = t[2 * nn].sum;
    ll mid = (l + r) / 2;
    if (k < left )
        return query(l,mid,k,2*nn);
    else
        return query(mid+1,r,k-left,2*nn+1);
}
node query(ll l, ll r)  // [0 ... r-1]  -- query a range ✅
{
    node resl, resr;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) 
    {
        if (l&1) resl = combine(resl, t[l++]);
        if (r&1) resr = combine(t[--r], resr);
    }
    return combine(resl, resr);
}

void modify(ll p,ll value=1) // point update ✅
{
    value = 1 - t[p + n].sum;
    for (t[p += n] = node(value); p >>= 1;)
            t[p] = combine(t[p << 1], t[p << 1 | 1]);
        
}

void modify(int l, int r, int value) { // modification on interval (single element access)
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) t[l] = combine(value, t[l++]);
    if (r&1) t[--r] = combine(t[r], value);
  }
}

node query(int p) {  // single element access
    node res;
    for (p += n; p > 0; p >>= 1)
        res = combine(res, t[p]);
    return res;
}

// push changes to leaves in o(logn) and then iterate from i=n to end of t[i] to see final state of array 
void push() { 
  for (int i = 1; i < n; ++i) {
    t[i << 1] = combine(t[i << 1], t[i]);
    t[i << 1 | 1] = combine(t[i << 1 | 1], t[i]);
    t[i] = 0;
  }
}

// (max , max)
// (max , + ) ---> needs segment tree beats 
// (=,+)

// (+,max) [lazy propagation] --> increment in range , queries for max [code]

/*
    void apply(int p, int value) {
    t[p] += value;
    if (p < n) d[p] += value;
    }

    void build(int p) {
    while (p > 1) p >>= 1, t[p] = max(t[p<<1], t[p<<1|1]) + d[p];
    }

    void push(int p) {
    for (int s = h; s > 0; --s) {
        int i = p >> s;
        if (d[i] != 0) {
        apply(i<<1, d[i]);
        apply(i<<1|1, d[i]);
        d[i] = 0;
        }
    }
    }

    void inc(int l, int r, int value) {
    l += n, r += n;
    int l0 = l, r0 = r;
    for (; l < r; l >>= 1, r >>= 1) {
        if (l&1) apply(l++, value);
        if (r&1) apply(--r, value);
    }
    build(l0);
    build(r0 - 1);
    }

    int query(int l, int r) {
    l += n, r += n;
    push(l);
    push(r - 1);
    int res = -2e9;
    for (; l < r; l >>= 1, r >>= 1) {
        if (l&1) res = max(res, t[l++]);
        if (r&1) res = max(t[--r], res);
    }
    return res;
    }
*/

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
    cin >> n;
    int n_cop = n;
    while (__builtin_popcount(n) != 1)
        n++;
    int m;
    cin >> m;
    for (int i = 0; i < n_cop;i++){
        ll x;
        cin >> x;
        t[n + i] = node(x);
    }
    build();
    while(m--){
        int t; cin>>t;
        if(t==1){
            int idx; cin>>idx;
            modify(idx);
        }
        else{
            int k; cin>>k;
            cout << query(0,n-1,k,1)<<'\n';
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
