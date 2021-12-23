#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++){
        if(s[i]=='U' && s[i-1]=='M')
           { 
               cout << "Yes\n";
               return;
           }
    }
    for (int i = 2; i < s.size(); i++){
        if(s[i]=='U' && s[i-1]=='?' && s[i-2]=='M'){ 
               cout << "Yes\n";
               return;
           }
    }
    cout << "No\n";
    return;
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
