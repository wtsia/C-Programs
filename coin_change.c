/* Program to calculate coin change */
#include <stdio.h>

int main(void)
{
	int cents;
	int quarters = 25;
	int dimes = 10;
	int nickels = 5;
	int pennies = 1;

	/* Input cents */
	printf("What is the amount of cents?\n");
	scanf("%d", &cents);

	/* Calculate change */
	quarters = cents / quarters;
	dimes = (cents - 25 * quarters) / dimes;
	nickels = (cents - 25 * quarters - 10 * dimes) / nickels;
	pennies = (cents - 25 * quarters - 10 * dimes - 5 * nickels) / pennies;

	/* Output change */
	printf("Number of quarters: %d\n", quarters);
	printf("Number of dimes: %d\n", dimes);
	printf("Number of nickels: %d\n", nickels);
	printf("Number of pennies: %d\n", pennies);
	return 0;
}