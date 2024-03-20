#include <stdio.h>

int main()
{
    printf("Enter first date (dd/mm/yy): ");
    int d1 = 0;
    int m1 = 0;
    int y1 = 0;
    (void)scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Enter second date (dd/mm/yy): ");
    int d2 = 0;
    int m2 = 0;
    int y2 = 0;
    (void)scanf("%d/%d/%d", &d2, &m2, &y2);

    if (y1 > y2)
    {
        printf("%d/%d/%d is less than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    }
    else if (y2 > y1)
    {
        printf("%d/%d/%d is less than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
    }
    else if (m1 > m2)
    {
        printf("%d/%d/%d is less than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    }
    else if (m2 > m1)
    {
        printf("%d/%d/%d is less than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
    }
    else if (d1 > d2)
    {
        printf("%d/%d/%d is less than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    }
    else if (d2 > d1)
    {
        printf("%d/%d/%d is less than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
    }
}