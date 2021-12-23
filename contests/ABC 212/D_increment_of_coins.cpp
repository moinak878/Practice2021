#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

double dp[101][101][101];

double f(int a,int b,int c){
    	if(dp[a][b][c])
            return dp[a][b][c];
    	if(a==100||b==100||c==100)
            return 0;
    	double ans=(f(a+1,b,c)+1)*a/(a+b+c)+(f(a,b+1,c)+1)*b/(a+b+c)+(f(a,b,c+1)+1)*c/(a+b+c);
    	return (dp[a][b][c]=ans);
    }

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    double ans = f(a,b,c);
    printf("%.9f\n",ans);
}
int main() {
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
