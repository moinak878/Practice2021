#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    n = 5;
    vector<int> a(n, 0);
    for( auto i : a)
        cout << i << " ";
    return 0;
}

//use g++ -std=c++11 test.cpp to compile