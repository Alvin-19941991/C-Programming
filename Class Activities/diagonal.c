//A program to calculate diagnol


#include <stdio.h>
#include <math.h>

int main(void)
{
    double length, width, diagonal;

    printf("Enter the length of the window: ");
    scanf("%lf", &length);

    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    printf("Length: %.2f metres\n", length);
    printf("Width: %.2f metres\n", width);
    printf("Diagonal: %.2f metres\n", diagonal);

    return 0;
}