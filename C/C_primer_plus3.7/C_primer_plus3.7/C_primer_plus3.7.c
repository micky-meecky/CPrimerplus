//******************************************以两种方式显示float类型的值********************************************************
//*********************************************2020年7月4日14:39:13***********************************************************

#include <stdio.h>
int main(void)
{
	float about = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", about, about);
	//下一行要求编译器智齿C99或其中的相关特性
	printf("And it's %a in hexadecimal power of 2 notation\n", about);
	printf("%f can be written % e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	//以下为浮点数舍入错误的示例P52
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;

	printf("%f \n", a);

	return 0;
}