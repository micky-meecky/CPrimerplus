//***********************************************************C_primer_plus4.4在比萨饼程序中使用已经定义过的常量**********************************************************************************
//******************************************************************2020年7月6日20:38:41*************************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.1415926
#include <stdio.h>
int main(void)
{
	float area, circum, radius;//定义变量

	//输入部分
	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);

	//计算部分
	area = Pi * radius * radius;
	circum = 2.0f * Pi * radius;

	//输出部分
	printf("Your basic pizza parameter are as fllows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	return 0;
}