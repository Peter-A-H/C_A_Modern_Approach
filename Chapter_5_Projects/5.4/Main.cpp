#include <stdio.h>

int main(void)
{
    printf("Enter a wind speed in knots: ");
    int knots = 0;
    scanf("%d", &knots);

    if (knots < 1)
    {
        printf("Calm");
    }
    else if (knots >= 1 && knots <= 3)
    {
        printf("Light air");
    }
    else if (knots >= 4 && knots <= 27)
    {
        printf("Breeze");
    }
    else if (knots >= 28 && knots <= 47)
    {
        printf("Gale");
    }
    else if (knots >= 48 && knots <= 63)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }

    getchar();
    return 0;
}