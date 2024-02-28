#include <stdio.h>

int main(void)
{
    printf("Enter the 11 digit UPC code: ");
    int d = 0;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int b1 = 0;
    int b2 = 0;
    int b3 = 0;
    int b4 = 0;
    int b5 = 0;
    (void)scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &a1, &a2, &a3, &a4, &a5, &b1, &b2, &b3, &b4, &b5);

    int firstSum = d + a2 + a4 + b1 + b3 + b5;
    int secondSum = a1 + a3 + a5 + b2 + b4;
    int total = 3 * firstSum + secondSum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}