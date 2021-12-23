#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    vector<ll> b(7);
    for (int i = 0; i < 7;i++)
        cin>>b[i];
    sort(all(b));
    cout << b[0] << " " << b[1]<<" "<<b[6] - b[0] - b[1]<<"\n";
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
