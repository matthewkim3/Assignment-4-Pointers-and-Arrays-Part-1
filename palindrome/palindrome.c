/*
Author:

This file provides a function called palindrome.  The function palindrome
returns takes a string (char *) and returns 1 if the string is a palindrome and
0 otherwise.  A string is a palindrome if it is exactly the same as its
reverse.  I.e. racecar is a palindrome, but Racecar is not.
*/

#include <string.h> /* strlen */
#include <assert.h> /* assert */

int palindrome(char *s) {
    int length=0;
    for(int i=0;s[i]!='\0';i++){
        length++;
    }
    for(int c=0;c<length/2;c++){
        if(s[c]!=s[length-c-1]){
            return 0;
        }
    }
    return 1;
}

int main() {
    assert(palindrome("abba") == 1);
    assert(palindrome("abbc") == 0);
    assert(palindrome("a bba") == 0);
    assert(palindrome("a bb a") == 1);
    assert(palindrome("aba") == 1);
    assert(palindrome("") == 1);
    assert(palindrome("ab") == 0);
    assert(palindrome("racecar") == 1);
    assert(palindrome("baac") == 0);
}
