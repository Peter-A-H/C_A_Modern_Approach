#include <stdio.h>

int main(void)
{
    printf("Enter a 24-hour time: ");
    int hour = 0;
    int minute = 0;
    (void)scanf("%d:%d", &hour, &minute);

    int twelveHourTime = hour;
    if (hour >= 13 && hour <= 23)
    {
        twelveHourTime -= 12;
    }
    else
    {
        twelveHourTime = 0;
    }

    if (hour == 12 && minute <= 59 ||
        hour >= 1 && hour <= 11)
    {
        printf("Equivalent 12-hour time: %2.2d:%2.2d AM", twelveHourTime, minute);
    }
    else
    {
        printf("Equivalent 12-hour time: %2.2d:%2.2d PM", twelveHourTime, minute);
    }

    return 0;
}