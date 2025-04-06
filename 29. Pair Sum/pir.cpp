#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<int> &arr, int n, int key){
    vector<vector<int>> ans;
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp)
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}



int main(){
    int arr[5]= {1,2,3,4,5};

    sum(&arr,5,5);
    cout<<sum;
    return 0;
} 