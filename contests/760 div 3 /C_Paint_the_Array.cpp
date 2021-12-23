#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007


ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
ll findlcm(vector<ll> &arr, ll n)
{
    
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (gcd(arr[i], ans));
 
    return ans;
}


void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> s1;
    vector<ll> s2;
    for (int i = 0; i < n;i++){
        cin>>a[i];
        if(i&1)
            s2.push_back(a[i]);
        else
            s1.push_back(a[i]);
    }
    // two sets s1 and s2 
    // find such a number d s.t d divides all elements of s1 -> gcd of s1 
    // but d does not divide all elements of s2 
    ll gcd1 = findlcm(s1, s1.size());
    ll gcd2 = findlcm(s2, s2.size());
    // cout << "gcd1 : " << gcd1 << ", gcd2 : " << gcd2 << "\n";

    ll ans = gcd1;
    // gcd1 is there

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] % gcd1 == 0)
        {
            ans = 0;
            break;
        }
    }
    if(ans==gcd1){
        cout << gcd1 << "\n";
        return;
    }

    ans = gcd2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] % gcd2 == 0)
        {
            ans = 0;
            break;
        } 
                
    }
    if(ans==gcd2)
        cout<<gcd2<<"\n";
    else
        cout << "0\n";
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
