//*******************************************C_primer_plus5.9**************************************
//******************************************2020-7-25 10:08:25*************************************


//把秒数变成分和秒
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

	//以下为探寻负数如何求模运算！
	printf("11 %% 5:\t%d\n",11 % 5 );
	printf("-11 %% 5:\t%d\n", -11 % 5);
	printf("11 %% -5:\t%d\n", 11 % -5);
	printf("-11 %% -5:\t%d\n", -11 % -5);
	printf("11 %% 2:\t%d\n", 11 % 2);
	printf("11 %% -2:\t%d\n", 11 % -2);
	printf("-11 %% 2:\t%d\n", -11 % 2);
	printf("-11 %% -2:\t%d\n", -11 % -2);
	//结论，如果第一个运算对象是负的，则结果为负；反之亦然；

	return 0;

}