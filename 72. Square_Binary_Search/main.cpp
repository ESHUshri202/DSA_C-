#include<bits/stdc++.h>
using namespace std;

long long int squareRoot(int n, int l, int r){
    if(l >r) return 0;

    long long int mid = (l+r)/2;

    if(mid*mid <= n && (mid+1)*(mid+1)>n){
        return mid;
    }
    else if(mid*mid > n){
        return squareRoot(n,l,mid-1);
    }

    return squareRoot(n,mid+1,r);
}

int main(){
    int n;
    cin>>n;
    cout<<squareRoot(n,0,n)<<endl;
    return 0;
}