#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll xo, n;
    cin >> xo >> n;
        /*  xo [even] -> xo-1 odd -> xo-1+2 odd -> xo-1+2+3 even -> xo -1+2+3-4 even -> 
            -> xo -1+ 2+3 -4-5  odd -> xo-1+2+3-4-5+6+7...

            xo [odd] -> xo+1 even -> xo + 1-2 even -> xo +1-2-3 odd -> xo +1-2-3+4 odd -> ....



        0 : 0 even (0) if rem = 0 => ans = 0 
        1:  -1 odd (n-2n)  if rem = 1 => ans = -n
        2: 1 odd   (n-1) if rem = 2 => 1 
        3:  4 even (n+1) if rem=3 => ans = n+1
        4: 0 even  (0)
        5:  - 5 odd  (n-2n)
        6 :  1 odd  (1)
        7 :  8 even (n+1)
        8 : 0 even (0)

        */


    ll rem = n % 4;
    ll ans = 0;
    if(xo & 1 ){
         if(rem==0)
             xo = xo;
        else if ( rem == 1 )
            xo = xo + n;
        else if(rem==2)
            xo = 1;
        else
            xo = 2;
        }

    else if (rem == 1)
        ans = n;
    else if(rem==2)
        ans = 1;
    else if(rem==3)
        ans = n + 1;
    
    if (xo % 2 == 1)
        xo -= ans;
    else
        xo += ans;
    cout << xo;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}
