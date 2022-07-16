//**********************************C_primer_plus习题4.6******************************
//*********************************2020-7-22 18:34:35*************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
#include <string.h>

int main(void)
/*
{
	int w1, w2;
	char name_F[40], name_S[40];
	printf("Please enter your name !\n");
	scanf("%s%s", name_F, name_S);

	printf("%s %s\n", name_F, name_S);
	w1 = strlen(name_F);
	w2 = strlen(name_S);
	printf("%*d %*d\n",w1,w1,w2,w2);

	printf("%s %s\n", name_F, name_S);
	printf("%-*d %-*d\n", w1, w1, w2, w2);


	return 0;
}
*/

//*********************************************C_primer_plus习题4.7*******************

/*
{
	float a;
	double b;
	a = 1.0f / 3.0f;
	b = 1.0 / 3.0;

	printf("%.6f\t%.12f\t%.16f\n", a, a, a);
	printf("%.6f\t%.12f\t%.16f\n", b, b, b);
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);

	return 0;
}
*/

//*********************************************C_primer_plus习题4.8*******************
#define per_gal_gas 3.785f
//#define per_mile 1.609
{
	float gas;
	float miles;
	float miles_per_gal_gas;
	const float per_mile = 1.609f;
	printf("Please enter the gasoline consumed and miles:");
	scanf("%f%f", &gas, &miles);
	miles_per_gal_gas = miles / gas;
	printf("每加仑汽油能跑%.1f\n", miles_per_gal_gas);
	printf("也就是说，每跑100公里会消耗%.1f升汽油\n",100.0f * per_gal_gas / (per_mile * miles_per_gal_gas));

	return 0;
}


