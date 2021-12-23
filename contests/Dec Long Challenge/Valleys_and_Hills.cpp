#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    ll n , m ;
    cin >> n >> m;
    if(m==n){
        cout << (n + 1) * 2<<"\n";
        for (int i = 0; i < n + 1;i++)
            cout << "01";
        cout << "\n";
    }
    else if(m<n){
        string ans = "";
        for (int i = 0; i < m;i++)
            ans += "01";
        for (int i = 0; i < n - m;i++)
            ans += "010";
        cout << ans.size() << "\n"
             << ans << "\n";
    }
    else{
        string ans = "";
        for (int i = 0; i < n+1;i++)
            ans += "10";
        for (int i = 0; i < m - n-1;i++)
            ans += "110";
        ans += "1";
        cout << ans.size() << "\n"
             << ans << "\n";
    }
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
