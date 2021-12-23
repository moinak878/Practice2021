#include<bits/stdc++.h>
#include<unordered_set>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll cnteven = 0;
        ll cntodd = 0;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (n & 1)
                cntodd++;
            else
                cnteven++;
        }
        cout << max(cnteven, cntodd);
    }
    return 0;
}