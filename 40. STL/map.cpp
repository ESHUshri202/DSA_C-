#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "babbar";
    m[2] = "dani";
    m[3] = "kumar";
    m[4] = "achintya";
    m[5] = "rajput";

    cout<<"map elements are : "<<endl;
    for (auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"before erase map elements are : "<<endl;
    for (auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(3);     // in erase we just need to give key
    cout<<"after erase map elements are : "<<endl;
    for (auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}