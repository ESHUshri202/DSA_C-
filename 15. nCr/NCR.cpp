#include<iostream>
using namespace std;

int fact(int n ){
    int fact =1;

    for(int i=1 ; i<=n; i++){
        fact = fact + i;
    }
    return fact;
}

int nCr(int n , int r){
    int num = fact(n);
    int dem = fact(r) * fact(n-r);

    int ans  = num/dem;
    return ans;

}

int main(){
    int a,b;

    cout<<"Enter the value of n and r";
    cin>>a>>b;
    cout<<endl;
    int ase = nCr(a,b);
    cout<<"nCr is "<<ase<<endl;

}