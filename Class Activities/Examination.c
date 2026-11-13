// Examination Results

#include <stdio.h>
#include <stdlib.h>

int main() {

    struct Student {
        char studentname[50];
        char registrationnumber[20];
        int totalmark;
    };

    struct Student s;

    FILE *fptr;

    fptr = fopen("C:\\Users\\Lenovo\\Downloads\\results.dat", "rb");

    if (fptr == NULL) {
        printf("Error opening the file\n");
        exit(1);
    }

    while (fread(&s, sizeof(struct Student), 1, fptr) == 1) {

        printf("Student Name: %s\n", s.studentname);
        printf("Registration Number: %s\n", s.registrationnumber);
        printf("Total Marks: %d\n", s.totalmark);

        printf("----------------------\n");
    }

    fclose(fptr);

    return 0;
}