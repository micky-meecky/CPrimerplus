#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a, b;
	int t;
	printf("******************Please enter two numbers to caculus their values****************************\n");
	while (scanf("%f", &a) == 2);
	{
		/*rewind(stdin);*/
		printf("The difference between these two numbers divided by the product of two numbers is %.3f\n", (a ) / (a ));
		//rewind(stdin);
	}

	return 0;
}