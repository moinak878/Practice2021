#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
typedef vector<int> vi;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

const ll MAX = 2e6;
int z[MAX], prefixi[MAX], dp[MAX], is_available[MAX]; 

void init(int m , int n , int k){
    for (int i = 0; i <= max(n, m) + k + 10; i++)
    {
        z[i] = 0;
        prefixi[i] = 0;
        dp[i] = 0;
        is_available[i] = 0;
  }
}
vi z_function(string s) {
    int n = (int) s.length();
    vi z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

void z_func_2(string new_string, int len){
    for (int i = 1, l = 0, r = 0; i < len; ++i) {
        if (i <= r){
            z[i] = min (r - i + 1, z[i - l]);
        }
        while (i + z[i] < len && new_string[z[i]] == new_string[i + z[i]]){
            ++z[i];
        }
        if (i + z[i] - 1 > r){
            l = i, r = i + z[i] - 1;
        }
    }
}

void pre_calc(string new_string, int len, int m , int n ){
    for (int i = 1,j; i < len; i++) {
        j = prefixi[i-1];
        while (j > 0 && new_string[i] != new_string[j]){
            j = prefixi[j-1];
        }
        if (new_string[i] == new_string[j]){
            j++;
        }
         prefixi[i] = j;
        if(i > n){
           j = i - n;
           dp[prefixi[i]] = max(dp[prefixi[i]], z[j + m + 1]);
           is_available[prefixi[i]] = 1;
        }
    }
}
void solve(){
    string s1, s2, x, new_string;
    int len;
    cin >> s1 >> s2 >> x;
    int k = x.length(), n = s1.length(), m = s2.length();
    init(m, n, k);
  new_string = s2 + "?" + x;
  len = new_string.length();
  vi z1 = z_function(s1 + "?" + x);
  vi z2 = z_function(s2 + "?" + x);
  z_func_2(new_string,len); // z-func for s2+x
  new_string = s1 + "?" + x;
  len = new_string.length();
  pre_calc(new_string,len,m,n); // precomputing prefixes for s1+x
  dp[0] = max(z[m + 1], dp[0]);
  for (int i = 1; i < n;i++){
      i = i * i;
      // cout << is_available[i] << " ";
  }
    is_available[0] = 1;
  ll ans = 0;
  for(ll i = n; i >= 0; --i){
    if(is_available[i]!=0) {
        ans += dp[i] + 1;
        is_available[prefixi[i - 1]] = 1;
        dp[prefixi[i - 1]] = max(dp[prefixi[i - 1]], dp[i]);
    }
}
cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
