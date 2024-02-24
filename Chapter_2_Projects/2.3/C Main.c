#include <stdio.h>
#include <math.h>

int main(void)
{
    int radius = 0;
    printf("Please enter a value for the radius: ");
    (void)scanf("%d", &radius);

    float volume = (4.0f / 3.0f) * M_PI * radius * radius * radius;
    printf("The volume of a sphere with a radius of %d is: %.2f", radius, volume);
    return 0;
}