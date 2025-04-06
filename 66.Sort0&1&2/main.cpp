#include<bits/stdc++.h>
using namespace std;
// printing the array
int printArr(int arr[],int n ){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// sorting the array of 0,1,2
// 0's at the beginning, 1's in the middle and 2's at the end
// using three pointers i,j,k
// i points to the next position for 0, j is the current element, k points to the last position for 2
// if arr[j] == 0, swap arr[i] and arr[j], increment i and j
// if arr[j] == 1, increment j
// if arr[j] == 2, swap arr[j] and arr[k], decrement k
// continue until j <= k
// this algorithm has a time complexity of O(n) and space complexity of O(1)
int sort012(int arr[],int n ){
    int i =0,j=0, k=n-1;
    while(j<=k){
        if(arr[j]==1){
            j++;
        }
        else if(arr[j]==0){
            swap(arr[i++],arr[j++]);
        }
        else{
            swap(arr[j],arr[k--]);
        }
    }
}

int main(){
    int arr[5] = {0,1,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    printArr(arr,n);
    return 0;
}