#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,sum=0,i=2;
    cout<<"Enter the series to which you want to get the sum of even numbers."<<endl;
    cin>>num;
    while( i <= num)
    {
        if(i % 2 == 0){
            sum= sum + i;
            i=i+1;
        }
        
    }
    cout<<sum<<endl;
}