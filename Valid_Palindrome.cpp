#include<bits/stdc++.h>
using namespace std;
bool isvalid(char ch){
    if( (ch >= 'a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z' ) || (ch >= '0' && ch<= '9') ){
        return 1;
    }
    return 0;
}
char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a){
    int s = 0 ;
    int e = a.length()-1;
    while (s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else {
            e--;
            s++;
        }

    }
    return 1;
}

bool isPalindrome(string s){
    //remove unwanted characters
    string temp = "";
    for(int j = 0 ; j< s.length() ; j++){
        if(isvalid(s[j])){
            temp.push_back(s[j]);
        }
    }

    // transform into lowercase characters
    for(int j = 0 ; j < s.length(); j++){
        temp[j] = tolowercase(temp[j]);
    }

    return checkPalindrome(temp);
}
int main(){

    string s = "A man, a plan, a canal: Panama";
    cout<<"Result is :"<<isPalindrome(s);
    return 0;
}