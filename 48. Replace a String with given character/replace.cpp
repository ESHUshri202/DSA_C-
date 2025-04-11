#include<bits/stdc++.h>

using namespace std;

// Given a string s, replace all spaces in s with @40.
// The replacement should be done in place, meaning that the original string s should be modified directly.
// The function should not return anything.
// The function should take a string s as input and return the modified string.
// The function should replace all spaces in s with @40.
// The function should not use any additional data structures or libraries to perform the replacement.
// The function should not use any built-in string functions or methods to perform the replacement.

string rel(string s){
    string temp = "";
    for(int i =0 ; i<s.length() ; i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){

    string s = "My name is Achintya"; 
    cout<<rel(s)<<endl;
   

}