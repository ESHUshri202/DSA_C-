#include<bits/stdc++.h>

using namespace std;

// Given a string s and a string part, remove all occurrences of part in s until no occurrences are left.
// Return the final string after all such occurrences have been removed.
//
// Example: s = "daabcbaabcba", part = "abc"

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