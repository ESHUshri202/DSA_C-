#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter your choice"<<endl;
    char ch;
    cin>>ch;
    switch(ch){
        case '+': cout<<a+b<<endl;
            break;
        case '-': cout<<a-b<<endl;
            break;
        case '*': cout<<a*b<<endl;
            break;
        case '/': cout<<a/b<<endl;
            break;
        default:cout<<"default choice"<<endl;
            break;
    }
}