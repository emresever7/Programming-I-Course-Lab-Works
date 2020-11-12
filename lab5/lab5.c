#include<stdio.h>
int main() {
	/*int n;
	printf("Enter a number:");
	scanf_s("%d", &n);
	if (n < 10)
		printf("The number %d has 1 digit\n", n);
	else if (n < 100)
		printf("The number %d has 2 digits\n", n);
	else if (n < 1000)
		printf("The number %d has 3 digits\n", n);
	else
		printf("The number %d has 4 digits\n", n);*/

	/*int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, check_digit;
	printf("Enter the first 11 digits of a UPC: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	printf("Enter the  last(single) digit: ");
	scanf_s("%1d", &check_digit);
	if (check_digit == 9 - ((total - 1) % 10))
		printf("VALID\n");
	else
		printf("NOT VALID\n");*/

	/*int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &hours, &minutes);
	printf("equivalent 12-hour time: ");
	if (hours == 0)
		printf("12:%.2d AM\n", minutes);
	else if (hours < 12)
		printf("%d:%.2d AM\n", hours, minutes);
	else if (hours == 12)
		printf("%d:%.2d PM\n", hours, minutes);
	else
		printf("%d:%.2d PM\n", hours - 12, minutes);*/

	/*int n1, n2, n3, n4,
		larger12, smaller12, //larger and smaller of n1 and n2 
		larger34, smaller34, 
		largest, smallest; //largest and smallest overall
	printf("Enter four integers: ");
	scanf_s("%d%d%d%d", &n1, &n2, &n3, &n4);
	if (n1 > n2) {
		larger12 = n1;
		smaller12 = n2;
	}
	else {
		larger12 = n2;
		smaller12 = n1;
	}
	if (n3 > n4) {
		larger34 = n3;
		smaller34 = n4;
	}
	else {
		larger34 = n4;
		smaller34 = n3;
	}
	if (larger12 > larger34)
		largest = larger12;
	else
		largest = larger34;
	if (smaller12 < smaller34)
		smallest = smaller12;
	else
		smallest = smaller34;
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);*/

	/*int month1, day1, year1, month2, day2, year2;
	bool first_earlier; //true(1) or false(0)
	printf("Enter first date (mm/dd/yy): ");
	scanf_s("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy): ");
	scanf_s("%d/%d/%d", &month2, &day2, &year2);

	if (year1 != year2)
		first_earlier = (year1 < year2);
	else if (month1 != month2)
		first_earlier = (monyth1 < month2);
	else
		first_earlier = (day1 < day2);
	if (first_earlier)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
	else
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);*/

	/*int grade;
	printf("Enter numerical grade: ");
	scanf_s("%d", &grade);
	if (grade < 0 || grade >100) {
		printf("Illegal grade\n");
		return 0;
	}
	switch (grade / 10) //84->8
	{
	case 10:
	case 9: printf("Letter grade: A\n");
		break;
	case 8: printf("Letter grade: B\n");
		break;
	case 7: printf("Letter grade: C\n");
		break;
	case 6: printf("Letter grade: D\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: printf("Letter grade: F\n");
		break;

	}//end switch*/

	return 0;
}