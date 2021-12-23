//Problem link : https://www.codechef.com/problems/RACINGEN
// author : Moinak878


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t = 1;
    cin >> t;
    while(t--){
        ll x, r, m;
        // x= total energy
        // r = reqd to run = run 
        //m = time available = run + rest
        cin >> x >> r >> m;
        r = r * 60;
        m = m * 60;
        if(x>=r && r<=m)
            cout << "YES" << endl;
        else if (x>=r && r>m)
            cout << "NO" << endl;
        //===============greedy O(n) ? solution==============
        else
        {
            ll need = r;
            ll have = x;
            ll spent = 0;
            while (r > 0)
            {
                if (have == 0)
                {
                    spent += min(r, x);
                    have = min(r, x);
                }
                need = min(have, r);
                spent += need;
                r -= need;
                have -= need;
            }
            if (spent > m)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }

        //alternate solution -- verified 
        /*
            ll reqd = min(x,r)+ 2*(r-min(x,r));
            if(reqd>m)
                cout<<"NO"<<endl;
            else 
                cout<<"YES"<<endl;
        */
    }
    return 0;
}


//=================O(1) solution================

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     ll t = 1;
//     cin >> t;
//     while(t--){
//         ll x, r, m;
//         // x= total energy
//         // r = reqd to run = run 
//         //m = time available = run + rest
//         cin >> x >> r >> m;
//         r = r * 60;
//         m = m * 60;
//         //alternate solution
//         ll reqd = min(x,r)+ 2*(r-min(x,r));
//         if(reqd>m)
//             cout<<"NO"<<endl;
//         else 
//             cout<<"YES"<<endl;
        
//     }
//     return 0;
// }