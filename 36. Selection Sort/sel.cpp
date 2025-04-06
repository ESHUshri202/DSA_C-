#include<bits/stdc++.h>
using namespace std; 

int selection(int arr[],int n){ // function to perform selection sort
    for(int i =0;i<n;i++){ // loop through the array
        int minIndex = i; // assume the first element is the minimum element
        for(int j=i+1;j<n;j++){ // loop through the unsorted array
            if(arr[j] < arr[minIndex]){ // compare the current element with the minimum element
                minIndex = j; // find the index of the minimum element in the unsorted array
            }
        }
        swap(arr[minIndex],arr[i]); // swap the minimum element with the first element of the unsorted array
    }
}

int main(){
    int arr[5]={5,1,6,2,4};
    selection(arr,5);

    for(int i =0 ; i<5;i++){
        cout<<arr[i];
    }
}