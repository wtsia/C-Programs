#include <stdio.h>

/*Program to convert kilograms to lbs*/
int main(void) 
{
	char kgs, lbs, unit, enter;
	double weight, kilos, pounds;

	printf("How many lbs? (Enter 0 if kilograms)\n");
	scanf("%lf", &weight);

	if (weight > 0)	{
		kilos = weight / 2.204; 
		printf("Weight in kilograms is %.2lf\n", kilos);
	}

	if (weight == 0)	{
		printf("Ok fine. What is it in kilograms?\n");
		scanf("%lf", &weight);
		
		pounds = weight * 2.204;

		printf("Weight in American is %.2lf\n", pounds);
	}
	
	if (weight < 0) {
		printf("Fuck off mate, give me something I can work with.\n");	
	}

	printf("Type 'e' to exit.\n");
	scanf(" %c", &enter);
	
	return 0;
}