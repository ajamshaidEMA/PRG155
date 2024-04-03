#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    lab_2_b.c
    Student:    Arham Jamshaid
    Date:       January 24 2024
*/

int main() {

    float pounds, kilograms; 

    printf("Weight in Pounds: ");
    fflush(stdout);
    scanf("%f", &pounds);

    kilograms = pounds * 2.020462;

    printf("Weight in Kilograms: %lf\n", (double) kilograms);

    return 0; 
    }
    