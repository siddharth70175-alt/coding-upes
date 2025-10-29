/*Q89: Count frequency of a given character in a string.
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0, i = 0;
    // Read string input
    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}
