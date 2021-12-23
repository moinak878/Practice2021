#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n;i++){
        if(s.substr(0,i)==s.substr(i,n)){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
