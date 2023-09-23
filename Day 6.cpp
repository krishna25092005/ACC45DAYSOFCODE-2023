#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int N;
        printf("Enter the number of friends (N): ");
        scanf("%d", &N);

        // Calculate the minimum number of cars required
        int cars_needed = (N + 3) / 4; // Divide N by 4, rounding up

        printf("%d\n", cars_needed);
    }

    return 0;
}

