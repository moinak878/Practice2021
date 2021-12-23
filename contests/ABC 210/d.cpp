#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll h,w,c;
    cin>>h>>w>>c;
    vector<vector<ll> > a;
    ll INF = 0x3f3f3f3f3f3f3f3f;
    ll ans = INF;
    ll ans2 = INF;
    for (ll i = 0; i < h; i++)
    {
        vector<ll> temp(w);
        for (ll j = 0; j < w; j++)
        {
            cin>>temp[j];
        }
        a.push_back(temp);
    }
    ll dp[h][w]; //cost of building station 1 and moving 
    for (ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(!i && !j){
                dp[i][j] = a[i][j];
            }
            else if(!i){
                dp[i][j] = min(a[i][j], dp[i][j - 1]+c);
            }
            else if (!j) {
                    dp[i][j] = min(a[i][j], dp[i - 1][j]+c); 
                } 
                else {
                    dp[i][j] = min(a[i][j], min(dp[i][j - 1] + c,dp[i - 1][j] + c));
                }
        }
    }
    ll dp2[h][w]; //cost of building station 2 and moving when station 1 is built
    for (ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if (!i && !j) {
                    continue;
                } 
            else if (!i) {
                    dp2[i][j] = min(dp[i][j - 1], a[i][j - 1]) + c + a[i][j];
                } 
            else if (!j) {
                    dp2[i][j] = min(dp[i - 1][j], a[i - 1][j]) + c + a[i][j]; 
                } 
            else {
                    dp2[i][j] = min(min(dp[i][j - 1], a[i][j - 1]) + c + a[i][j], min(dp[i - 1][j], a[i - 1][j]) + c + a[i][j]);
                }
            ans=min(ans,dp2[i][j]);
        }
    }
    reverse(a.begin(), a.end());

    ll dp3[h][w]; //cost of building station 1 and moving 
    for (ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if(!i && !j){
                dp3[i][j] = a[i][j];
            }
            else if(!i){
                dp3[i][j] = min(a[i][j], dp3[i][j - 1]+c);
            }
            else if (!j) {
                    dp3[i][j] = min(a[i][j], dp3[i - 1][j]+c); 
                } 
                else {
                    dp3[i][j] = min(a[i][j], min(dp3[i][j - 1] + c,dp3[i - 1][j] + c));
                }
        }
    }
    ll dp4[h][w]; //cost of building station 2 and moving when station 1 is built
    for (ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            if (!i && !j) {
                    continue;
                } 
            else if (!i) {
                    dp4[i][j] = min(dp3[i][j - 1], a[i][j - 1]) + c + a[i][j];
                } 
            else if (!j) {
                    dp4[i][j] = min(dp3[i - 1][j], a[i - 1][j]) + c + a[i][j]; 
                } 
            else {
                    dp4[i][j] = min(min(dp3[i][j - 1], a[i][j - 1]) + c + a[i][j], min(dp3[i - 1][j], a[i - 1][j]) + c + a[i][j]);
                }
            ans2=min(ans,dp4[i][j]);
        }
    }
    cout << min(ans, ans2)<<"\n";
    return 0;
}
