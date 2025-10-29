/*Q84: Convert a lowercase string to uppercase without using built-in functions.
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO
*/
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;
    // Read string input
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // Convert to uppercase
        i++;
    }
    printf("%s", str);
    return 0;
}
