//.............
// Written By...: Anderson Mota
// Purpose...: Income and expense calculator
// Date written...: 09/12/2016
//.............

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define PAUSE system("pause") 
#define CLS system ("cls")

main() {
	int income = 0, expenses = 0;
	float totalAmount = 0.0;

	printf("What is your income?........: ");
	scanf("%i", &income);

	printf("What are your total expenses?....: ");
	scanf("%i", &expenses);

	totalAmount = income - expenses;

	printf("\n\tWow, you made %.2f dollars\n", income);
	printf("\tHey man, Here are your expenses %.2f dollars\n", expenses);
	printf("\tHere's your total %.2f\n\n\n\n", totalAmount);
	PAUSE;
}