/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and different roots
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %.0lf, %.0lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Two real and same roots
        root1 = -b / (2.0 * a);
        printf("Roots are real and same: %.0lf\n", root1);
    }
    else {
        // Complex roots
        printf("Roots are complex\n");
    }

    return 0;
}
