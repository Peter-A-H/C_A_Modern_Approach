#include <stdio.h>

int main(void)
{
    printf("Enter a number between 0 and 32767: ");
    int num1 = 0;
    (void)scanf("%d", &num1);

    int num2 = num1 / 8;
    int num3 = num2 / 8;
    int num4 = num3 / 8;
    int num5 = num4 / 8;
    printf("In octal, your number is: %d%d%d%d%d", num5 % 8, num4 % 8, num3 % 8, num2 % 8, num1 % 8);

    return 0;
}