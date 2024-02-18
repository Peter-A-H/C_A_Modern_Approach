#include <stdio.h>

// Computes the dimensional weight of a 12"x10"x8" box

int main(void)
{
    const int HEIGHT = 8;
    const int LENGTH = 12;
    const int WIDTH = 10;
    int volume = HEIGHT * LENGTH * WIDTH;
    int weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", LENGTH, WIDTH, HEIGHT);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}