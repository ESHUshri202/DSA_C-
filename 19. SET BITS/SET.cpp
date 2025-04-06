#include<bits/stdc++.h>
using namespace std;

unsigned int countsetbit( unsigned int num){
    unsigned int count = 0;
    while(num){
        count += num & 1;
        num >>= 1;
    }
    return count;
}


int main(){
    int a, b ,countsum;
    cin>>a>>b;
    int c  = countsetbit(a);
    int d  = countsetbit(b);
    countsum = c + d;
    cout<<countsum;
}