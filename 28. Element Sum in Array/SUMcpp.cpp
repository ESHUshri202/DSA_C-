#include<bits/stdc++.h>
using namespace std;

//sum of elements of array

int SUM(int arr[], int n){
    int sum = 0;
    for(int i =0 ; i<n ; i++){
        sum +=arr[i];
        
        
        
    }
    return sum;
}

int main(){
    int arr[5]= {1,2,3,4,5};

    int sum = SUM(arr,5);
    cout<<sum;
    return 0;
}