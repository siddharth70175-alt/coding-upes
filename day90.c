/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

// Define enum for Gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct for Person
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char input[10];
    struct Person p;

    // Read gender input
    scanf("%s", input);

    // Map input string to enum
    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(input, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        printf("Invalid gender\n");
        return 1;
    }

    // Print gender as a string
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
