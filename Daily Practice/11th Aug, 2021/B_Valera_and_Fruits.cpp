// https://codeforces.com/problemset/problem/441/B
#include <bits/stdc++.h>
#include<map>
#define forn(i, n) for(int i = 0; i < int(n); i++)
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,v;
    cin >> n >> v;
    vector<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
        int fromLastDays = 0;
 
	int ans = 0;
                 
	for(int day = 1; day <= 3001; day++) {
		int curDay = 0;
 
		forn(i, n)
			if (a[i] == day)
				curDay += b[i]; 	
		
		
		if (curDay + fromLastDays <= v) {
			ans += fromLastDays + curDay;
			fromLastDays = 0;
		} else {
			ans += v;
			int tv = v - fromLastDays;
			if (tv < 0) tv = 0;
        	        fromLastDays = curDay - tv;
	 	}	
	}

    cout << ans << "\n";
}
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll test = 1;
        //cin>>test;
        while (test--)
        {
            solve();
        }
        return 0;
    }
