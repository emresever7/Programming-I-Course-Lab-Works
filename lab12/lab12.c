#include<stdio.h>
#include<stdbool.h>
#define SENTINEL -1
#define N 5
//int fibonacci(int n);
//int fibonacciLoop(int n);
/*int gcd1(int m, int n) {
	int r;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int gcd2(int m, int n) { // recursive gcd function
	return n == 0 ? m : gcd2(n, m % n);

}*/
//int add_numbers(int, int, int);
//int value1, value2, value3;
/*void generate_histogram(const int arr[], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < arr[i];j++) {
			printf("*");

		}
		printf("\n");
	}

}*/

//External variables
int totalAge = 0;
int totalCount = 0;
// definition of the add-age function
void add_age(int new_age, int new_count) {
	totalAge += new_age * new_count;
	totalCount += new_count;
}
//definiton of the avg_age function
float avg_age() {
	return (float)totalAge / totalCount;
}
int main() {
	printf("\n");
	/*int i;
	for (i = 0; i < 10; i++) // calling recursive fibonacci
		printf("%d\t", fibonacci(i));

	printf("\n");

	for (i = 0; i < 10; i++) // calling iterative fibonacci
		printf("%d\t", fibonacciLoop(i));
	printf("\n");*/
	/*int a = 12;
	int b = 4;
	int result = gcd1(a, b);
	printf("The GCD of %d and %d is %d\n", a, b, result);
	printf("The GCD of %d and %d is %d\n", a, b, gcd1(a, b));
	printf("The GCD of %d and %d is %d\n", 25, 60, gcd1(25, 60));*/
	/*int num1, num2;
	printf("Enter two integer for GCD: \n");
	scanf_s("%d%d", &num1, &num2);
	//int result2 = gcd2(num1, num2);
	printf("The GCD of %d and %d is %d\n", num1, num2, gcd2(num1, num2));*/
	/*int result, value1, value2, value3;
	value1 = 10;
	value2 = 20;
	value3 = 30;
	result = add_numbers(value1, value2, value3);
	printf("The sum of %d +%d +%d is %d\n", value1, value2, value3, result);*/
	/*int my_array[N] = { 1,2,3,4,5 };
	generate_histogram(my_array, N);*/
	int age, freq;
	printf("Enter age first and frequency second> \n");
	while (true) {
		scanf_s("%d%d", &age, &freq);
		if (age == SENTINEL)
			break;

		add_age(age, freq);// calling add_age function
	}
	printf("The average of age is %.2f\n", avg_age()); // calling of avg_age function
	return 0;
}

/*int fibonacci(int n) //recursive fibonacci
{
	if ((n == 0) || (n == 1))
		return n;
	else return fibonacci(n - 1) + fibonacci(n - 2);

}*/

/*int fibonacciLoop(int n) // iterative fibonacci
{
	int currentNumber = 1;
	int previousNumber = 0;
	int previouspreviousNumber;
	if (n == 1 || n == 0)
		return n;
	for (int i = 1; i < n;i++) {
		previouspreviousNumber = previousNumber;
		currentNumber = currentNumber;
		currentNumber = previousNumber + previouspreviousNumber;
	

	}
	return currentNumber;
}*/

/*int add_numbers(int value1, int value2, int value3)
{
	int result;
	result = value1 + value2 + value3;
	return 0;
}*/
