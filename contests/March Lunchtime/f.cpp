// Problem link : https://www.codechef.com/LTIME94C/problems/LUNCHTIM
//Author : Moinak878

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t = 1;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> h(n);
        for (ll i= 0; i < n;i++)
            cin >> h[i];
        vector<ll> cnt(n,0);
//==================O(n^2) solution=================
        for (ll i = 0; i < n; i++)
        {
            if(i+1<n){
            for (ll j = i + 1; j < n;j++){
                if(h[j]>h[i])
                    break;
                if (h[j] == h[i])
                    cnt[i]++;
            }
            }
            if(i-1>=0){
            for (ll j = i - 1; j >= 0;j--){
                if(h[j]>h[i])
                    break;
                if(h[i]==h[j])
                    cnt[i]++;
            }
            }
        }
        for (ll i = 0; i < n;i++){
            if(i>0)
                cout << " ";
            cout << cnt[i];
        }
        cout << endl;


        //Alternate solution using stack and NGE algorithm
        // reference : https://www.geeksforgeeks.org/next-greater-element/
        /*
            @author:moinak878

            NGE algorithm (using stack) :  O(n)
            
            keep pushing in stack if element is smaller or equal to 
            stack's top element. As soon as an element which is greater is encountered
            pop the top of stack and its ans is the greater element. Now do it till stack 
            becomes empty or we reach the end of array. If after reaching the end of the array
            some elements are still left in stack , they have no greater elements.

            example : 

            array : 16 , 12 , 11 ,9, 10, 15
            stack : 16,12,11,   [9,10]
                    16,12,11,   [10,15]
                    16,12,      [11,15]
                    16,         [12,15]
                    16,15  --> 16,15 doesnt have any greater element
        */

       //the above problem can be treated as a modification of nge problem

    }
    return 0;
}



