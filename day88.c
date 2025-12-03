/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

// Define enum for colors
enum Color { RED, YELLOW, GREEN };

int main() {
    // Array of strings to map enum values to names
    const char *colorNames[] = { "RED", "YELLOW", "GREEN" };
    
    // Loop through enum values
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }

    return 0;
}
