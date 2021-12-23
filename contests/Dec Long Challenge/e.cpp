#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<char>
#define all(x) x.begin(),x.end()
#define fuck ios_base::sync_with_stdio(false);cin.tie(NULL);
#define off cout.tie(NULL);
#define mod 1000000007

char winner (char a , char b ){
    if(a==b)
        return a;
    if(a=='R' && b=='S'|| a=='S' && b=='R')
        return 'R';
    if (a == 'R' && b == 'P' || a == 'P' && b == 'R')
        return 'P';
    if(a=='P' && b=='S'|| a=='S' && b=='P')
        return 'S';
    return 'X';
}
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin >> s;
    vc rock(n + 1), paper(n + 1), sci(n + 1);
    vc ans(n + 1);
    ans[n] = s[n - 1];
    rock[n] = winner('R', s[n - 1]);
    paper[n] = winner('P', s[n - 1]);
    sci[n] = winner('S', s[n - 1]);

    for (int i = n - 1; i >= 1;i--){
        char win = winner('R', s[i - 1]);
        if ( win == 'R')
            rock[i] = rock[i + 1];
        else if( win=='P')
            rock[i] = paper[i + 1];
        else if( win=='S')
            rock[i] = sci[i + 1];
        win = winner('P', s[i - 1]);
        if ( win == 'R')
            paper[i] = rock[i + 1];
        else if( win=='P')
            paper[i] = paper[i + 1];
        else if( win=='S')
            paper[i] = sci[i + 1];
        win = winner('S', s[i - 1]);
        if ( win == 'R')
            sci[i] = rock[i + 1];
        else if( win=='P')
            sci[i] = paper[i + 1];
        else if( win=='S')
            sci[i] = sci[i + 1];
        
        if(s[i-1]=='R')
            ans[i] = rock[i + 1];
        else if (s[i-1]=='P')
            ans[i] = paper[i + 1];
        else
            ans[i] = sci[i + 1];
    }

    for (int i = 1; i <= n;i++)
        cout<<ans[i];
    cout << "\n";
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
