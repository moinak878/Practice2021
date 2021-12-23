#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    // a programmers and b mathematicians 
    // each team 
    // - 4 members 
    // - atleast one prog , one math 
    // max number of teams = ?

    ll a, b;
    cin >> a >> b;
    ll teams = 0;
    if ( a<b )
        swap(a, b);
    int t = 0;
    // b -> smaller
    if(b==0)
        return void( cout << 0 << endl );
    cout << a / ( b) << endl;
}
int main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
