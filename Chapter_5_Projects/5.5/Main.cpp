#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter amount of taxable income: ");
    int taxableIncome = 0;
    scanf("%d", &taxableIncome);

    if (taxableIncome <= 750)
    {
        printf("Tax due: %.2f\n", taxableIncome * 0.01);
    }
    else if (taxableIncome >= 751 && taxableIncome <= 2250)
    {
        printf("Tax due: %.2f\n", 7.50f + taxableIncome * 0.02);
    }
    else if (taxableIncome >= 2251 && taxableIncome <= 3750)
    {
        printf("Tax due: %.2f\n", 37.50f + taxableIncome * 0.03);
    }
    else if (taxableIncome >= 3751 && taxableIncome <= 5250)
    {
        printf("Tax due: %.2f\n", 82.50f + taxableIncome * 0.04);
    }
    else if (taxableIncome >= 5251 && taxableIncome <= 7000)
    {
        printf("Tax due: %.2f\n", 142.50f + taxableIncome * 0.05);
    }
    else
    {
        printf("Tax due: %.2f\n", 230 + taxableIncome * 0.06);
    }

    system("PAUSE");
    return 0;
}