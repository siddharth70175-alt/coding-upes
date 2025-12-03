/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

int main() {
    // Define enum for status codes
    enum Status { SUCCESS, FAILURE, TIMEOUT } status;

    // Ask user to enter status value (0=SUCCESS, 1=FAILURE, 2=TIMEOUT)
    printf("Enter status code (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &status);

    // Print corresponding message
    switch(status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status code!\n");
    }

    return 0;
}
