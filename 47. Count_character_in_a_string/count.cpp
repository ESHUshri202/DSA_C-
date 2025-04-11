#include <bits/stdc++.h>

using namespace std;

// Function to find the maximum occurring character in a string
// and return the character along with the count of occurrences
// The function takes a string s as input and returns the character
// The function uses an array of size 26 to count the occurrences of each character
// The function uses a loop to iterate through the string and count the occurrences
// The function uses a loop to find the maximum occurring character
// The function uses a variable maxi to keep track of the maximum count
// The function uses a variable ans to keep track of the index of the maximum occurring character

char getMaxOccCharacter(string s ){
    int arr[26] = {0};
    // create an array of count of characters
    for(int i =0 ; i <s.length(); i++){
        char ch = s[i];
        int number = 0;
        if( ch >= 'a' && ch<= 'z'){
            //lowercase
            number = ch - 'a';
        }
        else {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1 , ans= 0, count =0;
    for(int i =0 ; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
            count ++ ;
        }
    }
    cout<<count;
    char finalAns = 'a' + ans;
    return finalAns;
}


int main(){
    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
}