#include <stdio.h>

/*
    Project:    PRG155_Lab05_b.c
    Name:       Arham Jamshaid
    Date:       February 12 2024   
*/


int main () {
    double salary, income_tax, total_pay;

    printf("Please enter salary:  ");
    fflush(stdout);
    scanf("%lf", &salary);

    if (salary > 2000)
        income_tax = 200 + (salary - 2000) * 0.25; 

    else if (salary > 1000)
        income_tax = 50 + (salary - 1000) * 0.15;

    else if (salary > 500)
        income_tax = (salary - 500) * 0.10;

    else 
        income_tax = 0; 

    total_pay = salary - income_tax;

    printf("%12s$%11.2f\n","Income Tax: ", income_tax);
    printf("%12s$%11.2f\n","Net Pay: ", total_pay);
    
    return 0;

}