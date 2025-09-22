/*Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // Use long long for larger products
    int hasEven = 0;

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop through even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;  // Mark that at least one even number was found
    }

    // If no even numbers found (e.g., n < 2), product should be 0
    if (hasEven)
        printf("%lld\n", product);
    else
        printf("0\n");

    return 0;
}
