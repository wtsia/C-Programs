#include <math.h>
#include <stdio.h>

int main()
{
    int loan, year;
    double rate, monthRate, total, month1, month2;

    printf("Loan amount (in $)?\n");
	scanf("%d", &loan);

	printf("Duration of the loan (in yrs)?\n");
	scanf("%d", &year);

	printf("Yearly interest (in %%)?\n");
	scanf("%.2lf", &rate);

    monthRate = rate / 1200;
	month1 = 12 * year;
	month2 = 0 - month1;

	printf("Total cost of loan: %.2f\n", total);
    return 0;
}

double total(double monthRate, double month1, double month2, int loan)
{
	total = (monthRate * loan * month1) / (1 - pow(1 + monthRate, month2));
}