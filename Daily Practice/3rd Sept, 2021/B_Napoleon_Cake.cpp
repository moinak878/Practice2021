#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
// earlier solution missed if 0000023 -> 0000111 but actual ans -> 0001111
// classic dp jumps problem
void solve()
{
        int n;
        cin >> n;
        vector<int> a(n), dp(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        dp[n - 1] = a[n - 1];
        if (dp[n - 1] > 0)
            a[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            dp[i] = a[i];
            dp[i] = max(dp[i], dp[i + 1] - 1);
            if (dp[i] > 0)
                a[i] = 1;
        }
 
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
 
        cout << "\n";
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
