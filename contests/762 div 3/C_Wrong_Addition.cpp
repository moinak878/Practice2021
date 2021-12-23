#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007


void solve()
{
    string a, s;
    cin >> a >> s;
    int len_a = a.size();
    int len_s = s.size();
    // cout << "a,s : " << a << " " << s << "\n";
    while(len_a<len_s){
        a='0'+a;
        len_a++;
    }
    string ans;
    int j = len_s - 1;
    int i = len_s - 1;
    while(a.size()!=0 && s.size()!=0){
        i=(int) a.size(), j=(int) s.size();
        ll val = (s[j - 1] - '0') - (a[i - 1] - '0');
        if (val < 0)
        {
            val+=10;
            if(s[j-2]!='1'){
                cout<<"-1\n";
                return;
            }
        // erasing elements we dont need 
        a.erase(i-1,1) , s.erase(j-2,2);
        }
        else 
            a.erase(i - 1, 1) , s.erase(j - 1, 1);
        
        ans=char(val+'0')+ans;
    }

    while(ans[0]=='0') 
        ans.erase(0,1);
    while(a[0]=='0') 
        a.erase(0,1);
    len_a = a.size();
    len_s = s.size();
    if(len_a==0 && len_s==0) 
        cout<<ans<<"\n";
    else cout<<"-1\n";
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



