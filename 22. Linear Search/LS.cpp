#include<bits/stdc++.h>
using namespace std;

bool Search(int arr[], int size, int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i]== key){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int arr[10]={1,2,3,4,6,7,5,8,9,10};
    int key;
    cout<<"enter the element want to search";
    cin>>key;

    bool found = Search(arr, 10, key);
    if(found){
        cout<<"is element of array";
    }
    else {
        cout<<"not an element of array";
    }

}