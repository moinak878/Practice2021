#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t = 1;
    cin >> t;
    while(t--){
        ll u, v, a, s;
        cin >> u >> v >> a >> s;
        if(v*v<u*u-2*a*s)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}