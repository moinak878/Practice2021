#include<iostream>
using namespace std;
#define ll long long
#define endl "\n";
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll mod=1000000007;

long long moduloMultiplication(long long a,
                            long long b,
                            long long mod)
{
    long long res = 0; // Initialize result
  
    // Update a if it is more than
    // or equal to mod
    a %= mod;
  
    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;
  
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;
  
        b >>= 1; // b = b / 2
    }
  
    return res;
}

ll power(ll a,ll b)
{
    if (b==0)
        return 1;
    ll tmp=power(a,b/2);
    ll result=((tmp)*(tmp));
    if (b%2==1)
        result = ((result) * (a));
    return result % mod;
}
//nC2*(n-2)C2*2^(n-4)
void solve()
{
    ll n,ans,x;
    cin>>n;
    ans= moduloMultiplication(n,n-1, mod);
    ans = moduloMultiplication(ans,n-2, mod);
    ans=moduloMultiplication(ans,n-3, mod);
    //2^(n-2)
    ll exp=n-6;
    if (exp >= 0)
    {
        ll x=power(2,exp);
        ans=((ans)*(x%mod))%mod;
    }
    else
    {
        ll x=power(2,-exp);
        ans/=x;
    }
    cout<<ans;
}

int main()
{
    clock_t clk = clock();
    sync;
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    cerr << '\n'<<"Time (in s): " << double(clock() - clk) * 1.0 / CLOCKS_PER_SEC << '\n';
    return 0;
}