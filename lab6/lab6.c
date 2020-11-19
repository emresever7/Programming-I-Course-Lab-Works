#include<stdio.h>
int main() {
	/*int number, sum = 0, product = 1;
	printf("Enter a number: ");
	scanf_s("%d", &number);
	while (number > 0)
		//{
			sum += number % 10;
			product *= number % 10;
			number /= 10;
		}
		for (; number > 0; number /= 10)
		{
			sum += number % 10;
			product *= number % 10;
		}

	printf("\The sum is: %d\n", sum);
	printf("\The producy is: %d\n", product);*/
	
	/*int n, product, i;
	printf("Enter a value for factorial calculation: ");
	scanf_s("%d", &n);
	product = 1;
	for (i = n; i > 1; i--) // n*(n-1)*(n-2)...1
	{
		product = product * i;
	}
	printf("The factorial of %d is %d!\n\n", n, product);*/

	/*float x, max = 0.0f;
	for (;;) { // infinite loop
		printf("Enter a number: ");
		scanf_s("%f", &x);
		if (x <= 0.0f)
			break;
		if (x > max)
			max = x;
	}
	printf("\The largest number entered was %g\n", max);*/
	
	/*int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);
	printf("The reversal is: ");
	do
	{
		printf("%d", n % 10);
		n /= 10;
	} while (n > 0);
	printf("\n");*/

	/*int n, i;
	printf("Enter a number:");
	scanf_s("%d", &n);
	for (i = 1; i * i < n; i+=2) //1-3-5
	{
		printf("%d\n", i * i);
	}*/
	
	int m, n, remainder;
	printf("Enter two integers: ");
	scanf_s("%d%d", &m, &n);
	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}
	printf("Greatest common divisor: %d\n", m);

	return 0;
}