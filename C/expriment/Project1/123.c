
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a, b;
	int t;
	printf("\n******************************************************************************************************************\n");

	printf("******************Please enter two numbers to caculus their values****************************\n");

	//����������Ĳ���

	while (scanf("%f%f", &a, &b) == 2)
	{
		printf("+-+-+-+-+-%.3f+-+-+-+-+-+-\n", ((a - b) / (a + b)));
	}

	//������do while��������ʽ���ǿ����������е�
	printf("******************Please enter two numbers to caculus their values****************************\n");
	do
	{
		t = scanf("%f %f", &a, &b);
		printf("+-+-+-+-+-%.3f+-+-+-+-+-+-\n", ((a - b) / (a + b)));
		
	} while (t == 2);

	rewind(stdin);


	printf("\n***************************************************************************************************************\n");

	printf("******************Please enter two numbers to caculus their values****************************\n");
	scanf("%f %f", &a, &b);
	do
		printf("+-+-+-+-+-%.3f+-+-+-+-+-+-\n", ((a - b) / (a + b)));
	 while (scanf("%f %f", &a, &b) == 2);

	return 0;
}