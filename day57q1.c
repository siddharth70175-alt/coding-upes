/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>
void previousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Check all elements to the left of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        // Print the result in comma-separated format
        printf("%d", prevGreater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    // Sample Test Case 1
    int arr1[] = {1, 3, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    previousGreater(arr1, n1);  // Output: -1, -1, 3, -1

    // Sample Test Case 2
    int arr2[] = {6, 8, 0, 1, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    previousGreater(arr2, n2);  // Output: -1, -1, 8, 8, 8

    // Sample Test Case 3
    int arr3[] = {1, 2, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    previousGreater(arr3, n3);  // Output: -1, -1, -1, -1

    // Sample Test Case 4
    int arr4[] = {5, 4, 3, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    previousGreater(arr4, n4);  // Output: -1, 5, 4, 3

    return 0;
}
