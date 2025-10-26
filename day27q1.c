/* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j;
    int n = 5;
    // Upper pyramid
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
