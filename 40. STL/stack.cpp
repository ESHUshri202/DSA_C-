#include<bits/stdc++.h>
using namespace std;

// Stack is a linear data structure which follows the LIFO(Last In First Out) order of operation.
// It is a collection of elements that supports the insertion and deletion of elements at one end only.
// The end of the stack where elements are inserted and deleted is called the top of the stack.

int main(){
    // Stack (LIFO)
    stack<string> s;

    s.push("My");
    s.push("name");
    s.push("is");
    s.push("Achintya");
    cout<<"size of stack  "<<s.size()<<endl;

    cout<<endl;
    cout<<"Top of the stack  "<<s.top()<<endl;
    s.pop();
    cout<<"Top of the stack  "<<s.top()<<endl;

    cout<<"size of stack  "<<s.size()<<endl;

    cout<<"Empty or not  "<<s.empty()<<endl;
}