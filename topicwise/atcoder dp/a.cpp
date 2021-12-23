#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> h(n);
  for(int i=0;i<n;i++)
    	cin>>h[i];
  vector<int> dp(n);
  long long int inf = 1e17;
  for (int i = 0; i < n; i++)
  {
      dp[i] = inf;
  }
      dp[0] = 0; //base case
  for(int i=0;i<n;i++){
    //dp(pos) = min cost till pos i 
    //transitions -> dp(i+1) or dp(i+2);
    			//push dp
    if(i+1<n)
    dp[i+1]=min(dp[i+1],dp[i]+abs(h[i]-h[i+1]));
    if(i+2<n)
    dp[i+2]=min(dp[i+2],dp[i]+abs(h[i]-h[i+2]));              
  }
  cout<<dp[n-1];
  return 0;
}