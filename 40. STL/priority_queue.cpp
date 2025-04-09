#include<bits/stdc++.h>
using namespace std;
// // Priority Queue is a data structure that stores elements in a way that the element with the highest priority is always at the front of the queue.
// // It is a collection of elements that supports the insertion and deletion of elements at both ends.
// // The end of the queue where elements are inserted is called the front of the queue and the end of the queue where elements are deleted is called the back of the queue.
// // The priority queue is implemented using a binary heap data structure.
// // The priority queue is a special type of queue in which each element has a priority associated with it.

int main(){
    // Priority Queue
    // max heap
    priority_queue<int> maxi;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
    cout<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i =0 ; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    
    cout<<"Min Heap"<<endl;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    mini.push(5);
    
    cout<<mini.size()<<endl;
    
    int m = mini.size();
    
    for(int i =0 ; i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
}