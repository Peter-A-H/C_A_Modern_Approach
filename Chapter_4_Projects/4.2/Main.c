#include <stdio.h>

int main(void)
{
    printf("Enter a three-digit number: ");
    int numberEntered = 0;
    (void)scanf("%d", &numberEntered);

    int firstDigit = numberEntered / 10 / 10;
    int secondDigit = numberEntered / 10 % 10;
    int thirdDigit = numberEntered % 10;
    printf("The reversal is %d%d%d", thirdDigit, secondDigit, firstDigit);

    return 0;
}