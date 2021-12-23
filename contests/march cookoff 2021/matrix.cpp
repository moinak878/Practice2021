//probz unable to figure out general mathematical expression
//though found out a pattern
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m, k;
        ll res = 0;
        cin >> n >> m >> k;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cout << k + i + j + 2<< " ";
                res = res ^ (k + i + j + 2);
            }
            cout << endl;
        }
        cout << res;
        res = (k + 2) ^ (k + m + n);
        cout <<"\n-->"<<res<<endl;
}
    return 0;
}