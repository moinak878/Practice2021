#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007
void solve()
{
    int k_row, k_col;
    cin >> k_row >> k_col;
    int r1_row, r1_col, r2_row, r2_col;
    cin >> r1_row >> r1_col >> r2_row >> r2_col;
    if (k_row == 1 || k_row == 8 || k_col == 1 || k_col == 8  )
    {
        if(k_row==8 && (r1_row==7 || r2_row==7) && r2_col!=r1_col && (r1_col!=k_col+1 && r1_col!=k_col-1) &&(r2_col!=k_col+1 && r2_col!=k_col-1) )
            cout << "YES\n";
        else if (k_row==1 && (r1_row==2 || r2_row==2) && r2_col!=r1_col  && (r1_col!=k_col+1 && r1_col!=k_col-1) &&(r2_col!=k_col+1 && r2_col!=k_col-1))
            cout << "YES\n";
        else if(k_col==8 && (r1_col==7 || r2_col==7) && r2_row!=r1_row  && (r1_row!=k_row+1 && r1_row!=k_row-1) &&(r2_row!=k_row+1 && r2_row!=k_row-1) )
            cout<<"YES\n";
        else if (k_col==1 && (r1_col==2 || r2_col==2) && r2_row!=r1_row && (r1_row!=k_row+1 && r1_row!=k_row-1) &&(r2_row!=k_row+1 && r2_row!=k_row-1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
        else cout << "NO\n";
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
