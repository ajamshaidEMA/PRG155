#include  <stdio.h>
#include <math.h>

/*
    Program:    prg155-lab4b.c
    Student:    Arham Jamshaid
    Date:       February 8 2024
*/


int main ( ) {
    double radius, circleArea,circumference,sphereVolume;
    const double pi = 3.14159;

    printf("Radius? ");
    fflush(stdout);
    scanf("%lf", &radius);

    circleArea = pi * pow(radius, 2);
    circumference = 2 * pi * radius;
    sphereVolume = (4.0 / 3.0) * pi * pow(radius, 3);

    printf("\nCircle Area: %0.2lf\n", circleArea);
    printf("Circumference: %0.2lf\n", circumference);
    printf("Sphere Volume: %0.2lf\n", sphereVolume);

    return 0;
    
}