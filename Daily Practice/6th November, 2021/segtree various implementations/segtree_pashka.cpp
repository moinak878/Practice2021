//WA - error somewhere 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fuck ios_base::sync_with_stdio(false);
#define off cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007

struct segtree{
    int sz;
    vector<ll> sums;

    void init(int n){
        sz = 1;
        while(sz<n) sz *= n;
        sums.assign(2 * sz, 0);
    }

    void build( vector<int> &a, int x , int lx , int rx){
        if(rx-lx==1){
            if(lx < (int)a.size())
                sums[x] = a[lx];
            return;
        }
        int m = lx + (rx - lx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void build( vector<int> &a){
        build(a, 0, 0, sz);
    }
    void set(int i , int v , int x , int lx , int rx ){
        if(rx-lx == 1){
            sums[x]=v;
            return;
        }
        int m = lx + (rx - lx) / 2;
        if(i<m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else{
            set(i, v, 2 * x + 2, m, rx);
        }
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void set(int i , int v ){
        set(i, v, 0, 0, sz);
    }

    ll sum(int l , int r , int x , int lx , int rx){
        if(lx>=r || l >=rx ) return 0;
        if(lx>=l && rx<=r)  return sums[x];
        int m = lx + (rx - lx) / 2;
        ll s1 = sum(l, r, 2 * x + 1, lx, m);
        ll s2 = sum(l, r, 2 * x + 2, m, rx);
        return s1 + s2;
    }

    ll sum(int l , int r ){
        sum(l, r, 0, 0, sz);
    }
};
void solve()
{
    int n, m;
    cin >> n >> m;

    segtree st;
    st.init(n); //init segtree with all zeroes
    // vector<int> a(n);
    for (int i = 0; i < n; i++)
   {
       ll x;
       cin >> x;
       st.set(i, x);
   }
    while(m--){
        int t;
        cin>>t;
        if(t==1){
            int i, v;
            cin>>i>>v;
            st.set(i, v);
        }
        else{
            int l, r;
            cin >> l >> r;
            cout << st.sum(l, r) << '\n';
        }
    }
}

int main() {
    fuck off
    ll test=1; 
    //cin>>test;
    while(test--)
        solve();
    return 0;
}
