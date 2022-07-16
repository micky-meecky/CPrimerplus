//**********************************C_Primer_plus6.2********************************
//**************************************2020-8-8 20:41:33********************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 5;

	while (n < 7)
	{
		printf("n = %d\n", n);
		n++;
		printf("Now n = %d\n", n);
	}
	printf("\n The loop has finished!\n");

	return 0;
}