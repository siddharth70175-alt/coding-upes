/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    // Open input file in read mode
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(input);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    // Close files
    fclose(input);
    fclose(output);

    printf("Conversion complete! Output written to output.txt\n");

    return 0;
}
