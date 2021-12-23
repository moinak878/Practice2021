#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int flag = 1;
    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3])
        flag = 0;
    else{
        for(int i=0;i<s.size()-1;i++){
            int one = (int)s[i]-48;
            int two = (int)s[i+1]-48;
            if (two == (one + 1) % 10)
            {

                flag++;
            }
        }
    }
    if(flag==0 || flag==4)
        cout << "Weak\n";
    else
        cout << "Strong\n";
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
