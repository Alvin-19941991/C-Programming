// A program to calculate total and average marks of the three subjects


#include <stdio.h>


int calculateTotal(int mark1, int mark2, int mark3);
double calculateAverage(int total);
void displayResult(double average);

int main()
{
    int mark1, mark2, mark3;
    int total;
    double average;

    printf("Enter marks for subject 1:  ");
    scanf("%d", &mark1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &mark2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &mark3);

    total = calculateTotal(mark1, mark2, mark3);

    average = calculateAverage(total);

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    displayResult(average);

   return 0; 
}


int calculateTotal(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}


double calculateAverage(int total)
{
    return total / 3.0;
}


void displayResult(double average)
{
    if (average >= 50)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }
return 0;
}
