#include <stdio.h>

int main() {
    int access, hour;
    int mode;
    int entry;
    
    while (1) {
        printf("Enter access number: ");
        scanf("%d", &access);

        if (access == 9999)
            break;

        printf("Enter current hour: ");
        scanf("%d", &hour);

        mode = (hour >= 22 || hour < 6) ? 1 : 0;

        if (mode == 0)
            entry = access & (1 | 2 | 4);
        else
            entry = access & 8;

        if (entry)
            printf("Entry Granted\n");
        else
            printf("Entry Denied\n");

        printf("%s\n", mode ? "LATE NIGHT MODE" : "STANDARD MODE");

        if (access & 4)
            printf("Personal Trainer Access: Yes\n");
        else
            printf("Personal Trainer Access: No\n");
    }

    return 0;
}
