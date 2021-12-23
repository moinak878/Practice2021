#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> m,p;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      m[a]++;
      p[a] = i+1;
    }
    int ans = -1;

    for (auto x: m) {
      if (x.second==1) {
        ans = p[x.first];
        break;
      }
    }
    // cout <<"==> "<< ans << endl;
    cout << ans << endl;
  }
  return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t,n,i;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int ar[n];
//         //set<int>s;
//         map<int,int>m;
//         for (i=0;i<n;i++)
//             cin>>ar[i];
        
//         for (i=0;i<n;i++)
//         {
//             if (m.find[ar[i]]==m.end())
//                 m[ar[i]]=i+1; //pos store
//             else
//                 m.erase(ar[i]); //erase key
//         }

//         if (m.size()==0)
//             cout<<-1<<endl;
//         else
//         {
//             auto it=m.begin();
//             cout<<"==>"<<(*it).second<<endl;
//         }
//     }
//     return 0;
// }
