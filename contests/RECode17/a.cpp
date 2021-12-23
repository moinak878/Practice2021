#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n;i++)
            cin >> a[i];
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n;j++){
                if(a[i]-a[j]==abs(i-j))
                    {
                        cnt++;
                        if(i<=n/2 && j>=n/2)
                            cnt -= 1;
                    }
            }
        }

        

        cout <<cnt<<endl;
    }
    return 0;
}