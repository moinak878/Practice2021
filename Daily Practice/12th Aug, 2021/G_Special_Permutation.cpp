#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    if(n<4){
        cout << -1 << '\n';
        return;
    }
    int odd = (n&1)?n:n-1;
    for (int i = odd; i >= 1;i-=2)
        cout << i << ' ';
    cout << 4 << ' ' << 2<<' ';
    for (int i = 6; i <= n;i+=2)
        cout << i << ' ';
    cout << '\n';
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
