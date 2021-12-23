#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
#define lg 30
void solve()
{
    ll n;
    cin>>n;
    vector<int> a(n), b(n);
    // -1 = can_be_flipped , 0 = will never be flipped , 1 = has been flipped 
    vector<int> flipped(n, -1);
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=0;i<n;i++)
        cin >> b[i];
    ll AND = 0, flips = 0;
    for (int i =lg; i >=0; i--)
    {
        ll counter = 0;
        ll f = 0;
        for (int j = 0; j < n; j++)
        {
            //check ith bit on/off in a
            if(flipped[j]==1){
                if((b[j] >> i) & 1)
                    counter++;
            }
            else if(flipped[j]==0){
                if((a[j] >> i) & 1)
                    counter++;
            }
            else{
                 if(((a[j] >> i) & 1) || ((b[j] >> i) & 1))
                    counter++;
            }
        }
        if (counter==n){
            //must be flipped if not
            AND |= 1 << i;
            for(int j=0;j<n;j++){
                if((((a[j] >> i) & 1) == 0) && ((b[j] >> i) & 1) && flipped[j]==-1){
                      f++;
                      flipped[j] = 1;
                }
                else if(((a[j] >> i) & 1) && (((b[j] >> i) & 1)==0) && flipped[j]==-1){
                  flipped[j] = 0;
                }
            }
            flips += f;
        }
    }
    cout<<AND<<" "<<flips<<"\n";
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
