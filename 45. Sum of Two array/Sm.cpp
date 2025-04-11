#include<bits/stdc++.h>
using namespace std;

// Given two arrays a and b, each of size n and m respectively,
// representing two non-negative integers, return the sum of the two integers as an array.
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return it as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.


vector<int> findarraysum(vector<int>&a,int n , vector<int>&b,int m ){
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry =0;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case
    while(j>=0){
        int sum = a[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry>=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}