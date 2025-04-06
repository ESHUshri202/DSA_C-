#include<bits/stdc++.h>
using namespace std;
// insertion sort function is defined.
int insertion_sort(int arr[],int n){
    int j,temp;
    for(int i = 0 ; i<n;i++){
        int key = arr[i];
        j = i-1;
        //Move elements of array[0.......i-1];
        //element which are greater than key element,
        // if element is greater then shift its towards left and again check with precceeding element with same condition then repeat the process.
        // and if the element is smaller than key element then ignore that element and skip to next element.
        while( j>=0 && arr[j]> key){
            //position changing occured.
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
// An array of size 4 is given below which is prefined by user. 
int main(){
    int arr[4] ={4,12,11,20};
    insertion_sort(arr,4);
    for(int i = 0 ; i<4 ; i++){
        cout<<arr[i]<<" ";
    } 
}