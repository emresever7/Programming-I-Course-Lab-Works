#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	/*char first_initial, ch;
	printf("Enter a first and last name: ");
	scanf(" %c", &first_initial);
	while (getchar() != ' ')
		; // empty loop body

	while ((ch = getchar()) != '\n')
		if (ch != ' ')
			putchar(ch);

	printf(", %c.\n", first_initial);*/

	/*float  value, operand;
	char operator;

	printf("Enter an expression: ");
	scanf("%f", &value);

	while ((operator=getchar())!='\n') {
		if (operator==' ')
			continue;

		scanf("%f", &operand);

		switch (operator)
		{
		case '+': value += operand; break;
		case '-': value -= operand; break;
		case '*': value *= operand; break;
		case '/': value /= operand; break;
		}

	}
	printf("Value of expression: %g\n", value);*/

	/*int num1, denom1, num2, denom2, result_num, result_denom;
	char operator;

	printf("Enter two fractions seoarated by a +,-,* or / sign: ");
	scanf("%d/%d %c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

	switch (operator)
	{
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d", result_num, result_denom);
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The difference is %d/%d\n", result_num, result_denom);
		break;
	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		printf("The product is %d/%d\n", result_num, result_denom);
		break;
	case '/':
		result_num = num1 * denom2;
		result_denom = num2 * denom1;
		printf("The quotient is %d/%d\n", result_num, result_denom);
		break;
	default:
		printf("Unrecognized operator: %c\n", operator);
	}*/

	/*float average = 0.0;
	int num_letters = 0, num_words = 0;
	char ch;
	printf("Enter a sentence: ");
	while ((ch=getchar())!='\n') {
		if (ch != ' ') {
			num_letters++;
		}
		else {
			num_words++;
		}

	}
	num_words++;
	if (num_words > 0)
		average = (float) num_letters / num_words;
	printf("Average word length: %.1f\n", average);*/
	
	/*int i, n;
	short s_fact = 1;
	int i_fact = 1;
	long l_fact = 1;
	long long ll_fact = 1;
	float f_fact = 1;
	double d_fact = 1;
	long double ld_fact = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (i = 2, i <= n; i++) {
		s_fact *= i;
		i_fact *= i;
		l_fact *= i;
		ll_fact *= i; // C99
		f_fact *= i;
		d_fact *= i;

	}
	printf("Factorial of %d (short)		 : %hd\n", n, s_fact);
	printf("Factorial of %d (int)		 : %d\n", n, i_fact);
	printf("Factorial of %d (long)		 : %ld\n", n, l_fact);
	printf("Factorial of %d (long long)	 : %lld\n", n, ll_fact);
	printf("Factorial of %d (float)		 : %f\n", n, f_fact);
	printf("Factorial of %d (double)	 : %f\n", n, d_fact);
	printf("Factorial of %d (long double): %Lf\n", n, ld_fact);*/
	
printf("size of int: %d\n", (int) sizeof(int));
printf("size of short: %d\n", (int) sizeof(short));
printf("size of long: %d\n", (int) sizeof(long));
printf("size of float: %d\n", (int) sizeof(float));
printf("size of double: %d\n", (int) sizeof(double));
printf("size of long double: %d\n", (int) sizeof(long double));
printf("size of character: %d\n", (int) sizeof(char));
	return 0;

}