#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int a, b, p ,q;
    cin >> a >> b >> p >> q;
    int col1 = (a + b)%2;
    int col2 = (p + q)%2;
    if(a==p && b==q)
        cout << 0;
    else if ( col1==col2)
        cout << 2;
    else if(col1 != col2)
        cout << 1;
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
