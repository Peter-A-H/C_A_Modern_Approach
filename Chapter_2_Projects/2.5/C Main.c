#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("Enter a number: ");
    (void)scanf("%d", &x);

    int polynomial = (3 * x * x * x * x * x)
        + (2 * x * x * x * x)
        - (5 * x * x * x)
        - (x * x)
        + (7 * x)
        - 6;
    printf("%d", polynomial);

    return 0;
}