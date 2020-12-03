#include<stdio.h>
#define SPECIAL_SLOPE 0.0
/*#define CBEGIN 10
#define CLIMIT -5
#define CSTEP 5*/
int main() {
	/*int celcius;
	double fahrenheit;
	printf("\tCelcius\tFahrenheit\n"); // the table heading
	for (celcius = CBEGIN; celcius >= CLIMIT; celcius -= CSTEP) {
		fahrenheit = 1.8 * celcius + 32;
		printf("\t%3d\t%7.2f\n", celcius, fahrenheit);
	}*/

	/*float epsilon, e = 0.0f, term = 1.0f;
	int i = 1;
	int fact = 1;
	printf("Enter a value for epsilon: ");
	scanf_s("%f", epsilon); 
	while (term>=epsilon) {
		e += term;
		fact *= i++;
		term = 1.0f / fact;
	}
	printf("Approximation of e: %g\n", e);*/

	/*int n, start_day, i;
	printf("Enter number of days in month: ");
	scanf_s("%d", &n);
	printf("Enter starting day of the week (1=Mon, 7=Sun): ");
	scanf_s("%d", &start_day);
	for (i = 1; i < start_day; i++) {
		printf("   ");
	}
	for (i = 1; i <= n; i++) {
		printf("%3d", i);
		if ((start_day + i - 1) % 7 == 0)
			printf("\n");
	}*/

	float slope, y2, y1, x2, x1;
	printf("Enter 4 numbers separated by spaces.");
	printf("\nThe last two numbers cannot be the ");
	printf("same, but\nthe program terminates if ");
	printf("the first two are.\n");
	printf("\nEnter four numbers> ");

	scanf_s("%f%f%f%f", &y2, &y1, &x2, &x1);
	slope = (y2 - y1) / (x2 - x1);
	/*for (slope = (y2 - y1) / (x2 - x1);
		slope != SPECIAL_SLOPE;
		slope = (y2 - y1) / (x2 - x1)) {
		printf("Slope is %5.2f.\n", slope);
		printf("\nEnter four more numbers> ");
		scanf_s("%f%f%f%f", &y2, &y1, &x2, &x1);
	}*/

	
	while (slope != SPECIAL_SLOPE) {
		slope = (y2 - y1) / (x2 - x1);
		printf("Slope is %5.2f.\n", slope);
		printf("\nEnter four more numbers> ");
		scanf_s("%f%f%f%f", &y2, &y1, &x2, &x1);
		
	}

	return 0;
}