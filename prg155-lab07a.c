#include <stdio.h>

/*
        Program: PRG155_LAB07.c
        Name: Arham Jamshaid
        Date: March 13 2024
*/

int processChoice = 0;

void showMenu();

int main () 
{
    do { 
        showMenu();
    } while (processChoice !=0);   
    return 0;
}

void showMenu() {
        printf("Menu:\n");
        printf("1. Draw Rectangle \n");
        printf("2. Draw right triangle \n");
        printf("3. Draw isosceles triangle \n");
        printf("0. Exit program \n");

        printf("\nMake a choice (1,2,3 or 0): \n ");
        fflush(stdout);
        scanf("%d", &processChoice);
    
        switch (processChoice) 
        {
            case 1:
                    printf("Drawing a rectangle... \n\n");
                    break;
            case 2:
                    printf("Drawing a right triangle... \n\n");
                    break;
            case 3:
                    printf("Drawing isosceles triangle... \n\n");
                    break;
            case 0: 
                    break;
            default:
                    printf("*** Invalid Choice! ***.\n\n");
        }
}