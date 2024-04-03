#include <stdio.h>

/*
        Program: PRG155-LAB08.c
        Name: Arham Jamshaid
        Date: March 22 2024
*/
void showMenu();
int getInput(){
        int input;
        scanf("%d", &input);
        return input;
}

void printRow(int width){
        for(int i = 0; i < width; i++){
                printf("*");
        }
        printf("\n");
}

void drawRectangle(int width, int height){
        for(int i = 0; i < height; i++){
                printRow(width);
        }
}

void drawRightTriangle(int height){
        for(int i = 1; i<= height; i++){
                int width = 2 * i - 1;
                printRow(width);
        }
}

void drawIsoscelesTriangle(int height){
        int maxWidth = 2 * height - 1;
        for(int i = 1; i <= height; i++){
                int numSpaces = (maxWidth - (2 * i - 1)) / 2;
                printf("%*s", numSpaces, "");
                printRow(2 * i - 1);
        }
}

int main () {
        int processChoice; 
        showMenu();
        return 0;
}
void showMenu() {
        int processChoice, width, height;
        do{
                printf("Menu:\n");
                printf("1. Draw Rectangle \n");
                printf("2. Draw right triangle \n");
                printf("3. Draw isosceles triangle \n");
                printf("0. Exit program \n");
                printf("\nMake a choice (1,2,3 or 0): \n ");

                processChoice = getInput();

        switch (processChoice) {       
                        case 1:
                        printf("Enter rectangle width and height: ");
                        scanf("%d %d", &width, &height);
                        drawRectangle(width, height);
                        break;
                 case 2:
                        printf("Enter right triangle height: ");
                        height = getInput();
                        drawRightTriangle(height);
                        break;
                case 3:
                        printf("Enter isosceles triangle height: ");
                        height = getInput();
                        drawIsoscelesTriangle(height);
                        break;
                case 0: 
                        printf("Exiting Program");
                        break;
                default:
                        printf("*** Invalid Choice! ***.\n\n");
                }
        } while (processChoice !=0);
}