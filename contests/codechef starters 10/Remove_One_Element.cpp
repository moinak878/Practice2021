#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
#define ll long long
#define INF 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),b(n-1);
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for (ll i = 0; i < n - 1;i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    map<ll, ll> answers;
    ll ans = INF;
    for (int i = 0; i < n - 1; i++)
    {
        ll curr = b[i];
        ll diff1 = b[i] - a[i];
        ll diff2 = b[i] - a[i + 1];
        if(diff1==diff2)
            answers[diff1]++;
        else{
        if (diff1 > 0)
            answers[diff1]++;
        if (diff2 > 0)
            answers[diff2]++;
            }
    }
    map<ll, ll>::iterator it;
    for (it = answers.begin(); it != answers.end(); it++)
        {
            if(it->second>=n-1)
                ans=min(ans,it->first);
        }
        cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
