#include <stdio.h>

int main(void)
{
    printf("Enter a number with a maximum of 4 digits: ");
    int num = 0;
    (void)scanf("%d", &num);

    if (num > 0 && num <= 9)
    {
        printf("Your number has 1 digit.");
    }
    else if (num >= 10 && num <= 99)
    {
        printf("Your number has 2 digits.");
    }
    else if (num >= 100 && num <= 999)
    {
        printf("Your number has 3 digits");
    }
    else
    {
        printf("Your number has 4 digits");
    }

    return 0;
}