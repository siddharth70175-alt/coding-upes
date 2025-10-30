/*Q97: Print the initials of a name.
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include typepe.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    // Print the first character if it is alphabetic
    if (name[0] != '\0' && isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    // Traverse the string and print character after every space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && isalpha(name[i+1])) {
            printf("%c.", toupper(name[i+1]));
        }
    }
    printf("\n");
    return 0;
}
