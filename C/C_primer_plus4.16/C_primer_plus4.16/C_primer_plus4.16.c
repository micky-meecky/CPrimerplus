//************************C_primer_plus4.16*************************************
//*****************************************2020-7-19 20:42:00************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	unsigned width, precision;
	int num = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is :%*d:\n", width, num);
	printf("Now Enter a width and precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Width = %*.*f\n", width, precision, weight);	//*修饰符可以在运行时决定字段宽度
	printf("Done!\n");

	return 0;
}
