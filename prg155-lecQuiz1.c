
#include <stdio.h>

int getInput();

int main() {
    switch (getInput()) {
        case 0:
        printf("A\n");
        break;

        case 1:
        printf("B\n");
        break;

        default:
        printf("?\n");    
    }
    return 0;
}

int getInput(){
    double value1, value2;

    printf("Provide two numerical values:");
    fflush(stdout);
    (void) scanf("%lf%lf", &value1, &value2);

    return (int) value1 % (int) value2;
}