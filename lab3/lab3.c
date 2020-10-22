#include<stdio.h>
int main() {
	/*int mm, dd, yy;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf_s("%d/%d/%d", &mm, &dd, &yy);
	printf("You entered the date %d%.2d%.2d\n\n", yy, mm, dd); */
	
	/*int item_number, month, day, year;
	float unit_price;
	printf("Enter item number:");
	scanf_s("%d", &item_number);
	printf("Enter unit price:");
	scanf_s("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf_s("%d/%d/%d", &month, &day, &year);

	printf("\nItem\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%d/%d/%d\n", item_number, unit_price, month, day, year);*/

	/*int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions separated by a plus sign:");
	scanf_s("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);*/
	
	/*int amount, twenties, tens, fives, ones, reduced_amount;
	printf("Enter a dollar amount:");
	scanf_s("%d", &amount);
	twenties = amount / 20;
	reduced_amount = amount - (20 * twenties);
	tens = reduced_amount / 10;
	reduced_amount = reduced_amount - (10 * tens);
	fives = reduced_amount / 5;
	ones = reduced_amount - (5 * fives);
	printf("\n");
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);*/

	int area_code, prefix, number;
	printf("Enter phone number [(xxx) xxx-xxxxx]:");
	scanf_s("(%d)%d-%d", &area_code, &prefix, &number);
	printf("You entered %d.%d.%d\n", area_code, prefix, number);

	return 0;
}

