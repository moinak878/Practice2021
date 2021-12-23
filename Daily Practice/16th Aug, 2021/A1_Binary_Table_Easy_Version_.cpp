#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    string a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = 1;
    if(m%2!=0)
        ans *= (m + 1) / 2;
    else
        ans *= m / 2;
    if(n%2!=0)
        ans *= (n + 1) / 2;
    else
        ans *= n / 2;
    cout << ans << "\n";
    // for(int i = 0; i < n; i+=2){
    //         if(i==n-1)
    //             i--;
    //     string s = a[i];
    //      for (int j = 0; j < m ; j +=2){
    //          if(j==m-1)
    //             j--;
    //         cout <<s[j]<<" ";
    //      }
        
    //      cout << "\n";
    // }
    // cout << "\n";
    for (int i = 0; i <= n - 1; i+=2)
    {
        if(i==n-1)
                i--;
        string s = a[i];
        string s1=a[i+1];
        for (int j = 0; j <= m - 1; j += 2)
        {
            if (j == m - 1)
                j--;
            vector< pair< int, int> > ones;
            vector< pair< int, int> > zeroes;
            if (s[j] == '1')
                ones.push_back(make_pair(i, j));
            if (s[j+1] == '1')
                ones.push_back(make_pair(i, j+1));
            if (s1[j] == '1')
                ones.push_back(make_pair(i+1, j));
            if (s1[j+1] == '1')
                ones.push_back(make_pair(i+1, j+1));
            if (s[j] == '0')
                zeroes.push_back(make_pair(i, j));
            if (s[j+1] == '0')
                zeroes.push_back(make_pair(i, j+1));
            if (s1[j] == '0')
                zeroes.push_back(make_pair(i+1, j));
            if (s1[j+1] == '0')
                zeroes.push_back(make_pair(i+1, j+1));

            if((int)ones.size()>=3){
                for (int x = 0; x < 3;x++)
                    cout<<(ones[x].first)+1<<" "<<(ones[x].second)+1<<" ";
            }
            else{

                for (int x = 0; x < (int)ones.size(); x++)
                    cout<<(ones[x].first)+1<<" "<<(ones[x].second)+1<<" ";
                for (int x = 0; x < 3 - ones.size(); x++)
                    cout<<(zeroes[x].first)+1<<" "<<(zeroes[x].second)+1<<" ";
            }
            cout << "\n";
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
