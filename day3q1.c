/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output result rounded to the nearest integer
    printf("Fahrenheit=%d\n", (int)(fahrenheit + 0.5));

    return 0;
}
