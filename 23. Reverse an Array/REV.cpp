#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i];
    }

}
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    swap(arr[start],arr[end]);
    start++;
    end--;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5]= {1 ,-2,4,5,6};
    reverse(arr,5);
    printArray(arr,5);
    
}
