#include<stdio.h>
#include<stdbool.h>

int main() {
	/*int i, j, k;
	for (i = 0; i <= 10;i++) { // outer loop
		if(i <= 5) {
			for (k = 0; k <= i; k++) { // inner loop
				printf("%d ", k);
			}
		}
		else if (i > 5) {
			for (j = 0; j <= (10 - i); j++) {
				printf("%d ", j);
			}
		}
		printf("\n");
	}*/

	/*int limit, factor, num, sum;
	printf("\nEnter a limit for Perfect Numbers \n");
	scanf_s("%d", &limit);
	for (num = 1; num < limit; num++) {
		sum = 0;
		for (factor = 1; factor < num; factor++) {
			if (num % factor == 0) {
				sum = sum + factor;
			}
		}
		if (sum == num) {
			printf("\n %d is a perfect number", num);
		}
	}*/

	/*int number, count = 0, max, min, sum = 0;
	float avg;
	printf("Enter series of integers terminated by a 0.\n");
	scanf_s("%d", &number);
	max = min = number;
	while (number!=0) {
		if (number > max)
			max = number;
		else if (number < min)
			min = number;

		count++;
		sum = sum + number;

		scanf_s("%d", &number);
	}
	avg = (float)sum / count;
	printf("\tYou have entered %d values.\n", count);
	printf("\tThe average is %.1f \n", avg);
	printf("\tThe maximum value is %d\n", max);
	printf("\tThe minimum value is %d\n", min);*/

	/*int month, day, year, earliest_month, earliest_day, earliest_year;
	bool earlier_date;
	printf("Enter a date (mm/dd/yy): ");
	scanf_s("%d/%d/%d", &earliest_month, &earliest_day, &earliest_year);
	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf_s("%d/%d/%d", &month, &day, &year);

		if (month == 0 && day == 0 && year == 0)
			break;

		if (year != earliest_year)
			earlier_date = (year < earliest_year);
		else if (month != earliest_month)
			earlier_date = (month < earliest_month);
		else
			earlier_date = (day < earliest_day);
		if (earlier_date) {
			earliest_month = month;
			earliest_day = day;
			earliest_year = year;
		}
	}
	printf("%d/%d/%.2d is the earliest date\n", earliest_month, earliest_day, earliest_year);*/

	int n, i, fact = 1;
	float e = 1.0f;
	printf("Enter value for n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		fact *= i;
		e = e + 1.0f / fact;
	}
	printf("Approximation of e: %g\n", e);

	return 0;
}