#include <bits/stdc++.h>

using namespace std;
/* A word is defined as a sequence of non-space characters.
The input string does not contain leading or trailing spaces.
The words are always separated by a single space. */
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