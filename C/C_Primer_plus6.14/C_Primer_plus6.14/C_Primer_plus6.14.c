//*************************************C_Primer_plus6.14****************************************
//************************************2020-8-9 15:18:36*****************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t_ct;
	double time, power_of_2;
	int limit;

	printf("Enter the number of terms you want: ");
	scanf("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct < limit; t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("time = %f when terms = %d.\n", time, t_ct);
	}
	printf("\n");
	return 0;
}