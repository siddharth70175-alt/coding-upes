/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, pos, x;
    scanf("%d", &n);
    int arr[n + 1]; // Make space for 1 new element
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &x); // pos: index where to insert, x: value

    // Shift elements to the right from position
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = x; // Insert the element

    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) printf(" ");
    }
    printf("\n");
    return 0;
}
