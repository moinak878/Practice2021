#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
            cin >> a[i];
        map<int, int> m;
        map<int, int> parts;
        for (int i = 0; i < n;i++)
        {
            m[a[i]]++;
            if(parts.find(a[i])==parts.end()){
                if(i==0 || i==n-1)
                    parts[a[i]] = 1;
                else
                    parts[a[i]] = 2;
            }
            else{
                if(i!=n-1)
                    parts[a[i]]++;
                if (i > 0 && a[i - 1] == a[i])
                    parts[a[i]]--;
            }
        }
        int ans = INT_MAX;
        // cout << "frequency map" << endl;
        // for (auto i : m)
        // {
        //     cout << i.first << " --> " << i.second << endl;
        // }

        // cout << "parts map"<<endl;
        // for (auto i : parts)
        // {
        //     cout << i.first << " --> " << i.second << endl;
        // }
        int cnt = 0, flag = 0;

        for (auto i : m)
        {
            //for all elements that occur more than once
                //calculate the no of parts
                if(i.second==n){
                    cout <<0<< endl;
                    flag = 1;
                }
                else
                    ans = min(ans, parts[i.first]);
            
                if(i.second==1)
                cnt++;
        }
        if(cnt==n & flag != 1)
            cout <<1<< endl;
        else if (flag != 1)
            cout <<ans << endl;
    }
    return 0;
}




// 2 3 4 5 2
// 1 2 1 
// 1 2 3 1 4 1
// 1 1 1
// 1 2 3 1 1 