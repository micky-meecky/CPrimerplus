//*******************************************C_primer_plus5.9**************************************
//******************************************2020-7-25 10:08:25*************************************


//��������ɷֺ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MIN 60
int main(void)
{
	/*
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds(<=0 to quit):\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes ,%d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}

	printf("Done!\n");
	*/

	//����Ϊ̽Ѱ���������ģ���㣡
	printf("11 %% 5:\t%d\n",11 % 5 );
	printf("-11 %% 5:\t%d\n", -11 % 5);
	printf("11 %% -5:\t%d\n", 11 % -5);
	printf("-11 %% -5:\t%d\n", -11 % -5);
	printf("11 %% 2:\t%d\n", 11 % 2);
	printf("11 %% -2:\t%d\n", 11 % -2);
	printf("-11 %% 2:\t%d\n", -11 % 2);
	printf("-11 %% -2:\t%d\n", -11 % -2);
	//���ۣ������һ����������Ǹ��ģ�����Ϊ������֮��Ȼ��

	return 0;

}