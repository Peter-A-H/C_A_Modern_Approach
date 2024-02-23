#include <stdio.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    int month = 0;
    int day = 0;
    int year = 0;
    (void)scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d/%2.2d/%d", year, month, day);

    return 0;
}