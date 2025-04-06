#include<bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n){
    if(n==0) return 1; // Special case for 0
    int ans = 0, fac = 1; // Initialize answer and factor
    // Loop until n becomes 0
    while(n!=0){
        int bits = n%2==0; // Check if the last bit is 0 (even) or 1 (odd)
        // If the last bit is 0, we add 1 to the answer (which is effectively doing nothing)
        ans +=bits*fac;   // If the bit is 0, we add it to the answer
        // If the bit is 1, we add 0 to the answer (which is effectively doing nothing)
        fac*=10;  // Update the factor to the next place value (10^i)
        n/=2; // Right shift n to process the next bit
    }
    return ans;
}

// Binary of 5 = 101

// Loop iterations:

// n = 5, n % 2 = 1 → bit is 1 → flipped = 0
// bits = (n % 2 == 0) = false = 0
// ans = 0 + 0 * 1 = 0, fac = 10, n = 2

// n = 2, n % 2 = 0 → bit is 0 → flipped = 1
// bits = (n % 2 == 0) = true = 1
// ans = 0 + 1 * 10 = 10, fac = 100, n = 1

// n = 1, n % 2 = 1 → bit is 1 → flipped = 0
// bits = 0
// ans = 10 + 0 * 100 = 10, fac = 1000, n = 0

// Loop ends.




int main(){
    int n;
    cin>>n;
    cout<<bitwiseComplement(n)<<endl;
    return 0;
}