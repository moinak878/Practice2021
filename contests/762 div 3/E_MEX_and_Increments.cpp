#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    sort(all(a));
    vector<int> ans;
    int left = 0;
    for (int i = 0; i <= n; i++)
    {
        ll temp = 0;
        while (left < n)
        {
            if(a[left]==i){
                temp += 1;
                left++;
            }
            else
                break;
        }
        
        ans.push_back(temp);
    }
    for(auto &i : ans)
        cout<<i<<" ";
    cout << "\n";
}
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
