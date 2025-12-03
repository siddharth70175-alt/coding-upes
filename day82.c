/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

int main() {
    // Define enumeration for traffic lights
    enum TrafficLight { RED, YELLOW, GREEN } light;

    // Ask user to enter a value (0=RED, 1=YELLOW, 2=GREEN)
    printf("Enter traffic light value (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    // Print corresponding action
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value!\n");
    }

    return 0;
}
