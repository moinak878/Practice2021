#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        // n-i time ()
        // i times ((((....))))
        for (int j = 0; j < n - i;j++)
            cout << "()";
        for (int j = 0; j < i;j++)
            cout << "(";
        for (int j = 0; j < i;j++)
            cout << ")";
        cout << "\n";
    }
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
