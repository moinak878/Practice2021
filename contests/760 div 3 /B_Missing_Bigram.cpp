#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int n ;
    cin >> n;
    vector<string> s(n-2);
    for (int i = 0; i < n - 2; i++)
        cin >> s[i];
    string ans="";
    int flag = 0;
    ans += s[0][0];
    for (int i = 0; i < n - 3; i++)
    {
        if(s[i][1]==s[i+1][0])
            ans += s[i+1][0];
        else
            {
                flag = 1;
                ans += s[i][1];
                ans += s[i + 1][0];
            }
    }
    ans += s[n - 3][1];
    if(flag==0)
        ans += 'a';
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
