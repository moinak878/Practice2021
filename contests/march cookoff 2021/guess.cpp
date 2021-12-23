#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll l = 1;
        ll r = 1000;
        for (ll i = l; i <= r;i++){
            cout << i * i<<endl;
            cout << flush;
            int res;
            cin >> res;
            if(res==1)
                break;
            if(res==-1)
                exit(1);
        }
    }
    return 0;
}