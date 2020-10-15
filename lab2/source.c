#include<stdio.h>
#define PI 3.14159f
int main() {
	//int n, n2, n3;
	//printf("Please enter the value of n:");
	//scanf_s("%d", &n);
	//n2 = n * n;
	//n3 = n * n2; //n*n*n
	//printf("n=%d, n squared =%d, n cubed =%d", n, n2, n3);
	
	//float volume, radius;
	//radius = 10.0f;
	//volume = (4.0f / 3.0f) * PI * radius * radius * radius;
	//printf("The volume of the sphere is %.1f", volume);
	
	float firstNumber, secondNumber, average;
	printf("Please enter first number:");
	scanf_s("%f", &firstNumber);
	printf("Please enter second number:");
	scanf_s("%f", &secondNumber);
	average = (firstNumber + secondNumber) / 2;
	printf("The average of %.2f and %.3f is %.3f", firstNumber, secondNumber, average);
	
	return 0;
}