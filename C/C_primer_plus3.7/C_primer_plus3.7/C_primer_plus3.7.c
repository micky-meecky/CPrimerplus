//******************************************�����ַ�ʽ��ʾfloat���͵�ֵ********************************************************
//*********************************************2020��7��4��14:39:13***********************************************************

#include <stdio.h>
int main(void)
{
	float about = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", about, about);
	//��һ��Ҫ��������ǳ�C99�����е��������
	printf("And it's %a in hexadecimal power of 2 notation\n", about);
	printf("%f can be written % e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	//����Ϊ��������������ʾ��P52
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;

	printf("%f \n", a);

	return 0;
}