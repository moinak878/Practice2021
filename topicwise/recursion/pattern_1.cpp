/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 .... n 
*/

#include<iostream>
using namespace std;

void f (int n){
    if(n==1)
        return void(cout << '1' << '\n'); // <-- 😉
    if(n==0)
        return; // <-- simple base case 
    f(n - 1); // TRUST or RECURSIVE LEAP OF FAITH
    for (int i = 1; i <= n;i++)
        cout << i << " ";
    cout << "\n";
}

int main(){
    f(5);
    return 0;
}