#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        ll r,b,d;
        int f = 0;
        cin >> r >> b >> d;
        if(b>r){ //swap
                ll t=b;
                b=r;
                r = t;
        }

        if(d==0){
            if(r==b){
                cout << "YES" << endl;
                
            }
            else    
                {
                    cout << "NO" << endl;
                    
                }
        }

        else if((r==0 && b!=0) || (b==0 && r!=0)){
            cout << "NO" << endl;
            
        }

        else if(r-b<=d)
            {
                cout << "YES" << endl;
                
            }

        else{
            if (r>(1+d)*b)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    
    }
    return 0;
}