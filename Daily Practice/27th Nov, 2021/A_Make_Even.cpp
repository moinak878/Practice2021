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
    ll n = (ll)s.size();
    if ( (s[n-1]-48) % 2 == 0){
        cout << "0\n";
        return;
    }
    if ( (s[0]-48)%2==0){
        cout << "1\n";
        return;
    }
    for (int i = 0; i < n; i ++){
        if ((s[i]-48) % 2 == 0){
            cout << "2\n";
            return;
        }
    }
    cout << "-1\n";
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
