#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll n;
    string s;
    cin >> n >> s;
    ll pos;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            pos = i + 1;
            break;
        }
        }
    if(pos&1)
        cout << "Takahashi\n";
    else
        cout << "Aoki\n";
    return 0;
}