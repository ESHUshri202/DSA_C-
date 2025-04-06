using namespace std;
#include<iostream>

int main(){
    char ch;
    ch=cin.get();

    if(ch >= 'a' && ch <= 'z'){
        cout<<"This is a Lower-case"<<endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"This is a Upper_case"<<endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"This is a numeric"<<endl;
    }
    else{
        cout<<"This is special characters"<<endl;
    }
}