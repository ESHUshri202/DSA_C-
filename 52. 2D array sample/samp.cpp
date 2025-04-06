#include<bits/stdc++.h>
using namespace std;
bool ispresent( int arr[][4],int target , int row , int col ){
        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j<col ; j++){
                if(target == arr[i][j]){
                    return 1;
                }
            }
        }
        return 0;
}
// sum function
void printsum(int arr[][4], int row , int col ){
    for(int i = 0 ; i< 3 ; i++){
        int sum =0;
        for(int j = 0; j<4;j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestrowsum(int arr[][4], int row,int col){
    int maxi = INT_MIN;
    int rowindex =-1;
    for(int i = 0 ; i< 3 ; i++){
        int sum =0;
        for(int j = 0; j<4;j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowindex = row;
        }
    }
    cout<<maxi<<endl<<rowindex<<endl;
}
int main(){
    // create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    /*for(int i = 0 ; i< 3 ; i++){
        for(int j = 0; j<4;j++){
            cin>>arr[i][j];
        }

    }*/
    cout<<"Given array"<<endl;
    for(int i = 0 ; i< 3 ; i++){
        for(int j = 0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    cout<<"Enter the element to search"<<endl;

    int target ;
    cin>> target;

    if(ispresent(arr,target,3,4)){
        cout<<"Element Found"<<endl;;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    */
    // Print row wise sum in the given array
    
    //printsum(arr,3,4);

    //Largest Row Sum

    largestrowsum(arr,3,4);

}