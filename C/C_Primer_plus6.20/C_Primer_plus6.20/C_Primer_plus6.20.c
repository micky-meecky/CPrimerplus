//************************************C_Primer_plus6.20********************************
//*************************************2020-8-9 16:28:42*********************************

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double power_int(double x, int e);
double power_float(double x, double E);

double power_float(double x, double E)
{
	double power_value_f;
	power_value_f = pow(x, E);
	return power_value_f;

}

double power_int(double x, int e)
{
	double power_value_i = 1.0;
	int i;
	for (i = 0; i < e; i++)
		power_value_i *= x;

	return power_value_i;
}

int main(void)
{
	double x, final_x;
	int e;
	int mode;
	double E;

	int g;

	char judge;


	printf("If you wanna begin this game, you can keyin 'y',or 'n' to quit!\n");
	scanf("%c", &judge);

	if (judge == 'y')
	{
		printf("Please choose a mode in following modes\n");
		printf("Mode 1: let e be a int number(input 1);\t Mode 2:  let e be a float number(input 2);\n");
		printf("inputing other number will quit this game!\n");

		while(scanf("%d", &mode) == 1)
		{
			if (mode == 1)
			{
				printf("Enter a number and the positive integer power to which \n");
				printf("the number will be raised.Enter q to quit.\n");
				g = scanf("%lf%d", &x, &e);
				while (g == 2)
				{
					final_x = power_int(x, e);
					printf("%.1lf to power %d is %.3lf\n", x, e, final_x);
					printf("Enter the next pair of numbers or q to quit.\n");
					g = scanf("%lf%d", &x, &e);
				}
				printf("\nIf you wanna continue, please enter 0 frist to clear the scanf buffer and enter again to choose mode again\n");
				scanf("%d", &mode);
			}

			else if (mode == 2)
			{
				printf("Enter a number and the positive float power to which \n");
				printf("the number will be raised.Enter q to quit.\n");
				g = scanf("%lf%lf", &x, &E);
				while (g == 2)
				{
					final_x = power_float(x, E);
					printf("%.1lf to power %lf is %.3lf\n", x, E, final_x);
					printf("Enter the next pair of numbers or q to quit.\n");
					g = scanf("%lf%lf", &x, &E);
				}
				printf("\nIf you wanna continue, please enter 0 frist to clear the scanf buffer and enter again to choose mode again\n");
				scanf("%d", &mode);
			}

			else
			{
				printf("Sorry ,there is no such mode;Please enter number again.\n");
				scanf("%d", &mode);
			}
		}

	}
	else if (judge == 'n')
	{
		printf("You are a stupid asshole!\n");
	}
	else
		printf("Are you mad?\nThere's no such a option!!!\n");

	return 0;
}
//此程序有待模块化，和解决如何清除scanf缓存的bug，以及界面化！！！！