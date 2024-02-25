#include <stdio.h>

int main(void)
{
    printf("Enter fractions to add (a/b+x/y): ");
    int num1 = 0;
    int num2 = 0;
    int denom1 = 0;
    int denom2 = 0;
    (void)scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    int resultNum = num1 * denom2 + num2 * denom1;
    int resultDom = denom1 * denom2;
    printf("The sum is %d/%d\n", resultNum, resultDom);

    return 0;
}