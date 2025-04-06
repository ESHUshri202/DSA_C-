#include<bits/stdc++.h>
using namespace std;

int NumCompliment(int n ){
    if (n ==0) return 1;
    int m = n;
    int mask = 1;
    while(m!=0){
        n = n ^ mask; // Flip the bits using XOR with the mask
        mask = mask << 1; // Left shift the mask to the next bit position
        m = m >>1; // Right shift m to process the next bit
    }
    return n; // Return the complemented number
    // int msb = (int)log2(n); // Find the most significant bit position
    // int sum = 0;
    // for(int i = 0 ; i>=n; i--){
    //     if(num &(1<<i)){
    //         continue; // Skip if the bit is 1
    //     }
    //     else{
    //         sum += pow(2,i); // Add the power of 2 for the bit position
    //     }

    // }
    // return sum;
}


int main(){
    int n;
    cin>>n;
    cout<<NumCompliment(n)<<endl;
    return 0;
}