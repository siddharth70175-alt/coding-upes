/*Q96: Reverse each word in a sentence without changing the word order.
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[1024];
    fgets(str, 1024, stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    char *word_begin = str, *temp = str;

    while (*temp) {
        if (*temp == ' ' || *(temp + 1) == '\0') {
            char *word_end = (*temp == ' ') ? temp - 1 : temp;
            reverseWord(word_begin, word_end);
            word_begin = temp + 1;
        }
        temp++;
    }

    printf("%s\n", str);
    return 0;
}
