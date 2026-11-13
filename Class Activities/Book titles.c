//Book titles
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int storeBookTitle(void);

int main(void)
{
    storeBookTitle();

    return 0;
}

int storeBookTitle(void)
{
    FILE *fp;
    char a[50];

    fp = fopen("C:\\Users\\Lenovo\\Documents\\borrowed_books.txt", "a");

    if(fp == NULL)
    {
        printf("Error opening the file\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(a, sizeof(a), stdin);

    a[strcspn(a, "\n")] = '\0';

    fprintf(fp, "%s\n", a);

    fclose(fp);

    printf("Book title successfully stored!\n");

    return 0;
}
