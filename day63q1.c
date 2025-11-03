/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
// Function to sort the array using simple Bubble Sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find kth smallest element
int kthSmallest(int arr[], int n, int k) {
    sortArray(arr, n);
    return arr[k - 1];
}

int main() {
    // Sample Test Case 1
    int arr1[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 4;
    printf("%d\n", kthSmallest(arr1, n1, k1));  // Output: 5

    // Sample Test Case 2
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("%d\n", kthSmallest(arr2, n2, k2));  // Output: 7

    return 0;
}
