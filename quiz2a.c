#include <stdio.h>

double f1(){
    double input;

    printf("Enter Value:");
    fflush(stdout);
    (void)scanf("%lf",&input);

    return input;
}

int main(){
    double data;

    do{
        data = f1();
        printf("data: %.2lf\n", data * 3);
        data--;

    } while (data >= 0);
    return 0;
}
