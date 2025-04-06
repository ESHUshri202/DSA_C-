#include<bits/stdc++.h>
using namespace std;

int printArr(int arr[],int n ){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sort01(int arr[], int n ){
    int i = 0, j = n-1;
    while(i<j){
        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {0,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort01(arr,n);
    printArr(arr,n);
    return 0;
}