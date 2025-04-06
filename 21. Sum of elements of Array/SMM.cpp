#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    int sum=0;
    for(int i = 0 ; i < size ; i++ ){
        sum += arr[i];

    }
    cout<<sum;
    return sum;
}


int inputArray(int arr[], int size){

    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }

}

int printArray(int arr[], int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int size ;
    cout<<"Size of Array"<<endl;
    cin>>size;
    int arr[10000];
    inputArray(arr,size);
    printArray(arr,size);
    sum(arr,size);
    return 0;
}