#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b;
    cin >> a >> b;
    if(b==1){
        if(a==1)
            cout << "YES\n";
        else    
            cout << "NO\n";
        return;
    }
    else{
        ll i=2;
        ll p = b%a;
        while(i<=100){
            if(p==0){
                cout<<"YES\n";
                return;
            }
            p *= b;
            p=p%a;
            i++;
    }
    }
    cout<<"NO\n";
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
