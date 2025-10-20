#include <stdio.h>
#include <iostream>
#include <math.h>
int main()
{   // 1
	/*printf("Enter no of terms n:\n");
	int terms = 0;
	int sum = 0;
	scanf_s("%d",&terms);
	for (int i = 1; i <=terms ; i++)
	{
		sum += i;

	}

   printf("Sum of n terms is %d\n",sum);*/

	//2

	/*printf("Enter no of terms n:\n");
	int terms = 0;
	int fact = 1;
	scanf_s("%d", &terms);

	for (int i = terms; i > 0; i--)
	{
		fact *= i;

	}

	printf("Sum of n terms is %d\n", fact);*/

	//3
	/*printf("Enter base:\n");
	int base = 0;
	scanf_s("%d",&base);
	printf("Enter exponent:\n");
	int exponent = 0;
	scanf_s("%d", &exponent); 
	int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	printf("Result:%d",result);*/

	//4 

	//printf("Enter x:\n");
	//double x;
	//scanf_s("%lf", &x);

	//printf("Enter number of terms:\n");
	//int terms;
	//scanf_s("%d", &terms);

	//double taylor = 0.0;
	//double term = 1.0;  // x^0 / 0! = 1

	//for (int i = 0; i <= terms; i++) {
	//	if (i > 0)
	//		term *= x / i;  // update term: x^i / i! = (previous term) * x / i
	//	taylor += term;
	//}

	//printf("Result is: %lf\n", taylor);

	//5

	printf("Rows of pattern:\n");
	int rows = 0;
	scanf_s("%d",&rows);

	printf("---Right Triangle Inverted---:\n\n");

	for (int i = 0; i < rows; i++)
	{
		for (int j = rows; j > i;j--) {
			printf("*");

		}
		printf("\n");
	}
	printf("----------------------:\n\n");
	printf("---Isosceles Triangle---:\n\n");

	for (int i = 0; i < rows; i++)
	{
		for (int j = rows; j >i ; j--) {
			printf(" ");

		}
		for (int j = 0; j <= 2*i ; j++) {
			printf("*");

		}

		printf("\n");
	}
	printf("----------------------:\n\n");
	printf("---Isosceles Triangle Inverted---:\n\n");

	for (int i = 0; i < rows; i++)
	{
		
		printf("\n");
	}
	printf("----------------------:\n\n");

}


