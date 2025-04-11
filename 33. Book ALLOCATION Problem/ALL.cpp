#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*
Input: arr[] (book pages), n (books), m (students)

1. Initialize low = 0, high = sum(arr)
2. While low <= high:
    a. mid = (low + high) / 2
    b. If isPossible(arr, n, m, mid) is true:
         - ans = mid
         - high = mid - 1
       Else:
         - low = mid + 1
3. Return ans

Function isPossible(arr, n, m, mid):
1. Initialize studentCount = 1, paperSum = 0
2. For each book:
     - If paperSum + arr[i] <= mid → add to current student
     - Else → assign to new student
         - If studentCount > m or arr[i] > mid → return false
3. Return true

*/
bool isPossible(int arr[],int n , int m, int mid){
    int studentCount = 1;
    int paperSum = 0;
    for(int i=0;i<n;i++){
        if(paperSum + arr[i] <= mid){
            paperSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            paperSum = arr[i];
        }
    }
    return true;
}

int allocatebook(int arr[],int n , int m ){
    int s=0;
    int sum=0;
    for(int i=0; i<n;i++){
        sum+= arr[i];
    }
    int e= sum;
    int mid = s + (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s + (s+e)/2;
    }
    cout<<ans;
}

int main(){
    int arr[4]={10,20,30,40};
    cout<<allocatebook(arr,4,2);
    return 0;
}