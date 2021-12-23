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
    cin >> n;
    vector<ll> b(n);
    for (ll i = 0; i < n;i++)
        cin >> b[i];
    for (int i = 1; i < n; i++){
        if(b[i]>b[i-1] || (b[i-1]%b[i]) ) {
            cout << "-1\n";
            return;
        }
    }
    for (ll i = 0; i < n;i++)
        cout << b[i] << " ";
    cout << '\n';
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
