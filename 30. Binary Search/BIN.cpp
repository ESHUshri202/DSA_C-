#include<bits/stdc++.h>
using namespace std;

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//     Follow Up: Could you write an algorithm with O(log n) runtime complexity.
//     Example 1:
//     Input: nums = [1,3,5,6], target = 5
//     Output: 2
//     Example 2
//     Input: nums = [1,3,5,6], target = 2
//     Output: 1
//     Example 3:
//     Input: nums = [1,3,5,6], target = 7
//     Output: 4    

int binary(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <end){
        if(arr[mid] == target){
            return mid;
        }

        if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    for(int i = 0 ; i<size ; i++){
        if(arr[i] > target ){
            cout<<i<<endl;
        }
    }
}

int main(){
    int arr[4] = {1,3,5,6} ;
    
    int ene = binary(arr,4,5);
    cout<<ene<<endl;
}