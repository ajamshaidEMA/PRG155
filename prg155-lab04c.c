#include  <stdio.h>
#include <math.h>

/*
    Program:    prg155-lab4c.c
    Student:    Arham Jamshaid
    Date:       February 8 2024
*/


int main ( ) {
    double radius, circleArea,circumference,sphereVolume, sphereSurface;
    const double pi = 3.14159;

    printf("Circle Area? ");
    fflush(stdout);
    scanf("%lf", &circleArea);

    radius = sqrt(circleArea / pi);

    circumference = 2 * pi * radius;
    sphereVolume = (4.0 / 3.0) * pi * pow(radius, 3);
    sphereSurface = 4 * pi * pow(radius, 2);

    printf("------------------------------\n ");
    printf("%15s%14.2lf\n","Radius: ", radius);
    printf("%16s%14.2lf\n","Circumference: ", circumference);
    printf("%16s%14.2lf\n","Sphere Volume: ", sphereVolume);
    printf("%15s%14.2lf\n", "Sphere Surface: ", sphereSurface);

    return 0;
    
}