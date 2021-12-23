// print sum of digits 12345

#include<iostream>
using namespace std;

//TRUST
int f (int n){
    if(n==0)
        return 0;
    return f(n / 10) + n % 10;
}

int main(){
    cout<<f(12345);
    return 0;
}