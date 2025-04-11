#include<bits/stdc++.h>
using namespace std;
// "Climbing Stairs" problem using recursion

// You're climbing a staircase with n steps. You can take either 1 step or 2 steps at a time. The question is:

// In how many distinct ways can you climb to the top?


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