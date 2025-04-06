#include<bits/stdc++.h>
using namespace std;

int subtract_prod_and_sum(int n ){
    int prod = 1;
    int sum = 0;
    while(n){
        prod = prod * (n%10);
        sum += (n%10);
        n /=10;
    }
    return prod - sum;
}

int main(){
    int n;
    cin>>n;
    cout<<subtract_prod_and_sum(n)<<endl;
    return 0;
}