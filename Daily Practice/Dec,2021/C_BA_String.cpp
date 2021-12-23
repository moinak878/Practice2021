#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

 
ll n,k,x;
string s;
 
void dfs(int d,ll l){
	if(d==0) return;
	int cnt=0;
	while(d && s[d--]=='*') cnt++;
	dfs(d,l/(k*cnt+1));
	if(s[d+1]=='a') cout<<'a';
	for(int i=1;i<=l%(k*cnt+1);++i) cout<<'b';
	return;
}

        
void solve(){
	cin >> n >> k >> x >> s;
	s = s+' ';
	s = ' '+ s;
	dfs(n,x-1);
	cout << "\n";
}

// void generate_ans(vector<ll> &ans, string s, ll n , ll k ){
//     ll res = 0, prev_res = 1;
//     for (ll i = n - 1; i >= 0 ; i--)
//     {
//         if(s[i]=='*'){
//             if(res==0)
//                 res += 1 * prev_res;
//             res += k * prev_res;
//         }
//         else{
//             if(res!=0)
//                 prev_res = res;
//             res = 0;
//         }
//         ans.push_back(res);
//     }
// }
// pair<int,int> find_index(int x , vector<int> ans){
//     ll curr = 0,index=0,prev_val=0;
//     for (int i = 0; i < ans.size();i++){
//         if(x>curr)
//             index = i, prev_val = curr;
//         else
//             break;
//         if(ans[i]>curr)
//             curr = ans[i];
//     }
//     return {index,prev_val};
// }

// void solve()
// {
//     ll n , k , x ;
//     cin>>n>>k>>x;
//     string s;
//     cin >> s;
//     vector<ll> temp_ans,ans;
//     ll curr = 0LL;
//     generate_ans(temp_ans, s, n, k);
//     for (ll i = 0; i < n;i++){
//         if(temp_ans[i]==0 || i==(n-1) ){
//             if(curr!=0) 
//                 ans.push_back(curr);
//             curr = 0LL;
//         }
//         curr = max(curr, temp_ans[i]);
//     }
//     reverse(all(ans));
//     cout<<endl;
//     for(auto &i : ans)
//         cout << i << " ";
//     cout << "\n";
//     vector<ll> a;
//     curr = 0LL;
//     for (int i = 0; i < n; i++)
//     {
//         if(s[i]=='a' || i==n-1 ){
//             if(i!=0 && s[i]!='*') 
//                 a.push_back(k*curr+1);
//             else if(i==n-1 && s[i]!='a')
//                 a.push_back(k*curr + 2);
//             curr = 0;
//         }
//         else
//             curr++;
//     }
//     vector<ll> b;
//     for (int i = 0; i < n; i++)
//     {
//         if(s[i]=='a' || i==n-1 ){
//             if(i!=0 && s[i]!='*') 
//                 b.push_back(curr+1);
//             else if(i==n-1 && s[i]!='a')
//                 b.push_back(curr + 2);
//             curr = 0;
//         }
//         else
//             curr++;
//     }

//     x--;
//     string str;
//     ll k1 = 0;
//     for (ll i = 0; i < n; )
//     {
//         if(s[i]=='a')
//             str += 'a', i++;
//         else
//         {
//             ll cnt = x % a[k1];
//             cout << "cnt ->" << cnt << " ";
//             for (ll j = 0; j < cnt; j++)
//                 str += 'b';
//             i += (b[k1]-1);
//             k1++;
//         }
//     }
//     cout << "\n";
//     for (auto &i : a)
//         cout<<i<<" ";
//     cout << "\n";
//     cout << str;
//     cout << "\n====\n";
// }


int main() {

    fuck off
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
