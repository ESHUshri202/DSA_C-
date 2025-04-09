#include<bits/stdc++.h>
using namespace std;

// STL array
int main(){
    int basic[3]= {1,2,3};
    array<int,4> a = {1,2,3,4};
    cout<<"Size of basic array: "<<sizeof(basic)<<endl;
    int size = a.size();
    cout<<"Size of STL array: "<<size<<endl;

    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Elements of Array"<<" "<<endl;
    for(int i = 0 ; i<size;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    cout<<"Empty or not: "<<a.empty()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
    // Filling the array with 4
    // a.fill(4) will fill the array with 4.
    // It will replace all the elements of array with 4.
    a.fill(4);
    cout<<"Array after fill: "<<endl;
    for(int i = 0 ; i<size;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}