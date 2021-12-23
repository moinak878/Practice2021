#include<iostream>
using namespace std;

int positionofmsb(int d){
    int res = -1;
    while(d>0){
        d=d >> 1;
        res++;
    }
    return res;
}
int main(){
    int d;
    cout << "Enter a number : ";
    cin >> d;
    for (int i = positionofmsb(d); i >= 0; i--)
    {
        //cout << ((d & (1 << i)) != 0 ? 1 : 0); 
        // risk of overflows since 1 treated as int even though d may be long long

        //fix : no overflows now
        cout << (((d >> i) & 1) != 0 ? 1 : 0);

    }
    cout << "\n";

    return 0;
}