/*Q92: Find the first repeating lowercase alphabet in a string.
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int freq[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                // First repeating lowercase alphabet found
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    // If no repeating lowercase alphabet is found
    printf("-1\n");
    return 0;
}
