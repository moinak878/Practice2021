#include<bits/stdc++.h>
#define vi vector<int>
#define debug(j) (cout <<#j<<" : "<<j<<"\n")
#define printarray(a) cout << "a : "; for (i = 0; i < 5; i++){cout << a[i] << " ";} cout << "\n";
using namespace std;
int partition(int *a , int start , int end){
    int index = start + (end - start) / 2;
    int pivot = a[index];
    debug(pivot);
    debug(index);
    //partition around pivot
    int i = start-1;
    int j = end;
    while(i<end && i<j){
        do {
            i++;
        } while (a[i] < pivot);
        debug(i);
        do
        {
            j--;
        } while (a[j] > pivot);
        debug(j);
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    printarray(a);
    return j;
}
void quicksort(int *a , int start , int end ){
    if(start<end){
        int j = partition(a, start, end);
        debug(j);
        quicksort(a, start, j );
        quicksort(a, j+1, end);
    }
}

int main()
{
    int a[5];
    for (auto &i : a)
        cin >> i;
    quicksort(a, 0, 5);
    for (int i : a)
        cout << i;
    return 0;
}