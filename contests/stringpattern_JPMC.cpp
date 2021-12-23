#include<iostream>
#define ll long long
using namespace std;
//logical error in this algo
//my possible solution 
// store in a map and increment key by 1 if new character 
// add their sum 
// patterns will be recognised 

int main()
{
    string s1, s2;
    cout << "Enter string 1 : ";
    cin >> s1;
    cout << "Enter string 2 : ";
    cin >> s2;
    cout << "Identifying pattern ....\n\n";
    ll hash1 = 0, hash2 = 0;
    for (auto i : s1)
            hash1 += i-s1[0];   
    for( auto i : s2)
        hash2 += i-s2[0];
    if(hash1==hash2)
        cout << "Match!\n";
    else
        cout << "Nopesy !\n";
    return 0;
}