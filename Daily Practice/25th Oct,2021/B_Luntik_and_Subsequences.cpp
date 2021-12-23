/*
sum(a0,a1,a2,.....,an-1,an) = s 
subsequence s.t sum = s-1

dp[i][x]= i am at index i , subsequences with sum = x

dp[i][0] = 1
dp[i][x] += dp[i<=i_now][a[i]-x] 

notice 0 and 1 
s-1 -> somehow related to number of ones
0's in the array do not contribute to the sum 
we can keep it / not keep it 
choices -> 2*2*... = 2^(no_of_zeroes)
                    &
for 1's we have to remove exactly once  = 1+1+1+1... = (no_of_ones)

ans = 2^(no_of_zeroes) * (no_of_ones)

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll sz;
    cin>>sz;
    ll no_of_zeroes = 0, no_of_ones = 0;
    for (int i = 0; i < sz; i++)
    {
        ll x;
        cin >> x;
        if(x==0)
            no_of_zeroes++;
        else if (x==1)
            no_of_ones++;
    }
    cout<< (1ll<<no_of_zeroes) * no_of_ones <<'\n';
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

