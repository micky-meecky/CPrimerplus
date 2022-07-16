//*****************************************C_Primer_plus6.13***********************
//*****************************2020-8-9 15:07:06************************************

#include <stdio.h>
int main(void)
{
	const int FIRST_OZ = 46;
	const int NEXT_OZ = 20;
	int ounce, cost;

	printf(" ounce   cost\n");
	for (ounce = 1, cost = FIRST_OZ; ounce <= 16; ounce++, cost += NEXT_OZ)
		printf("%5d   $%4.2f\n", ounce, cost / 100.0);


	return 0;
}