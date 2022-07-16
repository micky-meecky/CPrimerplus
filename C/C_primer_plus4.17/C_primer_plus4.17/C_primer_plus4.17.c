//*************************************C_primer_plus4.17****************************
//****************************************2020-7-19 20:51:25************************

//***********skiptwo.c -- 跳过输入的前两个数********************



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	

	return 0;
}