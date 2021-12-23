#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    int n = s.size();
    int i;
    // last 2 digits multiple of 25 -> 00 , 25 , 50 , 75
    for (i = n - 1; i >= 0; i--)
    {
        if(s[i]=='0')
            break;
        ans++;
    }
    i--;
    for (; i >= 0; i--){
        if(s[i]=='0' || s[i]=='5')
            break;
        ans++;
    }
    ll ans2 = 0;
    for (i = n - 1; i >= 0; i--)
    {
        if(s[i]=='5')
            break;
        ans2++;
    }
    i--;
    for (; i >= 0; i--){
        if(s[i]=='2' || s[i]=='7')
            break;
        ans2++;
    }
    ans = min(ans, ans2);
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
