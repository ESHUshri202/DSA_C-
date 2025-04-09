#include<bits/stdc++.h>
using namespace std;

void breakDigits(int n, vector<int> & ans){
    if(n == 0) return;
    breakDigits(n / 10, ans);
    ans.push_back(n % 10);
}

void sayDigits(vector<int>& digits, string arr[]){
    for(int i=0; i<digits.size(); i++){
        cout<<arr[digits[i]-1]<<" ";

    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> digits;
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    breakDigits(n, digits);
    sayDigits(digits, arr);
    return 0;
}