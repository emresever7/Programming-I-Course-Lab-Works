#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define SIZE 5
/*int fact(int n);
int comb(int n, int k);*/

/*void read_arr(char arr[],int size) {
	int i;
	for (i = 0; i < size; i++)
		scanf_s(" %c", &arr[i]);
}
void reverse_arr(char arr[], int size) {
	char temp;
	int i;
	for (i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
		
	}
}
void display_arr(char arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%c", arr[i]);
	printf("\n");

}*/

/*float compute_GPA(char grades[], int n);*/

/*double inner_product(double a[], double b[], int n);*/

bool isPalindrome(int arr[], int length);
void read_arr(int arr[], int length);
int main() {
	/*int num1, num2;
	printf("Enter two integers: ");
	scanf_s("%d%d", &num1, &num2);
	printf("Comb(%d,%d) = %d\n", num1, num2, comb(num1,num2));*/
	
	/*char grade[SIZE];
	int i;
	float avg;
	printf("Enter %d letter grades> ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s(" %c", &grade[i]);
	printf("Average of grades {");
	for (i = 0; i < SIZE; i++)
		printf("%c", touppe(grade[i]));
	printf("} > ");
	avg = compute_GPA(grade, SIZE);
	printf("%.2f\n\n", avg);*/

	/*double arr1[] = {3.2,4.1,6.2,11.7,5.7};
	double arr2[] = {2.1,1.0,4.9,1.6,4.3};
	printf("\nInner Product of arr1 and arr2> %.2f\n\n", inner_product(arr1, arr2, SIZE));*/

	int number[SIZE];
	printf("Enter numbers for palindrome test> ");
	read_arr(number, SIZE);

	if (isPalindrome(number, SIZE))
		printf("Palindrome...\n");
	else
		printf("NOT Palindrome...\n");

	return 0;
}

/*int fact(int n)
{
	int i;
	int n_fact = 1;
	for (i = 1; i <= n; i++)
		n_fact *= i;

	return n_fact;
}

int comb(int n, int k)
{
	return fact(n)/(fact(k)*fact(n-k));
}*/
	
	/*char my_array[SIZE];
	read_arr(my_array, SIZE);
	reverse_arr(my_array, SIZE);
	display_arr(my_array, SIZE);*/


/*float compute_GPA(char grades[], int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++) {
		switch (toupper(grades[i]))
		{
		case 'A': total += 4; break;
		case 'B': total += 3; break;
		case 'C': total += 2; break;
		case 'D': total += 1; break;
		}
	}
	return (float)total / n;
}

double inner_product(double a[], double b[], int n)
{
	double total = 0.0;
	int i;
	for (i = 0; i < n; i++)
		total =
		return total;
}*/


bool isPalindrome(int arr[], int length)
{
	bool result = true;
	int i;
	for (i = 0; i < length; i++)
		if (arr[i] != arr[length - i - 1])
			return false;

	return result;
}

void read_arr(int arr[], int length)
{
	int i;
	for (i = 0; i < length; i++)
		scanf_s("%d", &arr[i]);
}