#include<bits/stdc++.h>
using namespace std;
/*
Input: arr[], n
Output: Pivot index (index of the smallest element)

    1. Initialize: s = 0, e = n - 1
    2. while s < e:
        mid = s + (e - s) / 2
        if arr[mid] >= arr[0]:
            s = mid + 1
        else:
            e = mid
    3. return s

*/
int getPivote(int arr[], int n ){
    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[5] = {3,8,10,14,1};
    cout<<getPivote(arr,5);
}
