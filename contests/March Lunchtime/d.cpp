#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        ll a,y,x;
        cin >> a >> y >> x;
        ll candles = 0;
        if (a < y)
        {
            candles = x * a + 1;
        }
        else{
            candles = x * y;
        }
        cout << candles << endl;
    }
    return 0;
}