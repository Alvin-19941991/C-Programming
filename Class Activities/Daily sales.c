// Daily sales

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *myfile;
    double sales, total = 0;

    myfile = fopen("C:\\Users\\Lenovo\\Documents\\sales.txt", "r");

    if (myfile == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    while (fscanf(myfile, "%lf", &sales) == 1)
    {
        total = total + sales;
    }

    printf("Total sales for the day = Ksh %.2f\n", total);

    fclose(myfile);

    return 0;
}