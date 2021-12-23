#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
	ll ans;
	if (n > 6)
	{
		if(n%2!=0)
			n++;
		ans = 5 * n / 2;
	}
	else
		ans = 15;
	cout << ans << "\n";
	// vector< vector<ll> > dp(3);
	// if(n>=INT_MAX){
	// ll ans = 0;
	// ll smol = 15 * ceil(n / 6.0);
	// ll med = 20 * ceil(n / 8.0);
	// ll large = 25 * ceil(n / 10.0);
	// ans = (smol<med) ? (smol<large?smol:large) : (med<large?med:large);
	// cout << ans << "\n";
	// }
	// else{
	// for (int i = 0; i < 3;i++){
	// 	dp[i].resize(n+1);
	// }
	// 	for (ll i = 0; i < 3; i++)
	// 	{
	// 		for (ll j = 0; j <= n; j++)
	// 		{
	// 			if (i == 0)
	// 			{
	// 				dp[i][j] = (ll)ceil(j / 6.0) * 15;
	// 			}
	// 			else if (i == 1)
	// 			{
	// 				ll med = (ll)floor(j / 8.0);
	// 				dp[i][j] = min(dp[i - 1][j], (ll)(med * 20 + dp[i - 1][j - 8 * med]));
	// 			}
	// 			else{
	// 			ll large = (ll)floor(j / 10.0);
	// 			dp[i][j] = min(dp[i - 1][j], (ll)(large * 25 + dp[i - 1][j - 10*large]));
	// 		}
	// 	}
	// 	}
	// 	cout << dp[2][n] << "\n";
	// 	}
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




