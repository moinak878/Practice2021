#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    //1 - open , 0 - close
    int cnt = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1' && cnt==0)
            continue;
        else if(s[i]=='1' && cnt==1){
            ans += 1;
            cnt = 0;
        }
        else if(s[i]=='0' && cnt==0){
            ans += 1;
            cnt = 1;
        }
        else{
            continue;
        }
    }
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
