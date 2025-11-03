/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    int max_sum = 0;
    int window_sum = 0;
    // Compute sum of first window of size k
    for (int i = 0; i < k; i++)
        window_sum += arr[i];

    max_sum = window_sum;
    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }
    return max_sum;
}

int main() {
    // Sample Test Case 1
    int arr1[] = {100, 200, 300, 400};
    int k1 = 2;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", maxSumSubarray(arr1, n1, k1));  // Output: 700

    // Sample Test Case 2
    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", maxSumSubarray(arr2, n2, k2));  // Output: 39

    // Sample Test Case 3
    int arr3[] = {100, 200, 300, 400};
    int k3 = 1;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", maxSumSubarray(arr3, n3, k3));  // Output: 400

    return 0;
}
