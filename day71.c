/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Taking user input
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Creating and opening file in write mode
    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Writing data to file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    // Closing file
    fclose(fp);

    // Success message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
