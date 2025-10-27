/* Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for (int d = 0; d < m + n - 1; d++) {
        int r, c;
        // Determine the starting point of this diagonal
        if (d < n) {
            r = 0;
            c = d;
        } else {
            r = d - n + 1;
            c = n - 1;
        }
        int t[1000];
        int count = 0;
        while (r < m && c >= 0) {
            t[count++] = mat[r][c];
            r++;
            c--;
        }
        // If diagonal number is even, print in reverse (upward diagonal)
        if (d % 2 == 0) {
            for (int i = count - 1; i >= 0; i--) {
                printf("%d ", t[i]);
            }
        } else { // Otherwise print in normal order (downward diagonal)
            for (int i = 0; i < count; i++) {
                printf("%d ", t[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
