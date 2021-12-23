#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

void solve()
{
    ll n;
    cin>>n;
    set<int> s;
    for (ll i = 1; i * i <= n; i++)
    {
        if(i*i<=n)
            s.insert(i*i);
        if(i*i*i<=n)
            s.insert(i * i * i);
    }
  
    ll cnt = 0;
    for (auto i : s)
    {
        if(i<=n)
            cnt++;
        else
            break;
    }
    cout << cnt << "\n";
}
int main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
