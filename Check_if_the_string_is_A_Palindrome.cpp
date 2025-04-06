#include <bits/stdc++.h>
using namespace std;
// Your are given a string "S".
// Your task is to check whether the string is palindrome or not. 
// For checking palindrome,consider alphabets and numbers only and ignore the symbols and whitespaces.
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
bool checkPalindrome(char a[], int n){
    int s = 0 ;
    int e = n-1;
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

int reverse(char name[], int n ){
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(name[s++],name[e--]);
    }
}

int getLenght(char name[]){
    int count = 0 ;
    for( int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout<<"enter your name"<< endl;
    cin>>name;
    cout<<"your name is ";
    int len = getLenght(name);
    cout<<"Lenght :"<<len<<endl;

    reverse(name,len);

    cout<<"Your name is ";
    cout<< name<< endl;

    cout<<" Palindrome or Not " << checkPalindrome(name,len)<<endl;

    cout<<" CHARACTER IS "<<tolowercase('b') <<endl;
    cout<< "CHARACTER IS "<<tolowercase('C') <<endl;   

    return 0;
}