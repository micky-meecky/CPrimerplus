//**********************************************************ʹ��ת������**************************************
//**************************************************2020��7��4��15:18:11************************************
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired mothly salary:");
	printf(" $______\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12);
	printf("\rGee!\n");

	return 0;
}