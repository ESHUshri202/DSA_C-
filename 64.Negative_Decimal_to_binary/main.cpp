#include<bits/stdc++.h>
using namespace std;


int neg_dec_bin(long long int n ){
    if(n ==0)return 1;
    unsigned long long int i=0, ans = 0;
    if(n<0){
        n = pow(2,16)+n; // Convert negative decimal to positive decimal using 2's complement
    } 
    cout<<n<<endl;
    while(n!=0){
        int lastbit = n&1;
        ans = (lastbit * pow(2,i)) + ans;
        n = n>>1; // Right shift n to process the next bit
        i++;
        cout<<ans<<endl;
    }
    return ans; // Return the binary representation of the decimal number
}


int main(){
    long long int n;
    cin>>n;
    cout<<neg_dec_bin(n)<<endl; // Call the function to convert negative decimal to binary
    return 0;
}