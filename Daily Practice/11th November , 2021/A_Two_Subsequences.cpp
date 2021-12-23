#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int ans = INT_MAX;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]-'a'<ans){
            ans = s[i] - 'a';
            idx = i;
        }
    }
    cout << s[idx] << " ";
    for (int i = 0; i < n; i++)
    {
        if(i!=idx)
        cout << s[i];
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
