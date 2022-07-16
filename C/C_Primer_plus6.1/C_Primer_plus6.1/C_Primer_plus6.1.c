//************************************C_Primer_plus6.1****************************
//**********************************2020-8-8 20:22:12*********************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");

	status = scanf("%ld", &num);
	while (status == 1)
	{
		sum += num;
		printf("Please enter next number (q to quit ): ");
		status = scanf("%ld", &num);
	}
	printf("Those integer sum to %ld.\n", sum);


	return 0;
}