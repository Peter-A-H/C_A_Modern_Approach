#include <stdio.h>

int main(void)
{
    printf("Enter the first 12 digits of an EAN code: ");
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
    int b6 = 0;
    (void)scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &a1, &a2, &a3, &a4, &a5, &b1, &b2, &b3, &b4, &b5, &b6);

    int firstSum = a1 + a3 + a5 + b2 + b4 + b6;
    int secondSum = d + a2 + a4 + b1 + b3 + b5;
    int total = secondSum + (firstSum * 3);
    int adjustedTotal = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", adjustedTotal);

    return 0;
}