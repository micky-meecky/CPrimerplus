//***********************************************************C_primer_plus4.4�ڱ�����������ʹ���Ѿ�������ĳ���**********************************************************************************
//******************************************************************2020��7��6��20:38:41*************************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.1415926
#include <stdio.h>
int main(void)
{
	float area, circum, radius;//�������

	//���벿��
	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);

	//���㲿��
	area = Pi * radius * radius;
	circum = 2.0f * Pi * radius;

	//�������
	printf("Your basic pizza parameter are as fllows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	return 0;
}