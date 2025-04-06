#include<bits/stdc++.h>
using namespace std;

int intersection(int arr[],int arr1[],int n, int m){
    int i = 0, j= 0;
    while(i<n && j<m){
        if(arr[i] < arr1[j]){
            i++;
        }
        else if(arr[i] == arr1[j]){
            cout<<arr[i];
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    
}


int main(){
    int up[5]= {1,2,3,4,1};
    int up1[3] = {2,3,5};
    int re= intersection(up,up1,5,3);
    cout<<re;
    return 0;
}