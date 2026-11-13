//2D hotel program

#include <stdio.h>

int main()
{
    int occupancy[5][10];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Enter occupancy for floor %d, room %d (1=occupied, 0=vacant): ", i + 1, j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        int occupied = 0;
        int vacant = 0;

        for (j = 0; j < 10; j++)
        {
            if (occupancy[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }

    return 0;
}