//********************************************************显示带字符的代码编号*******************************************
//**************************************************2020年7月4日13:49:48*************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void description(void);

//主函数开始
int main(void)
{
	char ch = 66;

	printf("Please enter a character.\n");
	//scanf("%c", &ch);
	printf("The code for %c is %d.\n", ch,ch);
	//以下为举一反三
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
//描述的打印函数
void description(void)
{
	printf("在ASCII码中，从64到91分别代表的字符如下\n");

	return 0;
}