#include<stdio.h>
#include<math.h>
#define PI 3.14159265
#define MAX 10

float approximation(int n);
void printfDiagonalSums(int mat[][MAX], int n);
void swap(int list[], int first, int second);
void selectionSort(int list[], int length);
int main() {
	/*int num;
	printf("Enter an integer> ");
	scanf_s("%d", &num);
	printf("\n%d! equals approximately %f", num, approximation(num));*/
	
	/*int a[][MAX] = { {1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8} };
	printfDiagonalSums(a, 4);*/

	int arr[10] = { 11,2,34,7,89,15,12,44,77,27 };
	printf("Unsorted Array Contents> ");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	selectionSort(arr, 10);
	printf("Sorted Array Contents> ");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}

float approximation(int n)
{
	float inner, outer, root, result;
	inner = (2 * n) + 1.0 / 3.0;
	root = sqrt(inner*PI);
	outer = pow(n, n) * exp(-n);
	result = outer * root;

	return result;
	
}

void printfDiagonalSums(int mat[][MAX], int n)
{
	int principal = 0;
	int secondary = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			if (i == j)
				principal += mat[i][j];

			if ((i + j) == (n - 1))
				secondary += mat[i][j];
		}
	}
	printf("Sum of Major Diagonal: %d \n", principal);
	printf("Sum of Minor Diagonal: %d \n", secondary);
}

void swap(int list[], int first, int second)
{
	int temp;
	temp = list[first];
	list[first] = list[second];
	list[second] = temp;
}

void selectionSort(int list[], int length)
{
	int loc, i, minIndex;
	for (loc = 0; loc < length; loc++) {
		minIndex = loc;
		for (i = loc + 1; i < length; i++) {
			if (list[i] < list[minIndex])
				minIndex = i;
		}
		swap(list, loc, minIndex);
	}

}

