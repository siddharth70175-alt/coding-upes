/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/#include <stdio.h>

#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n); 

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int symmetric = 1; 
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
