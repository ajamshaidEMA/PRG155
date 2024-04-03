#include <stdio.h>

/*
    Project:    PRG155_Lab05_a.c
    Name:       Arham Jamshaid
    Date:       February 12 2024   
*/

int main () {
    double sales_total, commission;
    const double base_rate = 0.01;
    const double sales_limit = 5000;
    const double additional_rate = 0.02;
    const double base_commission = 50;


    printf("Please enter sales total: ");
    fflush(stdout);
    scanf("%lf", &sales_total);

    if (sales_total > sales_limit)
        commission = base_commission + additional_rate * (sales_total - sales_limit);
    
    else 
        commission = base_rate * sales_total;   

    printf("Commission: $%.2f\n", commission);
    return 0;
}