#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����

void io8_1();
void io8_2();


//C Primer plus�ڰ��µı������
int main(void)
{
	//io8_1();
	io8_2();

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

