//********************************C_primer_plus4.15*************************
//*******************************2020-7-19 18:34:15************************

//input .c -- ��ʱʹ��&
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int age;	//����
	float assets;	//����
	char pet[30];	//�ַ����飬���ڴ����ַ���
	
	printf("Enter your age ,assets,and favorite pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assets, pet);
	return 0;
}