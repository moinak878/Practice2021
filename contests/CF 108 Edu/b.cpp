#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin >> n >> m >> k;
        if((m-1)+(n-1)*m==k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}