#include<bits/stdc++.h>

using namespace std;

string remo(string s, string part){
    while(s.length() !=0 && s.find(part)< s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main (){
    string s = "daabcbaabcba";
    string part = "abc";

    cout<<remo(s,part)<<endl;

    return 0;
}