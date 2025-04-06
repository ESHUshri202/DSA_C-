#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,digit;
    cin>>n;
    int rev=0;
    for(int num=n ; num!=0 ;){
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    cout<<rev<<endl;

}