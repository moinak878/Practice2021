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
    cin >> n;
    string s;
    cin >> s;
    int cnt_zero = 0, cnt_one = 0;
    for (int i = 0; i < n; i++){
        if(s[i]=='1')
            cnt_one++;
        else
            cnt_zero++;
    }
    if(cnt_one==0||cnt_zero==0){
        cout << "Bob\n";
        return;
    }
    if(cnt_one>=2 && cnt_zero>=2){
        ll losing = n - min(cnt_one, cnt_zero);
        losing-=min(cnt_one, cnt_zero);
        if(losing%2==0){
            cout << "Bob\n";
        return;
        }
    }
    cout << "Alice\n";
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
