/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    scanf("%lld", &num);

    // Count frequency for each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int max_digit = 0, max_count = 0;
    // If tie, return the smallest digit (sample prefers lowest value in tie)
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);
    return 0;
}
