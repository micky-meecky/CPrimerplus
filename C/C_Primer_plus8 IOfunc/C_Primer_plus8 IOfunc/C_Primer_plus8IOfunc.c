#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stblib.h>
#include <ctype.h>		//添加字符测试的函数库
#include <stdbool.h>	//添加布尔变量的函数库

void io8_1();
void io8_2();
void io8_3();


//C Primer plus第八章的编程例程
int main(void)
{
	////io8_1();
	////io8_2();
	io8_3();

	return 0;
}

//8_1输入什么，打印什么
void io8_1()
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}
}//提出问题，如果'#'这个特殊字符用户需要怎么办？如何判定输入结束呢？


//结束键盘输入的部分 8.3节
void io8_2()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}
s

void io8_3()
{
	int ch;
	FILE * fp;
	char fname[50];

	printf("Enter the name of the file:");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open file. Bye \n");
		exit(1);
	}

	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
}

