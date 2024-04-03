#include <stdio.h>

/*
    Program: PRG155_LAB06a.c
    Name: Arham Jamshaid, Kathlene Acosta
    Date: March 05, 2024
*/

int main() {
    double startBalance, interestRate, endBalance, interestPaid;
    int years;

    printf("Enter starting balance and interest rate: ");
    scanf("%lf %lf", &startBalance, &interestRate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("+------+---------------+---------------+---------------+\n");
    printf("| Year | Start Balance | Interest Paid |  End Balance  |\n");
    printf("+------+---------------+---------------+---------------+\n");

    for (int year = 1; year <= years; year++) {
        interestPaid = startBalance * (interestRate / 100.0);
        endBalance = startBalance + interestPaid;
        printf("|  %02d  | %13.2lf | %13.3lf | %13.2lf |\n", year, startBalance, interestPaid, endBalance);
        startBalance = endBalance;
    }
    
    printf("+------+---------------+---------------+---------------+\n");

    return 0;
}