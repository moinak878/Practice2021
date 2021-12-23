#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a, b;
    cin >> a >> b;
    for (int c = 0; c <= 255;c++){
        if ((a^c)==b){
            cout << c;
            return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
