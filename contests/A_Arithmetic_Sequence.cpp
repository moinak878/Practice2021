#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
  ll a[3];
  for(ll i=0;i<3;i++)
    cin>>a[i];
   ll diff1 = a[1] - a[0];
   ll diff2 = a[2] - a[1];
   if(diff1 == diff2){
       cout<<"0";

   }
   else if(a[1] < (a[0] + a[2])/2) {
     if((a[0] + a[2])%2==0){
       cout<< ((a[0] + a[2])/2) - a[1];
     }
     else if((a[0] + a[2])%2==1) {
     ll s = (((a[0] + a[2])/2)-a[1]+(2));
       cout<< s;
     }
   }
   else if(a[1] > (a[0] + a[2])/2) {
       cout<< (2*a[1] - (a[0] + a[2]));
   }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
