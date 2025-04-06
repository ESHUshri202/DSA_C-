#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
    int painter = 1;
    int white = 0;
    for(int i = 0 ; i<n;i++){
        if(white + arr[i] <=mid){
            white += arr[i];
        }
        else{
            painter++;
            if(painter>k || arr[i] > mid){
                return false;
            }
            white += arr[i];
        }
    }
    return true;
}

int Partition(int arr[],int n, int k){
    int s = 0;
    int sum = 0;
    for(int i = 0 ; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid =  (s+e)/2 + s;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
        
}

int main(){
    int arr[5]={5,5,5,5,5};
    int ans = Partition(arr,5,2);
    cout<<ans;
    return 0;
}