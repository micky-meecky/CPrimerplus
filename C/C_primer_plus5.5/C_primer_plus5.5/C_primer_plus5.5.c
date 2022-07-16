//*************************************************C_primer_plus5.5***************************************
//************************************************2020-7-23 20:54:32************************************

#define SQUARES 64
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define mian main//“‘√‚main≥ˆ¥Ì

int main(void)
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;

	printf("Squares     grains     total     ");
	printf("fraction of \n");
	printf("            added      grains    ");
	printf("world total\n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	while (count < SQUARES)
	{
		count += 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	}

	printf("That's all.\n");

	return 0;
}