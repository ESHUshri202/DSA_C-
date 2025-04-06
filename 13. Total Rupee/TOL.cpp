#include<iostream>
using namespace std;

int main(){
    int amt = 1330;
    cout<<"Enter your choice"<<endl;
    cout<<"1. No. Hundred Rupee notes"<<endl;
    cout<<"2. No. of Fifty Rupees notes"<<endl;
    cout<<"3. No of Twenty Rupees notes"<<endl;
    cout<<"4. No of One Rupees notes"<<endl;
    int num;
    cin>>num;

    switch (num)
    {
        case 1: cout<<amt/100;        
            break;
        case 2: cout<<amt/50;
            break;
        case 3: cout<<amt/20;
            break;
        case 4: cout<<amt/1;
            break;
    
        default:cout<<"out of order";
            break;
    }
}