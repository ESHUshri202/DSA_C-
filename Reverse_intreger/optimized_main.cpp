#include<bits/stdc++.h>
using namespace std;

int reverse_integer(int n ){
    int rev = 0;
    while(n!=0){
        int pop = n % 10;
        if(rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0; // Check for overflow
        if(rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0; // Check for underflow  
        rev = rev * 10 + pop;
        n /= 10;
    }
    return rev;
}

int main(){
    int n; 
    cout << "Enter an integer: ";
    cin >> n; 
    cout << "Reversed integer: " << reverse_integer(n) << endl; 
    return 0; 
}