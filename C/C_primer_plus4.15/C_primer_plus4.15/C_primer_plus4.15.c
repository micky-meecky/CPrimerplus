//********************************C_primer_plus4.15*************************
//*******************************2020-7-19 18:34:15************************

//input .c -- 何时使用&
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int age;	//变量
	float assets;	//变量
	char pet[30];	//字符数组，用于储存字符串
	
	printf("Enter your age ,assets,and favorite pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assets, pet);
	return 0;
}