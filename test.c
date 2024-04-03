#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/*
    ASSIGNMENT: PRG155-PROJECT.C
    NAME:       ARHAM JAMSHAID 
    DATE:       MARCH 31 2024
*/

// Function prototypes
double getInput();
double resistorFormat(char *input);
double calculateParallelResistance();
double calculateSeriesResistance();

int main() {
  getInput();
  return 0;
}

double getInput() {
        char choice;
    do {
        printf("Enter '1' to calculate parallel resistance, '2' to calculate series resistance or '0' to exit: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case '1':
                calculateParallelResistance();
                break;
            case '2':
                calculateSeriesResistance();
                break;
            case '0':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter '1' or '0'.\n");
        }
    } while (choice != '0');

    return 0.0;
}
   

double resistorFormat(char *input) {
    double value;
    int len = strlen(input);

    // Check if the last character is 'k' or 'K' for kilo-ohms
    if (input[len - 1] == 'k' || input[len - 1] == 'K') {
        // Convert characters before 'k' to double and multiply by 1000
        input[len - 1] = '\0'; // Remove 'k'
        value = atof(input) * 1000.0;
    }
    // Check if the last character is 'm' or 'M' for mega-ohms
    else if (input[len - 1] == 'm' || input[len - 1] == 'M') {
        // Convert characters before 'm' to double and multiply by 1000000
        input[len - 1] = '\0'; // Remove 'm'
        value = atof(input) * 1000000.0;
    } else {
        value = atof(input);
    }

    return value;
}

double calculateParallelResistance() {
    double resistors[10];
    int numResistors = 0;
    double totalResistance = 0.0;

    while (1) {
      char resistorInput[20];
      printf("Enter resistor value (or enter 0 to exit) %c: ", 234);
      if (scanf("%s", resistorInput) != 1) {
        printf("Error reading input.\n");
        return 0.0;
      }  
        double resistorValue = resistorFormat(resistorInput);

        if (resistorValue == 0.0) {
            break;
        }

        resistors[numResistors++] = resistorValue;
    }

    if (numResistors == 0) {
        printf("No resistors entered. Exiting...\n");
        return 0.0;
    }

    for (int i = 0; i < numResistors; i++) {
        totalResistance += 1.0 / resistors[i];
    }
    totalResistance = 1.0 / totalResistance;

    printf("The total parallel resistance is: %c%.2f\n", 234, totalResistance);
    return totalResistance;
}

double calculateSeriesResistance(){
    double resistors[10];
    int numResistors = 0;
    double totalResistance = 0.0;

    while (1) {
      char resistorInput[20];
      printf("Enter resistor value (or enter 0 to exit) %c: ", 234);
      if (scanf("%s", resistorInput) != 1) {
        printf("Error reading input.\n");
        return 0.0;
      }    
      double resistorValue = resistorFormat(resistorInput);

      if (resistorValue == 0.0) {
        break;
      }

      resistors[numResistors++] = resistorValue;
    }

    if (numResistors == 0) {
        printf("No resistors entered. Exiting...\n");
        return 0.0;
    }

    for (int i = 0; i < numResistors; i++) {
        totalResistance +=  resistors[i];
    }
    
    printf("The total series resistance is: %c%.2f\n", 234, totalResistance);
    return totalResistance;
}
