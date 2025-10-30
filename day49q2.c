/*Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[1001];
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if any
    int len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    int start = 0, i = 0;
    char word[100];
    char initials[100] = "";
    char surname[100] = "";
    int word_count = 0;

    while (i <= len) {
        if (name[i] == ' ' || name[i] == '\0') {
            int word_len = i - start;
            if (word_len > 0) {
                strncpy(word, name + start, word_len);
                word[word_len] = '\0';
                word_count++;
                if (name[i] == '\0') {
                    // Last word - surname, Print full surname with capitalization
                    surname[0] = toupper(word[0]);
                    for (int k = 1; k < word_len; k++) {
                        surname[k] = tolower(word[k]);
                    }
                    surname[word_len] = '\0';
                } else {
                    // Initials for other words
                    int n = strlen(initials);
                    initials[n] = toupper(word[0]);
                    initials[n + 1] = '.';
                    initials[n + 2] = ' ';
                    initials[n + 3] = '\0';
                }
            }
            start = i + 1;
        }
        i++;
    }

    printf("%s%s\n", initials, surname);
    return 0;
}
