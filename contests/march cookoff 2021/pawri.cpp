#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    if(s.length()<5)
        cout<< s << endl;
    else{
        for (int i = 0; i < s.length() - 4;)
        {
            if (s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
            {
                s[i + 2] = 'w';
                s[i + 3] = 'r';
                s[i + 4] = 'i';
                i += 5;
            }
            else{
                i++;
            }
        }
    cout<<s<<endl;
    }
    }
    return 0;
}