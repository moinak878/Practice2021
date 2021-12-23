#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 2; i <=n;i++)
            cout << i << " ";
        cout << 1<<endl;
    }
}


   