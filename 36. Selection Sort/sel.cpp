#include<bits/stdc++.h>
using namespace std;
int selection(int arr[],int n){
    for(int i =0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[5]={5,1,6,2,4};
    selection(arr,5);

    for(int i =0 ; i<5;i++){
        cout<<arr[i];
    }
}