/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1;

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for (int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }

    // Output result
    printf("%d\n", sum);

    return 0;
}
