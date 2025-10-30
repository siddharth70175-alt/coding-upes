/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[11];
    scanf("%10s", date);
    // Extract day and year parts
    char day[3], year[5];
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';
    printf("%s-Apr-%s\n", day, year);
    return 0;
}
