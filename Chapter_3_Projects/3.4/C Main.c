#include <stdio.h>

int main(void)
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    (void)scanf("(%d) %d-%d", &num1, &num2, &num3);
    printf("%d.%d.%d", num1, num2, num3);

    return 0;
}