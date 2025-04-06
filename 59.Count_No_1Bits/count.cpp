#include<bits/stdc++.h>
using namespace std;

int count_of_digits(int n){
    int count = 0;
    while(n){
        if(n & 1){
            count++;
        }
        // n = n>>1;
        // cout<<n<<" ";
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << count_of_digits(n) << endl;
    return 0;
}