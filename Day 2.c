#include <stdio.h>

int main() {
    int X, Y, Z;
    printf("Enter the number of 5 rupee coins (X): ");
    scanf("%d", &X);
    printf("Enter the number of 10 rupee coins (Y): ");
    scanf("%d", &Y);
    printf("Enter the cost of each chocolate (Z): ");
    scanf("%d", &Z);

    // Calculate the total rupees Chef has
    int total_rupees = (X * 5) + (Y * 10);

    // Calculate the maximum number of chocolates Chef can buy
    int max_chocolates = total_rupees / Z;

    printf("Chef can buy a maximum of %d chocolates for Chefina.\n", max_chocolates);

    return 0;
}
