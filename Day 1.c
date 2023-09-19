#include <stdio.h>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int t;
    printf("Enter the number of test cases (1 <= t <= 100): ");
    scanf("%d", &t);

    // Loop through each test case
    while (t--) {
        int n;
        printf("Enter an integer n (1 <= n <= 100) for the test case: ");
        scanf("%d", &n);

        // Calculate the factorial of n
        unsigned long long result = factorial(n);

        // Display the result
        printf("%llu\n", result);
    }

    return 0;
}
