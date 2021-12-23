#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.size()-1;
        if(s[0]!=s[n])
            cout<<s.substr(0,n)+s[0];
        else 
            cout<<s;
        cout<<'\n';
    }
    return 0;
}