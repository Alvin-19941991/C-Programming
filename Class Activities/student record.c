
// Student Record

#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudents();
void addStudent();

int main()
{
    saveStudent();

    displayStudents();

    addStudent();

    displayStudents();

    return 0;
}

// Question (a)

void saveStudent()
{
    FILE *fptr;

    char admissionNumber[30];
    char name[100];
    char course[50];

    printf("Enter student's admission number: ");
    scanf("%29s", admissionNumber);

    printf("Enter student's full name: ");
    scanf(" %99[^\n]", name);

    printf("Enter student's course: ");
    scanf(" %49[^\n]", course);

    fptr = fopen("C:\\Users\\Lenovo\\Documents\\students.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    fprintf(fptr, "Admission Number: %s\n", admissionNumber);
    fprintf(fptr, "Full Name: %s\n", name);
    fprintf(fptr, "Course: %s\n\n", course);

    fclose(fptr);

    printf("Student information saved successfully.\n\n");
}

// Question (b)

void displayStudents()
{
    FILE *fptr;
    int ch;

    fptr = fopen("C:\\Users\\Lenovo\\Documents\\students.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("\nStudent Records:\n");

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);
}

// Question (c)

void addStudent()
{
    FILE *fptr;

    char admissionNumber[30];
    char name[100];
    char course[50];

    printf("\nEnter another student's admission number: ");
    scanf("%29s", admissionNumber);

    printf("Enter student's full name: ");
    scanf(" %99[^\n]", name);

    printf("Enter student's course: ");
    scanf(" %49[^\n]", course);

    fptr = fopen("C:\\Users\\Lenovo\\Documents\\students.txt", "a");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    fprintf(fptr, "Admission Number: %s\n", admissionNumber);
    fprintf(fptr, "Full Name: %s\n", name);
    fprintf(fptr, "Course: %s\n\n", course);

    fclose(fptr);

    printf("New student information added successfully.\n\n");
}
