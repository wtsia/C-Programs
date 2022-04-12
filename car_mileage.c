#include <stdio.h>

int main(void)
{
	double odoStart, odoEnd, dist, mileage;

	/* Input starting odometer and ending odometer */
	printf("Starting odometer reading?\n");
	scanf("%lf", &odoStart);
	printf("Ending odometer reading?\n");
	scanf("%lf", &odoEnd); 

	/* Calculate the distance traveled and mileage */
	dist = odoEnd - odoStart;
	mileage = dist / 19.5;

	/* Output the distance traveled and mileage */
	printf("You traveled %.1lf miles.\n", dist);
	printf("With a tank of 19.50 gallons, your gas mileage is %.2lf MPG.\n", mileage);
	return 0;
}