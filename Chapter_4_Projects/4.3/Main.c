#include <stdio.h>

int main(void)
{
    printf("Enter a three-digit number: ");
    int firstDigit = 0;
    int secondDigit = 0;
    int thirdDigit = 0;
    (void)scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

    printf("The reversal is %d%d%d", thirdDigit, secondDigit, firstDigit);

    return 0;
}