#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Please enter an integer to serve as the second operand:");
	scanf("%d", &num2);
	printf("Please enter an integer to serve as the frist operand:");
	scanf("%d", &num1);

	while (num1 > 0)
	{
		printf("%d %% %d is %d\n", num1, num2, num1 % num2);
		printf("Enter next number for frist operand:");
		scanf("%d", &num1);
		printf("\n");
	}

	while (num1 <= 0)
	{
		printf("ERROR!!!\n");
		num1 = 1;
	}
	printf("\t\t\tbye!!!!!\n");

	return 0;

}