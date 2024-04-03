#include <stdio.h>
#include <string.h>

/*
    Program: PRG155_LAB06b.c
    Name: Arham Jamshaid, Kathlene Acosta
    Date: March 07, 2024
*/

char* formatWithCommas(double value);

int main() {
    int years;
    double startBalance, interestRate, interestPaid, endBalance;

    printf("Enter starting balance and interest rate: ");
    fflush(stdout);
    scanf("%lf %lf", &startBalance, &interestRate);

    printf("Enter number of years: ");
    fflush(stdout);
    scanf("%d", &years);

    printf("+------+---------------+---------------+---------------+\n");
    printf("| Year | Start Balance | Interest Paid |  End Balance  |\n");
    printf("+------+---------------+---------------+---------------+\n");
    for (int currentYear = 1; currentYear <= years; currentYear++) {
        interestPaid = startBalance * (interestRate/100);
        endBalance = startBalance + interestPaid;
        printf("|  %02d  | $%12s | $%12s | $%12s |\n", 
                currentYear, 
                formatWithCommas(startBalance), 
                formatWithCommas(interestPaid), 
                formatWithCommas(endBalance));
        startBalance = endBalance;
    }
    printf("+------+---------------+---------------+---------------+\n");

    return 0;
}

// Function prototype for formatWithCommas
char* formatWithCommas(double value) {
    static char buffer[20]; // Assuming maximum size for the output
    sprintf(buffer, "%.2lf", value); // Format double value with 2 decimal places

    int len = strlen(buffer);
    int decimalPos = len - 3; // Position of the decimal point

    // Insert commas every three characters starting from the end of the integer part
    for (int i = decimalPos - 3; i > 0; i -= 3) {
        memmove(&buffer[i + 1], &buffer[i], len - i); // Make space for the comma
        buffer[i] = ','; // Insert comma
    }

    return buffer;
}