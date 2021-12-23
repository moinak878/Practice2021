#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> b(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum += b[i];
        }
    // b1+b2+b3+..+bn = n(n+1)/2 * [a1+a2+..+an]
    ll val = n*(n+1)/2;
    bool flag = true;
    vector<ll> a(n);
    if( sum % val )
        flag = false;
    else
    {
        sum = sum / val;
        // bi - bi-1 - sum = ai
        // a1 = -(b1 - bn - sum)/n  => a0 = -(b0 - bn-1 - sum)/n
        // a2 = -(b2 - b1 - sum) / n  =>  a1 = -(b1 - b0 - sum) / n 
        // an = -(bn - bn-1 - sum )/n => an-1 = -(bn-1 - bn-2 - sum )/n 
        for (int i = 0; i < n;i++){
            if((b[(n+i)%n] - b[(n+i-1) % n] - sum) % n)
                {
                    flag = false;
                    break;
                }
            a[(n + i) % n] = -(b[(n + i) % n] - b[(n + i - 1) % n] - sum) / n;
            // cout << "a[" << (n + i) % n << " ] = b[ " << (n + i) % n << " ] - b[ " << (n + i - 1) % n << " ] \n";
            if(a[(n+i)%n]<=0)
                {
                    flag = false;
                    break;
                }
        }
    }
    if(!flag)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(ll &i : a )
            cout << i << " ";
        cout << "\n";
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
