#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int64_t> a(n);
        for(auto &i : a)
            cin >> i;
        vector<int64_t> pref_min;
        vector<int64_t> pref_max;

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                int z = n - x - y;
                //𝑚𝑎𝑥(1,𝑥)=𝑚𝑖𝑛(𝑥+1,𝑥+𝑦)=𝑚𝑎𝑥(𝑥+𝑦+1,𝑛)
            }
        }
    }
    return 0;
}