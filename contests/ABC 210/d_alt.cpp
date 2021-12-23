    //adapt to this style of code [!!!!!!]
    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define rep(i, n) for (ll i = 0; i < ll(n); i++)
     
    int main() {
        ll h, w, c;
        cin >>  h >> w >> c;
        vector<vector<ll>> a(h, vector<ll> (w));
        rep(i, h) {
            rep(j, w) {
                cin >> a[i][j];
            }
        }
        ll INF = 1e11;
        ll ans = INF;
        rep(_, 2) {
            vector<vector<ll>> dp(h, vector<ll> (w));
            rep(i, h) {
                rep(j, w) {
                    if (!i && !j) {
                        dp[i][j] = a[i][j];
                    } else if (!i) {
                        dp[i][j] = min(a[i][j], dp[i][j - 1]+c);
                    } else if (!j) {
                        dp[i][j] = min(a[i][j], dp[i - 1][j]+c); 
                    } else {
                        dp[i][j] = min(a[i][j], min(dp[i][j - 1] + c,dp[i - 1][j] + c));
                    }
                }
            }
            vector<vector<ll>> x(h, vector<ll> (w));
            rep(i, h) {
                rep(j, w) {
                    if (!i && !j) {
                        continue;
                    } else if (!i) {
                        x[i][j] = min(dp[i][j - 1], a[i][j - 1]) + c + a[i][j];
                    } else if (!j) {
                        x[i][j] = min(dp[i - 1][j], a[i - 1][j]) + c + a[i][j]; 
                    } else {
                        x[i][j] = min(min(dp[i][j - 1], a[i][j - 1]) + c + a[i][j], min(dp[i - 1][j], a[i - 1][j]) + c + a[i][j]);
                    }
                    ans = min(ans, x[i][j]);
                }
            }
            if (_) {
                cout << ans << endl;
                return 0;
            }
            reverse(a.begin(), a.end());
        }
    }