/*
http://codeforces.com/contest/734/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0, d = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A')
            a++;
        else
            d++;
    }
    if(a > d)
        cout << "Anton" <<"\n";
    else if (a < d)
        cout << "Danik" <<"\n";
    else
        cout << "Friendship" << "\n";
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
