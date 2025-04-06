#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &arr,vector<int> &arr1,int size, int size1){
    vector<int> ans;
    for(int i = 0 ; i<size ; i++){
        int element = arr[i];
        for(int j = 0 ; j<size1 ; j++){
            if(element < arr1[j]){
                break;
            }
            if(element == arr1[j]){
                ans.push_back(element);
                arr1[j] = INT_MIN; // any nuumber in negative can implemented
                break;
            }
        }
    }
    return ans;
}


int main(){
    vector<int> up[5]= {1,2,3,4,1};
    vector<int> up1[3] = {2,3,5};
    vector<int> re= intersection(up,up1,5,3);
    
    return 0;
}