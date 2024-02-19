#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("Enter height of box: ");
    (void)scanf("%d", &height);

    int length = 0;
    printf("Enter height of box: ");
    (void)scanf("%d", &length);

    int width = 0;
    printf("Enter height of box: ");
    (void)scanf("%d", &width);

    int volume = height * length * width;
    printf("Volume (cubic inches): %d\n", volume);

    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}