//**********************************C_Primer_plus6.7.c*******************************
//**********************2020-8-8 23:15:54************************************


#include <stdio.h>
int main(void)
{
	int n = 3;
	while (n)
		printf("%2d is true \n", n--);
	printf("%2d is false \n", n);

	n = -3;
	while (n)
	{
		printf("%2d is true \n", n++);
	}

	printf("%2d is false \n",n);


	return 0;
}