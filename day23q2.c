/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>
int main() {
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
