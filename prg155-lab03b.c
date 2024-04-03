#include <stdio.h>

/*
Program: PRG155 Lab 03 B
Student: Arham Jamshaid
Date:    February  2024
*/

int main()  {
    double price, qty; 

    printf("How many widgets are you buying?: ");
    fflush (stdout);
    scanf("%lf", &qty);

    printf("What is the price of a widget?: ");
    fflush(stdout);
    scanf("%lf", &price);

    printf("----------------------------------------\n");
    printf("YOUR ORDER SUMMARY\n");
    printf("----------------------------------------\n");

    double subtotal, totalamount, totaltax; 
    const double    tax_rate = 0.13;
    
    subtotal = qty * price;
    totaltax = subtotal * tax_rate;
    totalamount = subtotal + totaltax;
    

    printf("%-6.0f Widgets @: %8.2lf %14.2lf\n", qty, price, subtotal);
    printf("%25s %14.2lf\n", "13% HST", totaltax);
    printf("%18s%22s\n","","----------------------");
    printf("%25s%14.2lf\n", "TOTAL", totalamount);
    printf("----------------------------------------\n");

    return 0; 
    }
