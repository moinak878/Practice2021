#include<bits/stdc++.h>
using namespace std;
/*
123454321 (n=5)
 2345432    (n=4)

*/
void rec_pat(int n , int p ){
    if(n==1){
        cout<<setw(p);
        setfill(' ');
        cout << p << "\n";
        return;
    }
    cout << setw(p-n+1) << setfill(' ');
    for (int i = p - n + 1; i <= p; i++)
        cout << i;
    for (int i = p - 1; i >= p-n+1;i--)
        cout << i;
    cout << "\n";
    rec_pat(n - 1, p);
    cout << setw(p-n+1) << setfill(' ');
    for (int i = p - n + 1; i <= p;i++)
        cout << i;
    for (int i = p - 1; i >= p-n+1;i--)
        cout << i;
    cout << "\n";
}

int main(){
    int n = 5;
    // cout << "Enter a value of n : ";
    // // cin >> n;
    cout << "\n";
    rec_pat(n, n);
    return 0;
}
