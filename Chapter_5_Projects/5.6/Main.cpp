#include <stdio.h>

int main(void)
{
    printf("Enter the first single-digit: ");
    int d = 0;
    scanf("%d", &d);

    printf("Enter the first group of five digits: ");
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);

    printf("Enter the second group of five digits: ");
    int b1 = 0;
    int b2 = 0;
    int b3 = 0;
    int b4 = 0;
    int b5 = 0;
    scanf("%d%d%d%d%d", &b1, &b2, &b3, &b4, &b5);

    printf("Enter the last check digit: ");
    int checkDigit = 0;
    scanf("%d", &checkDigit);

    int firstSum = d + a2 + a4 + b1 + b3 + b5;
    int secondSum = a1 + a3 + a5 + b2 + b4;
    int total = 3 * firstSum + secondSum;
    int calculateCheckDigit = 9 - ((total - 1) % 10);

    if (checkDigit == calculateCheckDigit)
    {
        printf("VALID\n");
    }
    else
    {
        printf("NOT VALID\n");
    }

    return 0;
}