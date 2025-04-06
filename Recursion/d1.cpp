using namespace std;
#include<bits/stdc++.h>

int fact(int n){

    //base case
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int power(int n ){
    // base case 
    if(n == 0 )
        return 1;
    
    // relation
    return 2 * power(n-1);
}

void print(int n ){
    // base case 
    if(n ==0 ){
        return ;
    }
    // relation
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<""<<endl;
    print(n);
}