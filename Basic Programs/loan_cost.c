#include <math.h>
#include <stdio.h>

int main(void)
{
	double loan, term, negterm, rate, total;

	printf("Loan amount (in $)?\n");
	scanf("%lf", &loan);

	printf("Duration of the loan (in yrs)?\n");
	scanf("%lf", &term);

	printf("Yearly interest (in %%)?\n");
	scanf("%lf", &rate);

	rate = (rate / 1200);
	term = (12 * term);
	negterm = (0 - term);
	total = ((rate * loan * term) / (1 - pow(1 + rate, negterm)));

	printf("Total cost of loan: $%.2f\n", total);
	return 0;
}