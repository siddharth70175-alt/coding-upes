/*Q94: Find the longest word in a sentence.
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1024

int main() {
    char str[MAX_LEN];
    char longest_word[MAX_LEN];
    int max_len = 0, word_len = 0, i = 0, start = 0;
    fgets(str, MAX_LEN, stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word_len++;
        } else {
            if (word_len > max_len) {
                max_len = word_len;
                strncpy(longest_word, str + i - word_len, word_len);
                longest_word[word_len] = '\0';
            }
            word_len = 0;
        }
    }

    printf("%s\n", longest_word);
    return 0;
}
