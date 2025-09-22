/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b; // Assumes b ≠ 0

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}

