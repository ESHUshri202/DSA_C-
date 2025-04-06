#include<bits/stdc++.h>

using namespace std;

/*
    1. Transpose the matrix
    2. Swap the element of matrix (or Reverse it)
*/





int rotate(int arr[][3]) {
        int row = arr.size();
        for(int i = 0 ; i < row ; i++){
            for(int j =0 ; j<=i ; j++)
                 swap(arr[i][j],arr[j][i]);
        }

        for(int i = 0 ; i < row ; i++){
            reverse(arr[i].begin(),arr[i].end());
        }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    cout<<rotate(arr);
}