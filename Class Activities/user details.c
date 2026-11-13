// A program to prompt user to enter details.

#include <stdio.h>

int main()
{
    /* Get details from the user */
    float height;
    double bank_balance;
    long phone_number;

    printf("Enter your height in metres: ");
    scanf("%f", &height);

    printf("Enter your bank balance in Ksh: ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%ld", &phone_number);

    printf("\nHeight: %.2f metres\n", height);
    printf("Bank balance: %.2f Ksh\n", bank_balance);
    printf("Phone number: %ld\n", phone_number);

    return 0;
}
