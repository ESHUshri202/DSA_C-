#include<bits/stdc++.h>
using namespace std;
// 
int lastOccurence(int arr[], int size, int target){
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
            // mid is shifted to the right to find the last occurrence of the target element.
            // The search continues in the right half of the array.
        }
        else if(target > arr[mid]){
            s = mid + 1;
        // If the target is greater than the middle element, search in the right half of the array.
        // The start index is updated to mid + 1.
        }
        else if(target < arr[mid]){
            e = mid - 1;
        // If the target is less than the middle element, search in the left half of the array.
        // The end index is updated to mid - 1.
        }
        mid = s + (e-s)/2;
        // The middle index is recalculated after updating the start and end indices.
    }
    return ans;
}


int main(){
    int arr[5] = {1,2,3,3,3};
    int ans = lastOccurence(arr,5,3);
    cout<<ans<<endl;
}