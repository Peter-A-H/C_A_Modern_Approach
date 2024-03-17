#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter four integers: ");
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int max = 0;
    int max1 = 0;
    int max2 = 0;
    int min = 0;
    int min1 = 0;
    int min2 = 0;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 >= n2)
    {
        max1 = n1;
        min1 = n2;
    }
    else
    {
        max1 = n2;
        min1 = n1;
    }

    if (n3 >= n4)
    {
        max2 = n3;
        min2 = n4;
    }
    else
    {
        max2 = n4;
        min2 = n3;
    }

    if (max2 > max1)
    {
        max = max2;
    }
    else
    {
        max = max1;
    }

    if (min1 < min2)
    {
        min = min1;
    }
    else
    {
        min = min2;
    }

    printf("Largest: %d\nSmallest: %d\n", max, min);
    system("PAUSE");
    return 0;
}