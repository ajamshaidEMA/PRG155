#include <stdio.h>

/*
Program: PRG155 Lab 03 A
Student: Arham Jamshaid
Date:    January 31 2024
*/

int main()  {
    int intValue = 654321;
    double doubleValue = 123.456;

    printf("1234567890123456789012345678901234567890\n");
    printf("Not Aligned:%d!\n", intValue);
    /* 
    %30s% (30 character string)
    */
    printf("%30s%9d!\n", "Everything right-aligned: ",intValue);
    printf("%-30s%-9.4lf!\n\n", "Everything left-aligned: ", intValue);

    printf("Not aligned or formatted: %lf!\n", doubleValue);
    printf("%-30s%-9.4lf!\n", "Left-aligned and formatted: ", doubleValue);
    printf("%30s%9.2lf!\n", "Right-aligned and formatted: ", doubleValue);

    return 0; 
}