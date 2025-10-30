/*Q93: Check if two strings are anagrams of each other.
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};
    int i;
    // If lengths are not equal, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    // Count the frequency difference for each character
    for (i = 0; str1[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    // If any count is non-zero, not anagrams
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}

int main() {
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    if (areAnagrams(str1, str2))
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
    return 0;
}
