#include<bits/stdc++.h>
using namespace std;
int movezero(int arr[],int k){
    int i=0;
    for(int j=0;i<k;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[6]= {0,1,0,3,12,0};
    movezero(arr,5);
    for(int i = 0 ; i<6;i++){
        cout<<arr[i]<<" ";
    }
}