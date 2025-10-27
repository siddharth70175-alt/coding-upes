/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);

    int pos = n;
    // Find the correct position to insert x
    for(int i=0; i<n; i++) {
        if(arr[i] > x) {
            pos = i;
            break;
        }
    }
    // Shift elements to the right to make space for x
    for(int i=n; i>pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = x;

    // Print the resulting array
    for(int i=0; i<=n; i++) {
        printf("%d", arr[i]);
        if(i<n) printf(" ");
    }
    printf("\n");
    return 0;
}
