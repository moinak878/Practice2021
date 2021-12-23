/*
    This solution will give memory limt exceeded 
    Because we cant simply have 10^9 indcies in the frequency array 
    To resolve this : 
    We can use coord compression trick naice
    and map elements becuase obv in a gioven range there can be atlmost sqrt(n) unique numbers
    ...
    so here two concepts of sqrt decomposition are used one is mo's and the other is the fact that 
    unique is bounded by sqrt(n) 
    
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long 
#define endl '\n'
#define mod 1000000007

int ans = 0;
int freq[100005], a[100005];
void remove(int idx)
{
    idx = a[idx];
    freq[idx]--;
    if (freq[idx] == idx)
        ans++;
    if(freq[idx]==idx-1)
        ans--;
}

void add(int idx){
    idx = a[idx];
    freq[idx]++;
    if (freq[idx] == idx)
        ans++;
    if(freq[idx]==idx+1)
        ans--;
}   

int get_answer(){
    return ans;
}

int n;
int block_size;

struct Query {
    int l, r, idx;
    bool operator<(Query other) const
    {
        return make_pair(l / block_size, r) <
               make_pair(other.l / block_size, other.r);
    }
};

vector<int> mo_s_algorithm(vector<Query> queries) {
    vector<int> answers(queries.size());
    sort(queries.begin(), queries.end());

    // TODO: initialize data structure ??
    int cur_l = 0;
    int cur_r = -1;
    // invariant: data structure will always reflect the range [cur_l, cur_r]
    for (Query q : queries) {
        while (cur_l > q.l) {
            cur_l--;
            add(cur_l);
        }
        while (cur_r < q.r) {
            cur_r++;
            add(cur_r);
        }
        while (cur_l < q.l) {
            remove(cur_l);
            cur_l++;
        }
        while (cur_r > q.r) {
            remove(cur_r);
            cur_r--;
        }
        answers[q.idx] = get_answer();
    }
    return answers;
}

void solve()
{
    int m;
    cin >> n >> m;
    block_size = (int)sqrt(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<Query> q;
    for (int i = 0; i < m;i++){
        ll left, right;
        cin >> left >> right;
        left--; right--;
        Query x;
        x.l = left;
        x.r = right;
        x.idx = i;
        q.push_back(x);
    }
    vector<int> ans = mo_s_algorithm(q);
    for (int i = 0; i < m;i++)
        cout << ans[i] << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
