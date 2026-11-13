// Program to calculate the surface area and volume of a cylinder

#include <stdio.h>

#define PI 3.14159

int main()
{
    double surface_area, volume, height, radius;

    printf("Enter radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%lf", &height);

    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
    volume = PI * radius * radius * height;

    printf("Volume = %.2lf\n", volume);
    printf("Surface area = %.2lf\n", surface_area);

    return 0;
}
