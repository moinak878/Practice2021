#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> A(n);
    vector<ll> B(m);
    for (ll i = 0;i<n;i++)
        cin >> A[i];
    for (ll i = 0;i<m;i++)
        cin >> B[i];
    //two pointers
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    ll ans = LLONG_MAX;
    ll a = 0, b = 0;
    while (a < n && b < m){
        ans = min(ans, (ll)abs(A[a] - B[b]));
        if(A[a]<B[b])
            a++;
        else
            b++;
    }
    cout << ans << "\n";

    // long long int x=0,y=0,i,n,m;
    // cin>>n>>m;
    // long long int a[n],b[m];
    // for(i=0;i<n;i++)
    // cin>>a[i];
    // for(i=0;i<m;i++)
    // cin>>b[i];
    // sort (a,a+n);
    // sort (b,b+m);
    // int min = INT_MAX;
    // while (x<n && y<m){
    //     if(abs(a[x]-b[y]) < min){
    //         min=abs(a[x]-b[y]);
    //     }
    //     if(a[x]<b[y])
    //      x++;
    //     else
    //     y++;
    // }
    // cout<<min;

}


    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll test = 1;
        //cin>>test;
        while (test--)
        {
            solve();
        }
        return 0;
    }


