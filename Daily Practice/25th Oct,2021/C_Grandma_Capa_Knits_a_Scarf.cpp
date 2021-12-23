/*
when seeing english alphabets (exactly once) try brute force and see for all letetrs 26
call dis da 26 trick <- write it in sticky note XD , v easy yet kewlz
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int inf = 4e18 + 6;

ll f(string s, ll n, ll i)
{
    ll ans = 0;
    ll left = 0, right = n - 1;
    while(left<right){
        if(s[left]==s[right])
            left++, right--;
        else if (s[left] == 'a' + i)
            ans++, left++;
        else if(s[right]=='a'+i)
            ans++, right--;
        else
            return inf;
    }
    return ans;
}

void solve()
{
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = inf;
        for (int i = 0; i < 26; i++)
        {
            ans = min(ans, f(s, n, i));
        }
        ans == inf ? cout << -1 : cout << ans;
}

int main()
        {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            cout.tie(NULL);
            ll test = 1;
            cin >> test;
            while (test--)
            {
                solve();
                cout << '\n';
            }
            return 0;
        }
