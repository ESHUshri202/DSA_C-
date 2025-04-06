#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}
void swapAlternate(int arr[], int size){
    for(int i = 0 ; i, size ; i+=2){
        if(i+1 <size){
            swap(arr[i],arr[i+1]);
        }
    }
    return;
}


int main(){
    int even[5]= {1,2,3,4,5};
    int odd[5]= {1,3,5,7,9};
    swapAlternate(even,5);
    for(int i = 0 ; i<5 ; i++){
        cout<<even[i]<<" ";
    }
    printArray(even,5);

    return 0;
}