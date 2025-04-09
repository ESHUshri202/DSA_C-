#include<bits/stdc++.h>
using namespace std;

// Queue is a linear data structure which follows the FIFO(First In First Out) order of operation.
// It is a collection of elements that supports the insertion and deletion of elements at both ends.
// The end of the queue where elements are inserted is called the front of the queue and the end of the queue where elements are deleted is called the back of the queue.

int main(){
    // Queue (FIFO)
    queue<string> q;
    q.push("My");
    q.push("name");
    q.push("is");
    q.push("Achintya");
    cout<<"size of queue  "<<q.size()<<endl;

    cout<<endl;
    cout<<"Front of the queue  "<<q.front()<<endl;
    q.pop();
    cout<<"Front of the queue  "<<q.front()<<endl;

    cout<<"size of queue  "<<q.size()<<endl;

    cout<<"Empty or not  "<<q.empty()<<endl;
}