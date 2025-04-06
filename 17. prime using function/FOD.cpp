#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2 ; i<num ; i++){
        if(num%i == 0 )
        {
            return 0;
        }
       
    }
    return 1;
}

int main(){
    int a ;
    cin>>a;
    int ans = isPrime(a);
    cout<<"IS A PRIME NUMBER "<<ans<<endl;
}