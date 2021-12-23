#include <bits/stdc++.h>
#include<vector>
#include<tuple>
#define f first
#define s second
using namespace std;
#define ll long long
#define int long long
#define mod 1000000007
typedef vector<pair< pair<int,int>,int> > vp;
// colin's template 
struct dijkstra {
    int n;
    const ll inf = 4e18;
    vector<ll> dists; /* for a single run */
    vector<int> par;
    vector<bool> vis;
    vector<vector<pair<ll, int> > > edges; /* weight, to */

    void init(int s)
    {
        n = s;
        dists = vector<ll>(n);
        vis = vector<bool>(n);
        par = vector<int>(n);
        edges = vector<vector<pair<ll, int> > >(n);
  }

  void edge(int a, int b, ll wt) {
    edges[a].push_back(make_pair(wt, b));
    // edges[b].push_back(make_pair(wt, a));
  }

  using ptype = pair<ll, int>;
  void run(int src) {
    fill(dists.begin(), dists.end(), inf);
	  fill(vis.begin(), vis.end(), false);
    fill(par.begin(), par.end(), -1);

    priority_queue<ptype, vector<ptype>, greater<ptype> > pq;
    dists[src] = 0;
    pq.push(make_pair(0, src));
    while (!pq.empty()) {
      ptype foc = pq.top();
      pq.pop();
	  
	    if (vis[foc.s]) continue;
	    vis[foc.s] = 1;
	  
      dists[foc.s] = min(dists[foc.s], foc.f);
      for (ptype x : edges[foc.s]) {
        ll d = dists[foc.s] + x.f;
        if (d < dists[x.s]) {
            dists[x.s] = d;
            par[x.s] = foc.s;
            pq.push(make_pair(d, x.s));
        }
      }
    }
  }
};

void solve()
{
    int n, m;
    cin >> n >> m;
    vp edge_list;
    dijkstra d_front, d_back;
    d_front.init(n);
    d_back.init(n);
    for (int i = 0; i < m;i++){
        int a, b, c;
        cin >> a >> b >> c;
        a -= 1;
        b -= 1;
        d_front.edge(a, b, c);
        d_back.edge(b, a, c);
        edge_list.push_back(make_pair(make_pair(a, b), c));
    }
    d_front.run(0);
    d_back.run(n-1);
    int ans = LLONG_MAX;
    // now , d_front[a] + cost(a,b)/2 + d_back[b] = answer
    for (int i = 0; i < m;i++){
      //for all edges 
      int src =  edge_list[i].f.f;
      int dest = edge_list[i].f.s;
      int cost =  edge_list[i].s;
      ans = min(ans , d_front.dists[src] + cost/2 + d_back.dists[dest]);
    }
    // for (int i = n - 1; i >=0; i = d_front.par[i])
    //   cout << i << "<-- ";
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
