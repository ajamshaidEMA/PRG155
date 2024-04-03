#include <stdio.h>

/*
    Project:    PRG155_Lab05_c.c
    Name:       Arham Jamshaid
    Date:       February 12 2024   
*/


int main () {
    double hours_worked, sales_total, hourly_wage;

    printf("Please enter hours worked this week: ");
    fflush(stdout);
    scanf("%lf", &hours_worked);
    printf("Please enter hourly wage: ");
    fflush(stdout);
    scanf("%lf", &hourly_wage);
    printf("Please enter sales total: ");
    fflush(stdout);
    scanf("%lf", &sales_total);

    double base_pay, commission, gross_pay, income_tax, net_pay;
    const double base_rate = 0.01;
    const double sales_limit = 5000;
    const double additional_rate = 0.02;
    const double base_commission = 50;

    base_pay = hourly_wage * hours_worked;

    if (sales_total > sales_limit)
        commission = base_commission + additional_rate * (sales_total - sales_limit);

    else 
        commission = base_rate * sales_total;

    gross_pay = base_pay + commission;

    if (gross_pay > 2000)
        income_tax = 200 + (gross_pay - 2000) * 0.25; 

    else if (gross_pay > 1000)
        income_tax = 50 + (gross_pay - 1000) * 0.15;

    else if (gross_pay > 500)
        income_tax = (gross_pay - 500) * 0.10;
    else 
        income_tax = 0; 

    net_pay = gross_pay - income_tax;

    printf("\n%13s$%10.2f\n","Base pay: ", base_pay);
    printf("%13s$%10.2f\n","Commission: ", commission);
    printf("%13s$%10.2f\n","Gross pay: ", gross_pay);
    printf("%13s$%10.2f\n","Income tax: ", income_tax);
    printf("%13s$%10.2f\n","Net pay: ", net_pay);
    
    return 0;

}