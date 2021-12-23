#include<bits/stdc++.h>
#define M 1000000007
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    return b?gcd(b, a % b):a;
}
ll LCM(ll a, ll b){
    return a / gcd(a, b) * b;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 0;
        ll G = 1;
        for (int i = 2; G <= n; i++)
        {
            G= LCM(G, i - 1);
            // cout << "f1 : " << G << endl;
            if(G>n)
                break;
            ans += i * (n / G);
            G = LCM(G, i);
            // cout << "f2 : " << G << endl;
            if(G>n)
                break;
            ans -= i * (n /G);
        }
        cout << ans % M<< "\n";
    }
}

