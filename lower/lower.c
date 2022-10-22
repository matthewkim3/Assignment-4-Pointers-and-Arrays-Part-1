/*
Author:

This program implements a function 'lower' which accepts a string (character
pointer) and modifies the string, converting each alphabetic character to
lowercase.
*/

#include <ctype.h> /* isalpha */
#include <string.h> /* tolower */
#include <assert.h> /* assert */

void lower(char *s) {
    for(int i=0;s[i]!='/0';i++){
        s[i]=tolower(s[i]);
    }
    
}

int main() {
    char s[80];

    strcpy(s, "ABbA");
    lower(s);
    assert(strcmp(s, "abba") == 0);

    strcpy(s, "A.BB!A");
    lower(s);
    assert(strcmp(s, "a.bb!a") == 0);

    strcpy(s, "AmanaplanacanalPanama");
    lower(s);
    assert(strcmp(s, "amanaplanacanalpanama") == 0);
}
