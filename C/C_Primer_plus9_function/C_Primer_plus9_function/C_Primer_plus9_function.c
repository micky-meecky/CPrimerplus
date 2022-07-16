#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>		//添加字符测试的函数库
#include <stdbool.h>	//添加布尔变量的函数库
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

//C Primer plus第九章的编程例程
int main(void)
{
	//_91();//由于太简单了，故略去；
	//_92();
	//_93();
	//94 95 太简单了，故略去
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

//将******行中间的字放在中间
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

//比较两个整数，并输出较小的那个，两个数同时为q或Q时退出程序（80%代码在消除bug）
void _93(void)
{
	int n1, n2;
	printf("Enter 1st of the two integers (q to quit): ");

	while ((n1 = get1n()) != EOF)		//获取n1的值，若是为q或Q，则退出
	{
		printf("Enter 2rd of the two integers (q to quit): ");
		while ((n2 = get2n()) != EOF)		//获取n2的值，若为q或Q，则退出该循环
		{
			//while (getchar() != '\n')
				//continue;
			printf("The lesser of %d and %d is %d\n", n1, n2, imin(n1, n2));    //进入比较函数
			printf("Enter 1st of the two integers (q to quit): ");
			break;		//直接退出该循环，重新回到n1的循环内
		}
		if (n2 == EOF)	//判断n2是否为q或Q,如果为q或Q，意味着需要再次提示输入n1的值，所以有下面这个打印
			printf("Enter 1st of the two integers (q to quit): ");
		continue;    //回到获取n1的位置，重新获取n1，看是否需要退出
	}
	printf("Bey!\n");
}
int imin(int a, int b)
{
	return a > b ? b : a;	//一个表达式搞定，不需要定义第三个变量
}
int get1n(void)		//获取第一个数的函数
{
	int a,a1;
	char ch;
	a1 = scanf("%d", &a);                 

	if (a1 == 0)	//如果a1为0，说明输入的第一个非空白字符不是数字
		if ((ch = getchar()) == 'q' || ch == 'Q' )		//继续判断是否为q或Q，如果是，则函数返回值为EOF,不能返回q，否则会出现输入113也会退出的bug
			return EOF;
	while (getchar() != '\n')		//消除后面的无效字符，以清除缓冲区
		continue;
	if (a1 == 1)		
		return a;
	else		//若a1 != 1且，输入的不是q或Q，则提示输入错误，请重新输入
	{
		printf("you have entered a character that I don't understand。\nPlease try again: ");
		get1n();	//递归调用自己，重新开始输入本数
	}

}
int get2n(void)
{
	int a, a1;
	char ch;
	a1 = scanf("%d", &a);
	if (a1 == 0)		//如果a1为0，说明输入的第一个非空白字符不是数字
		if ((ch = getchar()) == 'q' || ch == 'Q')		//继续判断是否为q或Q，如果是，则函数返回值为EOF,不能返回q，否则会出现输入113也会退出的bug
			return EOF;
	while (getchar() != '\n')		//消除后面的无效字符，以清除缓冲区
		continue;
	if (a1 == 1)
		return a;
	else		//若a1 != 1且，输入的不是q或Q，则提示输入错误，请重新输入
	{
		printf("you have entered a character that I don't understand\nPlease try again: ");
		get2n();	//递归调用自己，重新开始输入本数
	}
}

/*
	例程 9.6递归原理的解释
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
	9.7 计算阶乘，使用循环和递归计算阶乘；正整数有阶乘，0！ = 1，负数没有阶乘
	（对于阶乘数字过大的情况下，后面可以用数组来存储每一位，相关请查阅大数算法）
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
	9.8 以二进制形式打印一个整数
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
	自己作业上一题,还是算比较简单的哈
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
	房间费率程序，有用户选择菜单功能。
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
	9.12 查看变量存储在何处的函数
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
	9.13 一个简单的使用更改主调函数中变量的值交换函数
	问题在于，x，y和u，v是两对不同的变量，更改u, v并不能影响x，y。
	可以用return来传回值，但是return只能传一个值，而现在需要传回两个值,u -> x, v -> y;
	所以需要用指针实现；详见书上以及9.15代码
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
	9.15 使用指针参数解决函数建多值传递问题
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