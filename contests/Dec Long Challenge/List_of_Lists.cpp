#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
        cin >> a[i], cnt[a[i]]++;
    if(n==1)
        return void(cout <<"0\n");
    int ans = 0;
    for (auto p : cnt)
    {
        ans = max(ans, p.second);
        // cout << p.first << "->" << p.second << endl;
    }
    if(ans==1)
        return void(cout << "-1\n");
    ans = n - ans;
    if (ans != 0)
        ans++;
    cout << ans << "\n";
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
