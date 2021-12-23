#include <bits/stdc++.h>
#define ll long long
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define endl '\n'
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    // ===========================================
    // 4 5
    // 1 2 3 2
    // p[] = 0 1 3 6 8
    // substring and not subset !! 
    // subset sum = x from p[x]
    // subset[l..r] = p[r] - p[l-1] = x ;
    // find p[r] such that p[r] =  x + p[l-1]; 
    // ===========================================

    // ============ MEET IN THE MIDDLE ============
    // divide the array to segments of n/2 each 
    // generate all possible subset sums for each segment 
    // o( 2 ^ n/2 ) for generating all possible subset sums 
    // now iterate over subset sum in first segment 
    // and binary search x - s[i] in second segment
    // o( n/2 * 2 ^ log (2 ^ n/2) ) = o( 2 ^ n/2 * n/2 )
    // =============================================
    
    ll sum = 0;
    vector<ll> s1,s2;
    ll ans = 0;
    ll mid = n / 2;
    ll rem = n - mid;
    for (int i = 0; i < (1 << mid);i++){
        sum = 0;
        for (int j = 0; j < 32;j++){
            if(i & (1<<j)){
                sum += a[j];
            }
        }
        s1.push_back(sum);
    }
    cout << "set2 : ";
    for (int i = 0; i < (1 << rem); i++)
    {
        sum = 0;
        for (int j = 0; j < 32;j++){
            if(i & (1<<j)){
                sum += a[mid+j];
            }
        }
        s2.push_back(sum);
        cout << sum << " , ";
    }
    cout << endl;

    sort(all(s2));
    for (int i = 0; i < s1.size(); i++)
        ans += upper_bound(all(s2), x - s1[i]) - lower_bound(all(s2), x - s1[i]); //to tackle repeated subset sums 
        // there can be many ways to form a particular number 
        // we could use a map to store cnt of elements but cool 
        // apparently b.s works faster 
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
