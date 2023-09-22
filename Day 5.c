#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int X;
        printf("Enter the battery level (X%): ");
        scanf("%d", &X);

        bool isLowBattery = (X <= 15);

        if (isLowBattery) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
