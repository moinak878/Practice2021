#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxi(int a,int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n;i++)
            cin >> h[i];
        int large = 0;
        int smol = 0;
        int d = 0;
        vector<int> middle;
        for (int i = 1; i < n;i++){
            if(h[i]>h[large]){
                large = i;
                smol = -1;
            }
            else if(h[i]<h[smol] ){
                middle.push_back(smol);
                smol = i;
            }
            else if(h[i]<h[large] && h[smol]<h[i]){
                middle.clear();
                smol = i;
            }
            if(smol!=1)
                {
                for (int j = 0;j<middle.size();j++){
                    if(abs((double)(h[large]-h[middle[j]])/(double)(large-middle[j]))>=abs(((double)h[middle[j]]-h[smol])/(double)(middle[j]-smol)))
                        d = maxi(d, abs(smol - large));
                }
                middle.clear();
                }
        }
        cout << endl;
        cout << d << "<--- d)Ans\n";

        middle.clear();
        reverse(h.begin(), h.end());
        int d1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(h[i]>h[large]){
                large = i;
                smol = -1;
            }
            else if(h[i]<h[smol] ){
                middle.push_back(smol);
                smol = i;
            }
            else if(h[i]<h[large] && h[smol]<h[i]){
                middle.clear();
                smol = i;
            }
            if(smol!=1)
                {
                for (int j = 0;j<middle.size();j++){
                    if(abs((double)(h[large]-h[middle[j]])/(double)(large-middle[j]))>=abs(((double)h[middle[j]]-h[smol])/(double)(middle[j]-smol)))
                        d1= maxi(d, abs(smol - large));
                }
                middle.clear();
                }
        }

        cout << "\nd1Ans ==> " << d1<< endl;
    }
    return 0;
}