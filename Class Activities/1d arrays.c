//1D hotel program

#include <stdio.h>

int main()
{
    float revenue[7];
    float total = 0, average;
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }

    for (i = 0; i < 7; i++)
    {
        total = total + revenue[i];
    }

    average = total / 7;

    printf("Total weekly revenue = KSh %.2f\n", total);
    printf("Average daily revenue = KSh %.2f\n", average);

    return 0;
}