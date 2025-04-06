#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int *ptr = &arr[0];
    // & operator mean Address of operator 
    // * Pointer variable operator 
    cout<<"Address of array : "<<arr<<endl;
    cout<<"Address of array[0] : "<<ptr<<endl;
    cout<<"Address of array[1] : "<<ptr+1<<endl;
}