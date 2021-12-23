#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 5;
int up[MAX][30];
int lg = 30;

// O(logN)
int kth_answer(int x , int k ){
    for (int i = 0; i<lg; i++)
    {
        if(k & (1<<i)){
            x = up[x][i];
        }
    }
    return x;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    // up.assign(n + 1, vector<int>(lg + 1));
    for (int i = 1; i <= n; i++)
        cin >> up[i][0];

    for (int i = 1; i < lg; i++)
    {
        for (int j = 1; j <= n;j++)
            up[j][i] = up[up[j][i - 1]][i - 1];
    }
    // O(Q * logN + NlogN ) = 2e5 * 32
     
    while (q--)
        {
            int x, k;
            cin >> x >> k;
            cout << kth_answer(x, k) << '\n';
        }
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
