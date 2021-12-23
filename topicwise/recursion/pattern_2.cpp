/*
    1 2 3 4 ... n 
    1 2 3 4
    1 2 3
    1 2 
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 .... n 
*/

#include<iostream>
using namespace std;

void f1(int n ){
    if(n==1)
        return;
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
    f1(n - 1);
}

void f2(int n ){
    if(n==1)
        return;
    f2(n - 1);
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
}

//TRUST -> mathematical induction 
void f (int n){
    if(n==0)
        return;
    f1(n);
    cout << "1\n";
    f2(n);
}



// better solution 
void print_pattern(int n ){
    if(n==1)
        return void(cout << "1\n");
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
    print_pattern(n - 1);
      for (int i = 1; i <= n;i++)
        cout << i << " ";
    cout << "\n";
}

int main(){
    // f(5);
    print_pattern(5);
    return 0;
}