#include <stdio.h>

int main(void) 
{
	char grade;
	int min, worth1;
	double current_sc, required_sc, calc1, worth2, worth3;
 
	scanf("%c %d %lf %d", &grade, &min, &current_sc, &worth1);
 
	printf("Minimum average of %d required to get %c\n", min, grade);
	printf("Your current average is %.2f and final is worth %d%%\n", current_sc, worth1);
 
	/*Calculate final grade with intermediary calculation calc1, worth2, and worth3*/
	worth2 = (double)worth1 / 100;
	worth3 = 1 - worth2;
	calc1 = min - current_sc * worth3;
	required_sc = calc1 / worth2;
	
	printf("You need a score of %.2f on the final to get %c\n", required_sc, grade);
  
  return 0;
}