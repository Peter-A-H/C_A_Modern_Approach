#include <stdio.h>

int main()
{
    printf("Enter a two-digit number: ");
    int firstDigit = 0;
    int secondDigit = 0;
    (void)scanf("%1d%1d", &firstDigit, &secondDigit);

    if (firstDigit == 1 && secondDigit == 1)
    {
        printf("eleven");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 2)
    {
        printf("twelve");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 3)
    {
        printf("thirteen");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 4)
    {
        printf("fourteen");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 5)
    {
        printf("fifteen");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 6)
    {
        printf("sixteen");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 7)
    {
        printf("seventeen");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 8)
    {
        printf("eighteen");
        return 0;
    }
    else if (firstDigit == 1 && secondDigit == 9)
    {
        printf("nineteen");
        return 0;
    }

    switch (firstDigit)
    {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }

    switch (secondDigit)
    {
        case 0:
            break;
        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
    }
}