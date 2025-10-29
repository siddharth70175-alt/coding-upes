/*Q85: Reverse a string.
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include <stdio.h>
int main() {
    char str[1000];
    int length = 0, i;
    // Read string input
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0')
        length++;
    if (length > 0 && str[length - 1] == '\n')
        length--;
    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
