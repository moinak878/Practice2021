#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<(n);i++)
#define mod 1000000007
void solve()
{
    // H, 2B, 3B,  HR.
    int h = 0, b2 = 0, b3 = 0, hr = 0;
    vector<string> s(4);
    rep(i, 4) cin >> s[i];
    rep(i, 4){
        if(!s[i].compare("H"))
            h++;
        else if(!s[i].compare("2B"))
            b2++;
        else if(!s[i].compare("3B"))
            b3++;
        else
            hr++;
    }
    if(h==1 && b2==1 && b3==1 && hr==1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
