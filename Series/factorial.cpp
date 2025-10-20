#include <stdio.h>
#include <iostream>

int main()
{
	printf("Enter no of terms n:\n");
	int terms = 0;
	int fact = 1;
	scanf_s("%d", &terms);
	
	for (int i = terms; i >0; i--)
	{
		fact *= i;

	}

	printf("Sum of n terms is %d\n", fact);
}

