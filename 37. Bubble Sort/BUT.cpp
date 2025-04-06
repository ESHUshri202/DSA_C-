#include<bits/stdc++.h>
using namespace std;
//Bubble sort 
int bubblesort(int arr[],int n ){
    for(int i = 0 ; i<n; i++){
        //for loop round 1 to n-1
        for(int j=0 ;j<n-i;j++){
            //process element till n-ith index for swapping the element upon given condition.
            if(arr[j]>arr[j+1]){
                //swapping of element performed.
            swap(arr[j],arr[j+1]);
        }
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