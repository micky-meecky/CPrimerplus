//*********************************************C_primer_plus5.1************************************
//(*******************************************2020-7-23 20:06:28***********************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;//const±‰¡ø
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size(men's)      foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);


	return 0;
}