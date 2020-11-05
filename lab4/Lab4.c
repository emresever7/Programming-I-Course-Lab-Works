#include<stdio.h>
int main() {
	/*int n;
	printf("Enter a two-digit number:");
	scanf_s("%d", &n);
	printf("The reversal is: %d%d\n", n % 10, n / 10);*/

	/*int n;
	printf("Enter a three digit number:");
	scanf_s("%d", &n);
	printf("The reversal is: %d%d%d\n", n % 10, (n / 10) % 10, n / 100);*/

	/*int d1, d2, d3;
	printf("Enter a three digit number:");
	scanf_s("%1d%1d%1d", &d1, &d2, &d3);
	printf("The revesal is: %d%d%d\n", d3, d2, d1);*/

	/*int n, d1, d2, d3, d4, d5;
	printf("Enter a number between 0 and 32767: ");
	scanf_s("%d", &n);
	d5 = n % 8;
	n = n / 8;
	d4 = n % 8;
	n = n / 8;
	d3 = n % 8;
	n = n / 8; // n/=8;
	d2 = n % 8;
	d1 = n / 8;
	printf("In octal, your number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);*/

	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
	printf("Enter the first eleven digits of a UPC: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	first_sum = d + i2 + i4 + j1 + j3 + j5; //this number is used for sum of odd digits
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
