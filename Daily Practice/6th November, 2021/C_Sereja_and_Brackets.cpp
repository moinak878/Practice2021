#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// ============================== segment tree template ===================================================================

struct node
{
    ll open, close, paired;
    node()
    {
        open = close = paired = 0;
    }

    node(ll x)
    {
        // dummy code
        open = close = x;
        paired = 0;
    }
};
 
ll n;
node t[(int)4e6+3]; // careful ! <-- set to 2*MAXN 
node combine(node a,node b)
{
    node ret;
    int t = min(a.open, b.close);
    ret.open = a.open + b.open - t;
    ret.close = a.close + b.close - t;
    ret.paired = a.paired + b.paired + 2*t;
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


void solve()
{
    string s;
    cin>>s;
    n = s.size();
    for (int i = 0; i < n;i++){
        if(s[i]=='(')
            t[n + i].open = 1;
        else
            t[n + i].close = 1;
    }
    build();
    int m;
    cin >> m;
    while(m--){
        ll l, r;
        cin >> l >> r;
        l--;
        cout<<query(l, r).paired<<'\n';
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
