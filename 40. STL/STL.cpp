#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Array using STL
    /*
    array<int, 4> a = {1,2,3,4};
    int size = a.size();
    for(int i = 0; i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element of 2nd number : "<<a.at(2)<<endl;
    cout<<"Empty or not : "<<a.empty()<<endl;
    cout<<"First Element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;
    */
    // Vector
    //  Its is a dynamic array
    /*
    vector<int> b ;
    int cap = b.capacity();
    cout<<cap<<endl;
    b.push_back(1);
    cout<<b.capacity()<<endl;
    b.push_back(2);
    b.push_back(3);
    cout<<b.capacity()<<endl;
    int size1 = b.size();
    cout<<"Before POP "<<endl;
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;
    b.pop_back();
    cout<<"After POP "<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    b.begin();
    cout<<"Before Clear Function Use"<<size1<<endl;
    b.clear();
    cout<<" After clearing  Size"<<b.size()<<endl;
    */

    // Deque Operation using STL.
    /*
        deque<int> d;
        d.push_back(1);
        d.push_front(4);
        for(int i:d){
            cout<<i<<" ";
        }
        cout<<endl<<endl;
        //d.pop_back();
        cout<<"Print Frist ELement -->"<<d.at(1)<<endl;

        d.erase(d.begin(),d.begin()+1);
        cout<<d.size();
    */
    /*
        list<int> l;

        l.push_back(1);
        l.push_front(2);
        for(int i:l){
            cout<<i<<" ";
        }
        */
    /*
    //Stack (LIFO)
    stack<string> s;

    s.push("My");
    s.push("name");
    s.push("is");
    s.push("Achintya");

    cout<<"Top of the stack  "<<s.top()<<endl;
    s.pop();
    cout<<"Top of the stack  "<<s.top()<<endl;

    cout<<"size of stack  "<<s.size()<<endl;

    cout<<"Empty or not  "<<s.empty()<<endl;
     */

    // Queue (FIFO)
    /*
       queue<string> q;
       q.push("My");
       q.push("name");
       q.push("is");
       q.push("Achintya");
       cout<<"Top of the stack  "<<q.front()<<endl;
       q.pop();
       cout<<"Top of the stack  "<<q.front()<<endl;

       cout<<"size of stack  "<<q.size()<<endl;

       cout<<"Empty or not  "<<q.empty()<<endl;
       */
    /*
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

        mini.push(0);
        mini.push(1);
        mini.push(2);
        mini.push(3);
        mini.push(4);
        int m = mini.size();
        for(int i = 0 ; i<m;i++){
            cout<<mini.top()<<" ";
            mini.pop();
        }cout<<endl;
    */
    /*
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
    */

   // Map Data Structure using STL
    map<int,string> m;
    m[1] = "babbar";
    m[2] = "sa";
    m[13] = "sadw";
    m.insert({5,"bheema"});
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13  "<<m.count(13)<<endl;

    

}