#include<bits/stdc++.h>
using namespace std;
//Bubble sort 
int bubblesort(int arr[], int n) {
    for(int i = 0 ; i < n; i++) {
        bool swapped = false; // move this inside the loop
        for(int j = 0 ; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            break; // Array is already sorted
        }
    }
    return 0;
}

int main(){
    // Their is unordered array of size 6 and running an another sorting algorithm known Bubble Sort.
    int arr[6]= {10,1,7,6,14,9};
    bubblesort(arr,6);
    for(int i =0; i<6;i++){

        cout<<"|"<<arr[i]<<" ";
    }
}