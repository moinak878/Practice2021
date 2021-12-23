//combining two types of seg trees
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> tree;
vector<ll> delta;
ll INF = LLONG_MAX;

ll f(ll node , ll lx , ll rx , ll left , ll right , ll v){
    // cout <<"node : "<<node<<" with left : " << lx << " , right : " << rx<< "\n";
    if (rx < left || lx > right)
        return INF;
    if (lx >= left && rx <= right)
    {
        if (v != -1)
            delta[node] += v;
        return (tree[node]+delta[node]);
    }
            if(delta[node]!=0){
               //propagate changes
               delta[2 * node] += delta[node];
               delta[2 * node + 1] += delta[node];
               //reset
               delta[node] = 0;
            }
        int mid = (lx+rx) / 2;
        ll x = f(2 * node, lx, mid, left, right, v);
        ll y = f(2 * node + 1, mid + 1, rx, left, right, v);
        tree[node] = min(tree[2 * node]+delta[2*node], tree[2 * node + 1]+delta[2*node+1]);
        return min(x, y);
}

int main()
{
    ll n, m;
    cin >> n >> m;
        while (__builtin_popcount(n) != 1)
            {
                n++;
            }
    delta.resize(2 * n);
    tree.resize(2 * n);

        while (m--)
        {
            ll type;
            cin >> type;
            if (type == 1)
            {
                ll l, r, v;
                cin >> l >> r >> v;
                r--;
                f(1, 0, n - 1, l, r, v);
            }
            else{
            ll l, r;
            cin >> l >> r;
            r--;
            ll ans = f(1, 0, n - 1, l, r, -1);
            cout << ans << "\n";
        }
    }
    return 0;
}