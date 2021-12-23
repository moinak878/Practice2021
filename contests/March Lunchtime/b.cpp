#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t = 1;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll even = 0, odd = 0,cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0)
                {
                    even++;
                    if((a[i]+1)/2-1<=0)
                        cnt++;
                }
            else
                odd++;
        }
        if(even==0 && odd%2!=0)
            cout << -1 << endl; 
        else if(odd%2==0)
            cout << 0 << endl;
        else if(odd%2!=0 && even>=1 && cnt>=1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}