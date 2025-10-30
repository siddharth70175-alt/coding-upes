Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char *str1, char *str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    if (size1 != size2) return 0;
    char *temp = (char *)malloc(sizeof(char) * (size1 * 2 + 1));
    temp[0] = '\0';
    strcat(temp, str1);
    strcat(temp, str1);
    int result = strstr(temp, str2) != NULL;
    free(temp);
    return result;
}
int main() {
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    if (isRotation(str1, str2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
