/*Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    // Euclidean algorithm
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    // Output the result
    printf("%d\n", x);

    return 0;
}
