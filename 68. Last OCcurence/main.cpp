#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int size, int target){
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int arr[5] = {1,2,3,3,3};
    int ans = lastOccurence(arr,5,3);
    cout<<ans<<endl;
}