/*Q90: Toggle case of each character in a string.
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
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
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // Convert to lowercase
        i++;
    }
    printf("%s", str);
    return 0;
}
