#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int parent[10000001],size[10000001];

void init(int n){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        size[i]=1;
    }
}

int find_set(int a)
{
    if(a == parent[a]) return a;
    return parent[a] = find_set(parent[a]);
}

void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    if(u == v)
        return;
    if(size[u] < size[v])
        swap(u,v);
    parent[v] = u;
    size[u] += size[v];
}

void solve()
{
    int cnt = 0;
    vector< pair<int,int> > close;
    int n;
    cin >> n;
    init(n);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        if(find_set(a) != find_set(b))
            union_set(a,b);
        else
            {
                cnt++;
                close.push_back(make_pair(a,b));
            }
    }
    cout << cnt << "\n";
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(find_set(i));
    }
    vector<int> unique;
    for(int i : s)
        unique.push_back(i);
    
    for (int i = 0; i < cnt;i++){
        cout << close[i].first << " " << close[i].second << " "<<unique[i]<<" "<<unique[i+1]<<"\n";
    }
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
