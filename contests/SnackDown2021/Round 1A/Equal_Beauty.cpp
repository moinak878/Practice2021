#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
const ll inf = 4e18;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    sort(a.begin(), a.end()); // 2 5
    ll smol = a[0];  // 2
    ll big = a[n - 1]; //5
    ll mi = inf;
    if (n == 2)
    {
        cout << 0 << "\n";
        return;
    }
    if(n==3){
        cout<< min(abs(a[1] - a[0]), abs(a[2] - a[1]))<<"\n";  
        return;
    }
    // mi = min ( big - a[1], a[n-2] - smol); // error !!!!!! cuz (-2,.....,7) is not actually 9 DUHH !
    ll sum1 = 0, sum2 = 0;
    for (int i = 1; i < n; i++)  
        sum1+= abs(a[i] - a[((n - 1) / 2)+1]);
    for (int i = 0; i < n - 1; i++) // smth , (-2 0 1 2 6 7) -> 0 0 1 2 6 7  -> ....
        sum2 += abs(a[i] - a[(n - 1) / 2]);
    mi = min(sum1, sum2);
    /*
        since, we need to minimize the difference we cant have smol and big
        in the same part. so in one part we have smol and in other part we have big.
        now task is to find two numbers one greater than smol and another less than big 
        such that
        big - left == right - smol
    */

    // left + right =as close as= big+smol
    //sliding window
    if(mi!=0){
        ll left = 1;
        ll right = n - 2;
        ll sum = big + smol; // a[0] + a[n-1]
        while (left < right)
        {
            if (a[left] + a[right] ==sum)
                {
                    mi = 0;
                    break;
                }
            else if (a[left] + a[right] < sum)
                {
                    mi = min(mi, abs(sum - (a[left] + a[right]))); 
                    left++;
                }
            else
                {
                    mi = min(mi, abs(sum - (a[left] + a[right])));
                    right--;
                }
        }
    }
    cout << mi<<"\n";
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
