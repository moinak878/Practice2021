#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    int n = (int)s.size();
    int i = 0;
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        if(s[i]=='o')
            break;
        else
            cnt++;
    }
    
    if (cnt > 2)
        return void(cout << "No\n");
    cnt = 0;
    int j = n - 1;
    for (; j >= 0;j--){
         if(s[i]=='o')
            break;
        else
            cnt++;
    }
    if(cnt>2)
        return void(cout << "No\n");
    cnt = 0;
    i++;
    for (; i <= j; i++)
    {
        if (s[i] == 'o')
        {
            if(cnt!=2)
                return void(cout << "No\n");
            cnt = 0;
        }
        else 
            cnt++;
    }
    cout << "Yes\n";
}
int main() {

    fuck off
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
