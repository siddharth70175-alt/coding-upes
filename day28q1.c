/* Q55: Write a program to print all the prime numbers from 1 to n.
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    return 0;
}
