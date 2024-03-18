#include <stdio.h>

int main(void)
{
    int d1 = 480;
    int d2 = 583;
    int d3 = 679;
    int d4 = 767;
    int d5 = 840;
    int d6 = 945;
    int d7 = 1140;
    int d8 = 1305;

    printf("Enter a 24-hour time: ");
    int hour = 0;
    int minute = 0;
    scanf("%d:%d", &hour, &minute);

    printf("Closest departure time is ");

    int userTime = hour * 60 + minute;
    if (userTime <= d1 + (d2 - d1) / 2)
    {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (userTime < d2 + (d3 - d2) / 2)
    {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (userTime < d3 + (d4 - d3) / 2)
    {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (userTime < d4 + (d5 - d4) / 2)
    {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (userTime < d5 + (d6 - d5) / 2)
    {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (userTime < d6 + (d7 - d6) / 2)
    {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (userTime < d7 + (d8 - d7) / 2)
    {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else
    {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}