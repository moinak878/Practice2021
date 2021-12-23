#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    ll m = 1e9 + 7;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    int q;
    cin >> q;
    vector<ll> x(q);
    for (auto &i : x)
        cin >> i;
    ll sum = 0;
    for (int j = 0; j < n; j++)
            sum += a[j] % m;

    for (int i = 0; i < q; i++)
    {
        vector<ll> a_old(a);
        // a -> a + f(a, x[i]);
        // if (x[i] >= 0)
        // {
        //     //right rotn
        //     for (int j = x[i]; j < n;j++){
        //         a[j] = (a[j] + a_old[j - x[i]])%m;
        //     }
        //     for (int j = 0; j < x[i];j++){
        //         a[j] = (a[j] + a_old[n-x[i]+j])%m;
        //     }
        // }
        // else{
        //         //left rotn code
        //         x[i] = -x[i];
        //         for (int j = 0; j <= x[i];j++){
        //             a[j] = (a[j] + a_old[j + x[i]])%m;
        //         }
        //         for (int j = x[i] + 1; j < n;j++)
        //             a[j] = (a[j] +a_old[j-x[i]-1]) % m;
        // }
        //sum

        sum = (2 * sum) % m;
        cout << sum % m << endl;
    }
        return 0;
}