#include<bits/stdc++.h>
using namespace std;
int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i =0 ; i<n ; i++){
        if(num[i] > max){
            max= num[i];
        }
    }
    cout<<max<<endl;
    return max;
}

int getMin(int num[], int n){
    int mini = INT_MAX;
    for(int i =0 ; i<n ; i++){
        mini = min(mini, num[i]);
    }
    cout<<mini;
    return mini;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0 ; i <size ; i++){
        cin>>arr[i];
    } 
     //getting max and min
    getMax(arr, size);
    getMin(arr,size);

   
}