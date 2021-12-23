/*
http://codeforces.com/contest/734/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define vi                  vector <int>
#define vll                 vector <ll>
#define vvll                vector <vll>
#define pii                 pair <int,int>
#define pll                 pair <ll,ll>
#define ms(a,x)             memset (a,x,sizeof(a))
#define rep(i,a,n)          for (int i=a;i<n;i++)
#define rrep(i,n,a)         for (int i=n;i>=a;i--)
#define pb                  push_back
#define pf                  push_front
#define ppb                 pop_back
#define umap                unordered_map
#define uset                unordered_set
#define all(v)              v.begin(), v.end()
#define desc()              greater <ll>()
#define endl                "\n"   //not to be used in interactive problems
#define scan_vector(v,n)    for (auto &it: v) { cin>>it; }
#define print_vector(v)     for (auto &it: v) { cout<<it<<" "; } cout<<endl;
#define print_map(mp)       for (auto &pr: mp) { cout<<pr.first<<" "<<pr.second<<endl; }
#define sync                ios_base::sync_with_stdio(false); cin.tie(NULL);
const int M = 1e9+7;

void solve()
{    
    ll n,h;
    cin >> n >> h;
    ll ans = 0;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        if(x>h)
            ans++;
        ans++;
    }
    cout << ans;
}

int main()
{
    sync;
    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}