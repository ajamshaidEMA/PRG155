#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    travel.c
    Student:    Arham Jamshaid
    Date:       January 24 2024
*/

int main() {
    int travelTime;
    float distanceTravelled, averageSpeed;

    printf("Distance Travelled in Kilometers?: ");
    fflush(stdout);
    scanf("%f", &distanceTravelled);

    printf("Total travel time in minutes?: ");
    fflush(stdout);
    scanf("%d", &travelTime);

    averageSpeed = distanceTravelled /(travelTime / 60.0);
    
    printf("The average speed is: %f \n", (double) averageSpeed);

    return 0; 
        }