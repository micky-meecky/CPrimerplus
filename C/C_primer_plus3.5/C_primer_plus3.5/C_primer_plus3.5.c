//********************************************************��ʾ���ַ��Ĵ�����*******************************************
//**************************************************2020��7��4��13:49:48*************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void description(void);

//��������ʼ
int main(void)
{
	char ch = 66;

	printf("Please enter a character.\n");
	//scanf("%c", &ch);
	printf("The code for %c is %d.\n", ch,ch);
	//����Ϊ��һ����
	int i;
	description();
	for (i = 64; i < 91; i+=3)
	{
		printf("%d is %c\t\t\t", i, i);
		printf("%d is %c\t\t\t", i+1, i+1);
		printf("%d is %c\t\t\t", i+2, i+2);

		printf("\n");
	}



	return 0;

}
//�����Ĵ�ӡ����
void description(void)
{
	printf("��ASCII���У���64��91�ֱ������ַ�����\n");

	return 0;
}