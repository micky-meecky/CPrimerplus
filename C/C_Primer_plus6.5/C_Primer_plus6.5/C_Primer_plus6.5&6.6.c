//***********************C_Primer_plus6.5***************************
//*************************2020Äê8ÔÂ8ÈÕ23:06:30****************************


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value of pi?\n");
	scanf("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("Try again!\n");
		scanf("%lf", &response);
	}

	printf("Close enough!\n");


	//************************C_Primer_plus6.6***********************

	int true_val, false_val;

	true_val = (10 > 2);
	false_val = (10 == 2);
	printf("true = %d, false = %d", true_val, false_val);

	return 0;
}