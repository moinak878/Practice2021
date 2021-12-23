#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    vector<int> zeroes;
    for (int i = 0; i < n;i+=2)
        zeroes.push_back(c[i]);
    sort(zeroes.begin(),zeroes.end(),greater<int>());
    vector<int> arr_of_ones;
    for (int i = 1; i < n;i+=2)
        arr_of_ones.push_back(c[i]);
    sort(arr_of_ones.begin(),arr_of_ones.end(),greater<int>());
    vector<int> ones;
    ones.push_back(0);
    ll k = 0;
    for (int i = 1; i < n; i += 2)
        ones.push_back(arr_of_ones[k] + ones[k]), k++;
    sort(ones.begin(),ones.end(),greater<int>());  
    // prefix sums also has to be maximized 
    // 1  100 101 -> 101 100 1 ->max pref sum 

    ll ans = 0;
    for (int i = 0; i < zeroes.size();i++)
        ans+= zeroes[i]*ones[i];
    k = 0;
    ll j = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
            cout << zeroes[k++] << " ";
        else
            cout << arr_of_ones[j++]<< " ";
    }
        cout << '\n' << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
