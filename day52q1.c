/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            // If exact match found, this is the ceil
            ceilIndex = mid;
            right = mid - 1; // to ensure first occurrence in case of duplicates
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else { 
            // arr[mid] > x → possible ceil
            ceilIndex = mid;
            right = mid - 1;
        }
    }

    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    // Example: you can change this for testing
    x = 5;

    int index = findCeilIndex(arr, n, x);
    printf("%d\n", index);

    return 0;
}
