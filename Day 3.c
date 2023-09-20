#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int X, Y;
        printf("Enter the number of students (X) and the number of chairs Chef already has (Y): ");
        scanf("%d %d", &X, &Y);

        int extra_chairs_needed = X - Y; // Calculate the number of extra chairs needed

        if (extra_chairs_needed <= 0) {
            // If Chef already has enough or more chairs than students, no need to buy extra chairs
            printf("0\n");
        } else {
            // Otherwise, Chef needs to buy extra chairs
            printf("%d\n", extra_chairs_needed);
        }
    }

    return 0;
}
