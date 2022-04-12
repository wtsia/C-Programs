#include <stdio.h>
#define M_PI 3.14159265358979323846

int main(void) 
{
	int quantity;
	double radius, height, cost_sqin, cost_total, sa_top, sa_side, total_sa;

	/*Scan for inputs*/
	scanf("%lf %lf %lf %d", &radius, &height, &cost_sqin, &quantity);

	/*List out radius, height, cost per square cm, quantity*/
	printf("Radius of bases is %.2lf, height of cylinder is %.2lf\n", radius, height);
	printf("Cost per square centimeter is %.4lf and quantity is %d\n", cost_sqin, quantity);

	/*Calculate top and side surface area and sum them. Then get total cost*/
	sa_top = M_PI * radius * radius;
	sa_side = 2 * height * M_PI * radius;
	total_sa = 2 * sa_top + sa_side;
	cost_total = total_sa * cost_sqin * quantity;

	printf("Each can has a surface of %.3lf cm2 and the run will cost $%.2lf\n", total_sa, cost_total);

	return 0;
}