/*platinum.c -- your weight in platinum*/
//*****************************************��������3.1***************************************************
//****************************************2020��7��2��20:52:02*******************************************
#include <stdio.h>

int main(void)
{
	float weight;	/*your weight*/
	float value;	/*��������İ׽��ֵ*/

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	/*��ȡ�û�������				*/	
	scanf_s("%f", &weight);
	/*����׽�ļ۸���ÿ��˾$1700				*/
	/*14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾*/

	value = 1700.0 * weight * 14.5833;
	printf("your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop.\n");
	printf("eat more to maintain you value.\n");

	return 0;
}