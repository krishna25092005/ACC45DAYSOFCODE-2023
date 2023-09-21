#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int X, Y;
        printf("Enter Chef's daily goal (X) and the number of chocolates sold (Y): ");
        scanf("%d %d", &X, &Y);

        int total_amount = 0;

        if (Y <= X) {
            // If Chef sells at or below his daily goal, he gets 1 rupee per chocolate
            total_amount = Y;
        } else {
            // If Chef exceeds his daily goal, he gets 2 rupees per chocolate for each extra chocolate
            total_amount = X + (Y - X) * 2;
        }

        printf("%d\n", total_amount);
    }

    return 0;
}
