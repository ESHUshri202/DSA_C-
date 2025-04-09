#include<bits/stdc++.h>
using namespace std;

// Set is a container that stores unique elements following a specific order.
// It is a collection of elements that supports the insertion and deletion of elements at both ends.
// The end of the set where elements are inserted is called the front of the set and the end of the set where elements are deleted is called the back of the set.
// The set is implemented using a binary search tree data structure.

int main(){
    // Set using STL 
    set<int> o;
    o.insert(5);
    o.insert(5);
    o.insert(5);
    o.insert(1);
    o.insert(6);
    o.insert(6);
    o.insert(6);
    o.insert(0);
    o.insert(0);
    o.insert(0);

    for(auto i : o){
        cout<<i<<endl;
    }

    set<int>::iterator it = o.begin();
    it++;
    o.erase(it);
    for(auto i : o){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"-5 is present or not  "<<o.count(-5)<<endl;

    set<int>:: iterator itr = o.find(5);
    for(auto it=itr; it!=o.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}