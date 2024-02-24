#include <stdio.h>

int main(void)
{
    printf("Enter a dollar amount: ");

    int amount = 0;
    (void)scanf("%d", &amount);

    int twenties = amount / 20;
    amount -= twenties * 20;

    int tens = amount / 10;
    amount -= tens * 10;

    int fives = amount / 5;
    amount -= fives * 5;

    int pound = amount / 1;
    amount -= pound * 1;

    printf("\x9C" "20 pound notes: %d\n", twenties);
    printf("\x9C" "10 pound notes: %d\n", tens);
    printf("\x9C" "5 pound notes: %d\n", fives);
    printf("\x9C" "1 pound notes: %d\n", pound);

    return 0;
}