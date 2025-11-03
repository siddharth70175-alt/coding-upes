/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) {
    // Loop over all possible subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0; // default value (if no negative found)

        // Check elements in current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;  // Stop once first negative is found
            }
        }

        printf("%d", firstNegative);

        // Print space between outputs
        if (i < n - k)
            printf(" ");
    }

    printf("\n");
}

int main() {
    // Sample Test Case 1
    int arr1[] = {-8, 2, 3, -6, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    firstNegativeInWindow(arr1, n1, k1);  // Output: -8 0 -6 -6

    // Sample Test Case 2
    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    firstNegativeInWindow(arr2, n2, k2);  // Output: -1 -1 -7 -15 -15 0

    // Sample Test Case 3
    int arr3[] = {12, 1, 3, 5};
