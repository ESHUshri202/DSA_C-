#include<bits/stdc++.h>
using namespace std;
int unique(int nums[] , int n){
        int ans=0;
        for(int i = 0 ; i<n; i++){
            ans = ans^nums[i];
        }

        return ans;
}

int main(){
    int arr[5]= {1,2,3,2,3};
    int ans=unique(arr,5);
    cout<<ans;
    return 0;
}
