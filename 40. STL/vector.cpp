#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(5,1);
    cout<<"Size of vector: "<<a.size()<<endl;
    cout<<"Capacity of vector: "<<a.capacity()<<endl;
    cout<<"Max size of vector: "<<a.max_size()<<endl;
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Element at 2nd index: "<<a[2]<<endl;
    cout<<"Front element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
    cout<<"Before pop_back: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    a.push_back(2);
    cout<<"After push_back: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    a.pop_back();
    cout<<"After pop_back: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    a.clear();
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
}