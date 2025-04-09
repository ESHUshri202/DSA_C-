#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n){
    if(n<0){
        return 0;
    }

    if(n==0) return 1;

    int penultimate = climbStairs(n-1);

    int antepenultimate = climbStairs(n-2);
    return penultimate + antepenultimate;
}

int main(){
    int n;
    cin>>n;
    cout<<climbStairs(n)<<endl;
    return 0;
}