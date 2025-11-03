/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

void maxInSubarrays(int arr[], int n, int k) {
    // Loop through all possible subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find the maximum element in the current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);
        if (i < n - k)
            printf(" ");
    }

    printf("\n");
}

int main() {
    // Sample Test Case 1
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    maxInSubarrays(arr1, n1, k1);  // Output: 3 3 4 5 5 5 6

    // Sample Test Case 2
    int arr2[] = {5, 1, 3, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 1;
    maxInSubarrays(arr2, n2, k2);  // Output: 5 1 3 4 2

    return 0;
}
