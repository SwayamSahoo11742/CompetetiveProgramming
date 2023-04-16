#include <bits/stdc++.h>
using namespace std;


vector<int> a = {10, 5, 8, 9, 3, 6, 15, 12, 16};

int partition(int l, int h){
    // Set pointers at highest and lowest
    int i = l, j = h;

    // set pivoting point
    int pivot = a[l];

    // As long as i and j dont cross
    while(i < j){
        // Increase till higher than pivot
        do{
            i++;
        }while(a[i] <= pivot);

        // Decrease till lower than pivot
        do{
            j--;
        }while(a[j] > pivot);

        // Swap higher and lower to sort pivot
        if(i < j){
            swap(a[i], a[j]);
        }
    }
    // After surrounding swaps, swap the pivot with the cross section
    swap(a[l], a[j]);

    return j;
}

void quicksort(int l, int h){
    // If array lenght > 1
    if(l < h){
        // Seperate j
        int j = partition(l, h);

        // Sort both sides
        quicksort(l, j);
        quicksort(j+1, h);
    }
}


int main(){
    quicksort(0, 9);

    for(auto i: a){
        cout << i << " ";
    }
    cout << endl;
}