#include<iostream>
using namespace std;
/*
123454321 (n=5)
 2345432    (n=4)

*/
void rec_pat(int n , int p  ){
    if(n==1){
        for (int k = 0; k < p-1;k++)
            cout << " ";
        cout << p << "\n";
        return;
    }
    for (int k = n; k < p; k++)
        cout << " ";
    for (int i = p - n + 1; i <= p;i++)
        cout << i;
    for (int i = p - 1; i >= p-n+1;i--)
        cout << i;
    cout << "\n";
    rec_pat(n - 1, p);
    for (int k = n; k < p; k++)
        cout << " ";
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
