/*Q100: Print all sub-strings of a string.
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int first_printed = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (first_printed) {
                printf(",");
            }
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            first_printed = 1;
        }
    }
    printf("\n");
    return 0;
}
