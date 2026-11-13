//3D hotel program

#include <stdio.h>

int main()
{
    int occupancy[3][5][10];
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                printf("Enter occupancy for branch %d, floor %d, room %d (1=occupied, 0=vacant): ", i + 1, j + 1, k + 1);
                scanf("%d", &occupancy[i][j][k]);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        int occupied = 0;
        int vacant = 0;

        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                if (occupancy[i][j][k] == 1)
                {
                    occupied++;
                }
                else
                {
                    vacant++;
                }
            }
        }

        printf("Branch %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }

    return 0;
}