#include <stdio.h>

int main() {
    int value, choice;

    while (1) {

        printf("Enter appliance value (-1 to exit): ");
        scanf("%d", &value);

        if (value == -1)
            break;

        printf("\n1. Switch Water Heater ON\n");
        printf("2. Switch Air Conditioner OFF\n");
        printf("3. Toggle Main Lights\n");
        printf("4. Check Security Camera\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                // Water Heater ON
                value = value | 2;
                break;

            case 2:
                // Air Conditioner OFF
                value = value & ~4;
                break;

            case 3:
                // Toggle Main Lights
                value = value ^ 1;
                break;

            case 4:
                // Check Security Camera
                if (value & 8)
                    printf("Security Camera is ON\n");
                else
                    printf("Security Camera is OFF\n");
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("New combined value = %d\n", value);

        // Overload check: AC and Water Heater both ON
        if ((value & 4) && (value & 2))
            printf("Warning: Air Conditioner and Water Heater are both ON!\n");
        else
            printf("No overload.\n");

        printf("\n");
    }

    printf("Program ended.\n");

    return 0;
}


