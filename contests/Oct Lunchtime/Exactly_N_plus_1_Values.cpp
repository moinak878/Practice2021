#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i = 0; i < n;i++)
        cout << (1LL<<i) << " ";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
