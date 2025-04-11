#include <bits/stdc++.h>

using namespace std;
/* A word is defined as a sequence of non-space characters.
The input string does not contain leading or trailing spaces.
The words are always separated by a single space. */

// Function to reverse the string from index start to end

/*
Function: reverseWords(char str[])
    Reverse the entire string:

    Use a function like reverse(str, str + len) (note: the code has a bug here, see below).

    Call reverseEachWord(str) to reverse each individual word.

Function: reverseEachWord(char str[])
    Initialize two pointers: i = 0 and j = 0.

    Loop through the string:

    Skip spaces to find the beginning of a word (i).

    Move j forward to find the end of the word.

    BUG ALERT: str[j] = ' ' should be str[j] != ' '.

    Reverse the substring str[i...j-1].

    Set i = j to process the next word.



*/
void reverseWords(char str[])
{
    // reverse the whole input

    reverse(str.begin(), str.end());

    // reverse each individual word
    reverseEachWord(str);
}


void reverseEachWord(char str[])
{
    int i = 0, j = 0;
    int n = strlen(str);
    while (i < n && j < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        j = i;
        while (j < n && str[j] = ' ')
        {
            j++;
        }

        reverse(str, i, j - 1);
        i = j;
    }
}

int main()
{
    char str[20] = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};

    puts(str);
}