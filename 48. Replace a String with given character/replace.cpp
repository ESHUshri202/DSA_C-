#include<bits/stdc++.h>

using namespace std;

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