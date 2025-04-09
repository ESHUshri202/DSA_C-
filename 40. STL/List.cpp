#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1); // Insert 1 at the back of the list
    l.push_front(2); // Insert 2 at the front of the list
    l.push_back(3); // Insert 3 at the back of the list
    l.push_front(4); // Insert 4 at the front of the list
    l.push_back(5); // Insert 5 at the back of the list
    l.push_front(6); // Insert 6 at the front of the list

    cout<<"The list elements are: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"The size of the list is: "<<l.size()<<endl; // Print the size of the list
    cout<<"The first element of the list is: "<<l.front()<<endl; // Print the first element of the list
    cout<<"List is empty or not : "<<l.empty()<<endl; // Check if the list is empty or not

    l.pop_back(); // Remove the last element from the list
    cout<<"After popping the last element, the list elements are: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before erase size of list is :"<<l.size()<<endl;
    l.erase(l.begin(),l.begin()+1); // Remove the first element from the list
    cout<<"After erase size of list is :"<<l.size()<<endl; // Print the size of the list after erasing the first element
    for(int i:l){
        cout<<i<<" ";
    }
}