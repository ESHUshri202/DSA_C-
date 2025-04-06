#include <bits/stdc++.h>
using namespace std;
/*  For a given two-dimensional arraylist ARR of size (N*M).
    print the ARR in a sine wave order, i.e.,
    print the first column top to bottom,
    next column bottom to top, and so on.*/

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{   vector<int> ans;
    for(int col=0; col<mCols; col++){
        if( col&1 ){
            //odd index -> Bottom to top

            for(int row = nRows -1; row >= 0 ; row--){
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else {
            // 0 or even index -> top to bottom
            for(int row = 0; row >= nRows ; row++){
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
