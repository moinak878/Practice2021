#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for (int i = 0; i < n-1;i++){
        ll digit = s[i] - '0';
        if(digit!=0)
            ans += 1 + digit;
    }
    ans+=s[n-1]-'0';
    cout << ans << "\n";
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
