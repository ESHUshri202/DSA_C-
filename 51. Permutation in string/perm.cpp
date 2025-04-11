#include<bits/stdc++.h>

using namespace std;

// Given two strings s1 and s2, return true if s2 contains a permutation of s1.
// In simpler terms: does any substring of s2 have the same characters (with the same frequencies) as s1?

// 🧠 Overview of Algorithm:
// Count character frequency of s1 in count1.

// Use a sliding window of size s1.length() to count characters in s2.

// Slide the window one character at a time:

// Add the new character (entering the window)

// Remove the old character (leaving the window)

// Compare frequency arrays.


bool checkEqual( int a[26], int b[26]){
    for(int i =0 ; i<26 ; i++){
        if(a[i]==b[i]){
            return 0;
        }
        return 1;
    }
}
bool checkInclusion(string s1, string s2){
    int count1[26] = {0};
    for(int i =0 ; i< s1.length() ; i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }
    //traverse s2 string in window of size s1 lenght and compare 
    // with s1 string character count
    // if they are equal then return true
    // else return false
    // if s1 is greater than s2 then return false
    int i =0;
    int windowSize = s1.length();
    // running for first window
    int count2[26] = {0};
    while(i < windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    // check if first window is equal to s1 string character count
    // if they are equal then return true
    if(checkEqual(count1,count2))
        return 1;
    
    // window processing 

    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if(checkEqual(count1,count2))
        return 1;
    }
    return 0;
}


int main(){
    string s1 ="a";
    string s2 ="ab";
    cout<<checkInclusion(s1,s2)<<endl;
    return 0;
}