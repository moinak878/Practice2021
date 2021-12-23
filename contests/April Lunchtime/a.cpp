#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin >> l;
        cin >> s;
        int count1 = 0;
        float per = 0;
        int flag = 0;
        for (int i = 0; i < l; i++)
        {
            if(s[i]!='0')
                count1++;
            per = (float)count1 / (i + 1);
            if (per >= 0.50)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
                }
        }
        if(flag==0)
            cout << "NO" << endl;
    }
    return 0;
}