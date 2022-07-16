#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����
#include "hotel.h"

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '



void _91(void);
void _92(void);
void show_n_char(char ch, int num);

void _93(void);
int imin(int a, int b);
int get1n(void);

void _96(void);
void up_down(int n);

int _97(void);
int caculate_dg(int num);

int _98(void);
void to_binary(unsigned long n);

void zuoye_98();
void set_to_binary(int num);

void _99_hotel();

void _912(void);
void mikado(int bah);

void _913_14(void);
void interchange(int u, int v);

void _915(void);
void interchange_15(int* u, int* v);

//C Primer plus�ھ��µı������
int main(void)
{
	//_91();//����̫���ˣ�����ȥ��
	//_92();
	//_93();
	//94 95 ̫���ˣ�����ȥ
	//_96();
	//_97();
	//_98();
	//zuoye_98();
	//_99_hotel();
	//_912();
	//_913_14 ();
	_915();

	return 0;
}

void _91(void)
{}

//��******���м���ַ����м�
void _92(void)
{
	int spaces;

	show_n_char('*', WIDTH);
	putchar('\n');
	show_n_char(SPACE, 12);
	printf("%s\n", NAME);
	show_n_char(SPACE, (WIDTH - strlen(ADDRESS) ) / 2);
	//printf("\n");
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	printf("\n");
}
void show_n_char(char ch, int num)
{
	int count;
	for (count = 1; count <= num; count++)
		printf("%c", ch);

}

//�Ƚ������������������С���Ǹ���������ͬʱΪq��Qʱ�˳�����80%����������bug��
void _93(void)
{
	int n1, n2;
	printf("Enter 1st of the two integers (q to quit): ");

	while ((n1 = get1n()) != EOF)		//��ȡn1��ֵ������Ϊq��Q�����˳�
	{
		printf("Enter 2rd of the two integers (q to quit): ");
		while ((n2 = get2n()) != EOF)		//��ȡn2��ֵ����Ϊq��Q�����˳���ѭ��
		{
			//while (getchar() != '\n')
				//continue;
			printf("The lesser of %d and %d is %d\n", n1, n2, imin(n1, n2));    //����ȽϺ���
			printf("Enter 1st of the two integers (q to quit): ");
			break;		//ֱ���˳���ѭ�������»ص�n1��ѭ����
		}
		if (n2 == EOF)	//�ж�n2�Ƿ�Ϊq��Q,���Ϊq��Q����ζ����Ҫ�ٴ���ʾ����n1��ֵ�����������������ӡ
			printf("Enter 1st of the two integers (q to quit): ");
		continue;    //�ص���ȡn1��λ�ã����»�ȡn1�����Ƿ���Ҫ�˳�
	}
	printf("Bey!\n");
}
int imin(int a, int b)
{
	return a > b ? b : a;	//һ�����ʽ�㶨������Ҫ�������������
}
int get1n(void)		//��ȡ��һ�����ĺ���
{
	int a,a1;
	char ch;
	a1 = scanf("%d", &a);                 

	if (a1 == 0)	//���a1Ϊ0��˵������ĵ�һ���ǿհ��ַ���������
		if ((ch = getchar()) == 'q' || ch == 'Q' )		//�����ж��Ƿ�Ϊq��Q������ǣ���������ֵΪEOF,���ܷ���q��������������113Ҳ���˳���bug
			return EOF;
	while (getchar() != '\n')		//�����������Ч�ַ��������������
		continue;
	if (a1 == 1)		
		return a;
	else		//��a1 != 1�ң�����Ĳ���q��Q������ʾ�����������������
	{
		printf("you have entered a character that I don't understand��\nPlease try again: ");
		get1n();	//�ݹ�����Լ������¿�ʼ���뱾��
	}

}
int get2n(void)
{
	int a, a1;
	char ch;
	a1 = scanf("%d", &a);
	if (a1 == 0)		//���a1Ϊ0��˵������ĵ�һ���ǿհ��ַ���������
		if ((ch = getchar()) == 'q' || ch == 'Q')		//�����ж��Ƿ�Ϊq��Q������ǣ���������ֵΪEOF,���ܷ���q��������������113Ҳ���˳���bug
			return EOF;
	while (getchar() != '\n')		//�����������Ч�ַ��������������
		continue;
	if (a1 == 1)
		return a;
	else		//��a1 != 1�ң�����Ĳ���q��Q������ʾ�����������������
	{
		printf("you have entered a character that I don't understand\nPlease try again: ");
		get2n();	//�ݹ�����Լ������¿�ʼ���뱾��
	}
}

/*
	���� 9.6�ݹ�ԭ��Ľ���
*/
void _96(void)
{
	up_down(1);
}
void up_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);
	if (n < 4)
		up_down(n + 1);
	printf("LEVEL %d: n location %p\n", n, &n);
}

/*
	9.7 ����׳ˣ�ʹ��ѭ���͵ݹ����׳ˣ��������н׳ˣ�0�� = 1������û�н׳�
	�����ڽ׳����ֹ��������£�����������������洢ÿһλ���������Ĵ����㷨��
*/
int _97(void)
{
	int num;
	unsigned long long otcm;

	printf("please enter a positive integer to caculate: ");

	while ((num = getnum97()) != EOF)
	{
		if (num > 12)
		{
			printf("Recursion outcome is overflow\n");
			printf("please enter a positive integer to caculate (q or Q to quit):");
			continue;
		}
		otcm = caculate_dg(num);
		if (num < 12)
		{
			printf("Recursion outcome is %d.\n", otcm);
			printf("please enter a positive integer to caculate (q or Q to quit):");
		}
		else
		{
			printf("Recursion outcome is overflow\n");
			printf("please enter a positive integer to caculate (q or Q to quit):");
		}
	}
	printf("Bey!\n");


}
int getnum97(void)
{
	int num = 1, lable = 1;
	char ch,chl;
	//while (getchar() == '\n')
		//continue;
	
	lable = scanf("%d", &num);
	printf("\n");
	if (lable == 0)
		if ((chl = getchar()) == 'q' || chl == 'Q')
			return EOF;
	while ((ch = getchar()) != '\n')
	{
		continue;
	}

	if (lable == 0 || num < 0)
	{
		if (lable == 0)
		{
			printf("Sorry i don't understand, only I can understand one integer.\n So please try again: ");
			getnum97();
		}
		if (num < 0)
		{
			printf("Sorry number must be larger than 0.\n So please try again: ");
			getnum97();
		}

	}
	else
		return num;
	
}
int caculate_dg(int num)
{
	int otcm;
	
	if (num > 0)
		otcm = num * caculate_dg(num - 1);
	else
		return 1;

	return otcm;
}

/*
	9.8 �Զ�������ʽ��ӡһ������
*/
int _98(void)
{
	unsigned long num;
	printf("Enter an integer (q to quit): \n");
	while (scanf("%lu", &num) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(num);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done. \n");


}

void to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');
}

/*
	�Լ���ҵ��һ��,������Ƚϼ򵥵Ĺ�
*/
void zuoye_98()
{
	int num;
	int ch[100];
	printf("Please enter an number to caculate(illeagle char to quit): ");
	while (scanf("%d", &num) == 1)
	{
		set_to_binary(num);
		printf("\n");
		printf("Please enter an number to caculate again(illeagle char to quit): ");
	}
	printf("Bey!\n");
}

void set_to_binary(int num)
{
	int r = 0;
	r = num % 2;
	if (num >= 2)
		set_to_binary(num / 2);
	putchar(r == 0 ? '0' : '1');
}

/*
	������ʳ������û�ѡ��˵����ܡ�
*/
void _99_hotel()
{
	int nights;
	double hotel_rate;
	int code;

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
		case 1: hotel_rate = HOTEL1;
			break;
		case 2: hotel_rate = HOTEL2;
			break;
		case 3: hotel_rate = HOTEL3;
			break;
		case 4: hotel_rate = HOTEL4;
			break;
		default:
			hotel_rate = 0;
			printf("Oops!\n");
			break;
		}
		nights = getnight();
		showprice(hotel_rate, nights);
	}

	printf("Thank you and goodbye!\n");

}

/*
	9.12 �鿴�����洢�ںδ��ĺ���
*/
void _912(void)
{
	int pooh = 2, bah = 5;

	printf("In _912(),pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In _912(),bah = %d and &bah = %p\n", bah, &bah);

	mikado(pooh);
}

void mikado(int bah)
{
	int pooh = 10;
	printf("In mikado(),pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In mikado(),bah = %d and &bah = %p\n", bah, &bah);

}

/*
	9.13 һ���򵥵�ʹ�ø������������б�����ֵ��������
	�������ڣ�x��y��u��v�����Բ�ͬ�ı���������u, v������Ӱ��x��y��
	������return������ֵ������returnֻ�ܴ�һ��ֵ����������Ҫ��������ֵ,u -> x, v -> y;
	������Ҫ��ָ��ʵ�֣���������Լ�9.15����
*/

void _913_14(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d .\n", x, y);
	interchange(x, y);
	printf("Now x = %d and y = %d .\n", x, y);
}

void interchange(int u, int v)
{
	int t;

	t = u;
	u = v;
	v = t;
}

/*
	9.15 ʹ��ָ����������������ֵ��������
*/
void _915(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d .\n", x, y);
	interchange_15(&x, &y);
	printf("Now x = %d and y = %d .\n", x, y);

}
void interchange_15(int * u, int * v)
{
	int t;

	t = *u;
	*u = *v;
	*v = t;
}