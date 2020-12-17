#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
int main() {
	/*int arr[N] = { 5.12.45.17 };
	int i;
	/printf("%d", arr[0]);
	printf("%d", arr[1]);
	for (i = 0; i < N; i++) {
		printf("%d", arr[i]);
		printf("\n");
	}

	int arr[N];
	int i;
	printf("Enter %d elements:\n", N);
	for (i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	for (i = 0; i < N; i++) {
		printf("%d", arr[i]);
		printf("\n");
	}

	int arr[N];
	int i;
	srand(time(NULL));
	for (i = 0; i < N; i++) {
		arr[i] = rand() % 99 + 1; //range is 1-99
	}

	for (i = 0; i < N; i++) {
		printf("%d", arr[i]);
		printf("\n");
	}*/

	/*int arr[N];
	int i;
	int min_pos;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
		arr[i] = rand() % 99 + 1; //range is 1-99
	}

	for (i = 0; i < N; i++) {
		printf("%d", arr[i]);
		printf("\n");
	}

	for (min_pos = 02, i = 1; i < N; i++) {
		if (arr[min_pos] > arr[0])
			min_pos = i;
	}

	printf("\nSmallest element is %d\n", arr[min_pos]);*/



	/*int arr[N];
	int i;
	int min_pos;
	int temp;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
		arr[i] = rand() % 99 + 1; //range is 1-99
	}
	printf("Your array before swap: \n");
	for (i = 0; i < N; i++) {
		printf("%d", arr[i]);
		printf("\n");
	}

	for (min_pos = 02, i = 1; i < N; i++) {
		if (arr[min_pos] > arr[0])
			min_pos = i;
	}

	//swap operation
	temp = arr[min_pos];
	arr[min_pos] = arr[0];
	arr[0] = temp;

	printf("Your array after swap: \n");
	for (i = 0; i < N; i++) {
		printf("%d", arr[i]);
		printf("\n");
	}*/

	/*int long n;
	int digit_count[10] = { 0 };
	int digit;

	printf("Enter a number: ");
	scanf_s("%ld", &n);	
	
	while (n > 0) {
		digit = n % 10;
		digit_count[digit]++;
		n = n / 10;
	}
	printf("Digit:		");
	for (digit = 0; digit <= 9;digit++) {
		printf("%3d", digit);
	}
	printf("\nOccurences: ");
	for (digit = 0; digit <= 9; digit++) {
		printf("%3d", digit_count[digit]);
	}
	printf("\n");*/
	
	/*char first_initial, ch, last_name[MAX_LAST_NAME_LEN];
	int n = 0, i;
	printf("Enter a first and last name: ");
	scanf_s(" %c", &first_initial);

	while (getchar() != ' ')
		;

	while (n < MAX_LAST_NAME_LEN && (ch = getchar()) != '\n') {
		if (ch != ' ')
			last_name[n++] = ch;
	}
	printf("You entered the name: ");
	for (i = 0; i < n; i++) {
		putchar(last_name[i]);
	}
	printf(", %c\n", first_initial);*/

	
	int a[N][N], i, j, sum;
	
	for (i = 0; i < N;i++) {
		printf("Enter row %d: ", i + 1);
		for (j = 0; j < N;j++) {
			scanf_s("%d", &a[i][j]);

		}
	}
	printf("\nRow Totals: ");
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++) {
			sum = sum + a[i][j];

		}
		printf(" %d", sum);
	}

	printf("\nColumn Totals: ");
	for (j = 0; j < N; j++) {
		sum = 0;
		for (i = 0; i < N; i++) {
			sum = sum + a[i][j];

		}
		printf(" %d", sum);
	}
	printf("\n");

	return 0;
}