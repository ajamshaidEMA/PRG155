#include <stdio.h>

/*	
	Program: 	prg155-lab09.c
	Student: 	Arham Jamshaid
	Date: 		March 27 2024
*/

// Generic function that continusly prompts the user
// until they enter a numerical value >= minimum worked, hourly wage and sales total
//	Calculates and returns base pay as hours worked * hourly wage
// 	Calculates and returns commission based on sales total
// 	Calculates and returns gross pay based on base pay and commission
// 	Displays base pay, commission, gross pay, income tax and net pay

double getInput(const char *prompt, double minimum);
double calculateBasePay(double hoursWorked, double hourlyWage);
double calculateCommission(double salesTotal);
double calculateGrossPay(double basePay, double commission);
double calculateIncomeTax(double grossPay);
void displayOutput(double basePay, double commission, double grossPay, double incomeTax);

double getInput(const char *prompt, double minimum) { 													// No need to change this function
	double userInput;
	do {
		printf("%s: ", prompt);
		fflush(stdout);

		if (scanf("%lf", &userInput) != 1 || userInput < minimum) {
			printf("Invalid input! Please try again.\n\n");
			while (getchar() != '\n');
		}
	} while (userInput < minimum);
	
	return userInput;
}
double calculateBasePay(double hoursWorked, double hourlyWage){ 									  	//	Calculates and returns base pay as hours worked * hourly wage
	return hoursWorked * hourlyWage;
}
double calculateCommission(double salesTotal){ 														 	// 	Calculates and returns commission based on sales total
    const double baseRate = 0.01;
    const double salesLimit = 5000;
    const double additionalRate = 0.02;
    const double baseCommission = 50;

    if (salesTotal > salesLimit)
        return baseCommission + additionalRate * (salesTotal - salesLimit);
    else
        return baseRate * salesTotal;
}
double calculateGrossPay(double basePay, double commission){										 // 	Calculates and returns gross pay based on base pay and commission
	return basePay + commission;
}

double calculateIncomeTax(double grossPay){
    if (grossPay > 2000)
        return 200 + (grossPay - 2000) * 0.25;
    else if (grossPay > 1000)
        return 50 + (grossPay - 1000) * 0.15;
    else if (grossPay > 500)
        return (grossPay - 500) * 0.10;
    else
        return 0;
}
void displayOutput(double basePay, double commission, double grossPay, double incomeTax){
	printf("\n%13s$%10.2f\n","Base pay: ", basePay);
	printf("%13s$%10.2f\n","Commission: ", commission); 												
    printf("%13s$%10.2f\n","Gross pay: ", grossPay);
    printf("%13s$%10.2f\n","Income tax: ", incomeTax);
	printf("%13s$%10.2f\n","Net pay: ", grossPay - incomeTax);
}
int main() {
	char choice;
	do{
		double hoursWorked, hourlyWage, salesTotal, basePay, commission, grossPay, incomeTax; 			// TODO: 	Declare seven double type variables for hours worked, hourly wage, sales total, base pay, commission, gross pay and income tax. Do not initialize them.

		hoursWorked = getInput("Please enter hours worked this week", 0.0);								// TODO: 	Use getInput function to interact with the user.
    	hourlyWage = getInput("Please enter hourly wage", 0.0);											//			User needs to provide hours worked, hourly wage and sales total.
    	salesTotal = getInput("Please enter sales total", 0.0);											//			Store user input in approprate variables.
	
		basePay = calculateBasePay(hoursWorked, hourlyWage);											// TODO:	Calculate base pay (using calculateBasePay function) and store it in a variable.
    	commission = calculateCommission(salesTotal);													// TODO: 	Calculate commission (using calculateCommission function) and store it in a variable.
   	 	grossPay = calculateGrossPay(basePay, commission);												// TODO: 	Calculate gross pay and store it in a variable. 
    	incomeTax = calculateIncomeTax(grossPay); 														// TODO:	Calculate income tax and store it in a variable

		displayOutput(basePay, commission, grossPay, incomeTax);										// TODO: 	Display output using displayOutput subroutine.
		printf("\nDo you want to calculate again? (Y/N): "); 											// TODO:	Ask user whether they want to calculate again or exit program.
        	fflush(stdout);
        	scanf(" %c", &choice); 
    } 	while(choice == 'Y' || choice == 'y');
	return 0;
}


// TODO: Implement all functions/subroutines defined at the top