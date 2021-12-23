#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,prev,min,start,end;
        cin>>n;
        int ar[n];
        for (i=0;i<n;i++)
            cin>>ar[i];
        vector <int> v;
        v.push_back(ar[0]);
        prev=ar[0];
        for (i=1;i<n;i++)
        {
            if (ar[i]!=prev)
            {
                v.push_back(ar[i]);
                prev=ar[i];
            }
        }
        start=v[0];
        end=v[v.size()-1];
        map<int,int> m;
        for (i=0;i<v.size();i++)
            m[v[i]]++;
        m[start]--;
        m[end]--;
        min=n;
        for (auto &pr: m)
        {
            if (pr.second<min)
                min=pr.second;
        }
        cout<<min+1<<endl;
    }
}

