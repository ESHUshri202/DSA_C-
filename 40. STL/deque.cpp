#include<bits/stdc++.h>
using namespace std;

// Deque is a double ended queue which is used to insert and delete element from both end of the queue.
// It is a sequence container with dynamic sizes that can be expanded or contracted on both ends.
// It is a linear data structure that allows the insertion and deletion of elements from both ends.
// It is a generalized version of queue data structure that allows insertion and deletion of elements from both ends.

int main(){
    deque<int> d;
    d.push_back(1); // Insert 1 at the back of the deque
    d.push_front(4); // Insert 4 at the front of the deque
    d.push_back(2); // Insert 2 at the back of the deque
    d.push_front(3); // Insert 3 at the front of the deque
    d.push_back(5); // Insert 5 at the back of the deque
    d.push_front(6); // Insert 6 at the front of the deque

    cout<<"The deque elements are: ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"The size of the deque is: "<<d.size()<<endl; // Print the size of the deque
    cout<<"The first element of the deque is: "<<d.at(0)<<endl; // Print the first element of the deque
    cout<<"The last element of the deque is: "<<d.back()<<endl; // Print the last element of the deque
    cout<<"Deque is empty or not: "<<d.empty()<<endl; // Check if the deque is empty or not
    d.pop_back();
    cout<<"After popping the last element, the deque elements are: ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before erase size of deque is :"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase size of deque is :"<<d.size()<<endl;
}