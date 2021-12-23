#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    // to make MEX = x
    // ensure all numbers upto x present and [x is not present]
    // 1 , 2 , 3 , 4 ,.... (x-1) form all these o(n^2) worst case 
    // loop thru all extra values and form each number from there  
    // can be brought down to o(n) using a map
    // ensure remaining nos strictly greater than x 
    // so brute force will take o(n) per query -> atleast o(n^2)

    // 1 , 2 , 3 , 4 ,.... (x-1) form all these o(n^2) worst case
    // 1 ,2 , 3 , .... (x-2)  => mex = (x-1)
    // now make (x-1) from all the [extra values = only smaller nos]
    // ensure x is not present by incrementing any occurance of x

    int n;
    cin>>n;
    vector<int> a(n), cnt(n + 1);
    for (int i = 0; i < n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    
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
