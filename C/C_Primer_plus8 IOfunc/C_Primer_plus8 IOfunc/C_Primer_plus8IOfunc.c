#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stblib.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����

void io8_1();
void io8_2();
void io8_3();


//C Primer plus�ڰ��µı������
int main(void)
{
	////io8_1();
	////io8_2();
	io8_3();

	return 0;
}

//8_1����ʲô����ӡʲô
void io8_1()
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}
}//������⣬���'#'��������ַ��û���Ҫ��ô�죿����ж���������أ�


//������������Ĳ��� 8.3��
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

