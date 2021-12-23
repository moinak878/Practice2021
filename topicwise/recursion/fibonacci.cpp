/*
    term : 1,2,3,4,5,6,7,8,9,.....
    fibo : 0,1,1,2,3,5,8,13,21,...

    1,2,3,4,5,6,7,8,....
    0,0,1,1,2,4,7,13,....
*/

#include<iostream>
using namespace std;

//TRUST
int f (int n){
    if(n==1)
        return 0;
    if(n==2)
        return 0;
    if(n==3)
        return 1;
    return f(n - 1) + f(n - 2) + f(n - 3);
}

int main(){
    cout<<f(7);
    return 0;
}