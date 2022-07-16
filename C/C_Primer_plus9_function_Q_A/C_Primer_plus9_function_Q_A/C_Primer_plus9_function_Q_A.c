#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "911.h"




void _91(void);
double max(double u, double v);

void _92(void);
void chline(char ch, int u, int v);

void _93(void);
void fun_93(char ch, int u, int v);

void _94(void);
double harmonic_ave(double u, double v);

void _95(void);
double larger_95(double u, double v);

void _96(void);
void change_96(double* u, double* v, double* w);


void _97(void);
int ischar(char ch);

void _98_update_for_6_20(void);
double power_int(double x, int e);
double power_float(double x, double E);

void _99(void);
double digui(int x, int e);

void _9_10(void); 
void set_to_binary(int num, int jinzhi); 

void _9_11(void);

int main(void)
{
	//_91();
	//_92();
	//_93();
	//_94();
	//_95();
	//_96();
	//_97();
	//_98_update_for_6_20(); 
	//_99();
	//_9_10();
	_9_11();

	return 0;
}

/*
	9.1 max函数
*/
void _91(void)
{
	double z,x = 0.0,y = 0.0;

	printf("Enter two numbers to analysis: ");
	scanf("%lf %lf", &x, &y);
	z = max(x, y);
	printf("The lager number is %.2lf.\n", z);
}
double max(double u, double v)
{
	return u > v ? u : v;
}

/*
	9.2打印矩阵的字符
*/
void _92(void)
{
	int x, y;
	char ch;

	printf("Enter two numbers to analysis: ");
	scanf("%d %d", &x, &y);
	while (getchar() != '\n')
		continue;
	printf("Please enter a character: ");
	scanf("%c", &ch);
	chline(ch,x, y);
}
void chline(char ch, int u, int v)
{
	int i, j;
	for (i = u; i > 0; i--)
	{
		for (j = v; j > 0; j--)
			printf("%c\t", ch);
		printf("\n");
	}
}

void _93(void)
{
	int x, y;
	char ch;

	printf("Enter two numbers to analysis: ");
	scanf("%d %d", &x, &y);
	while (getchar() != '\n')
		continue;
	printf("Please enter a character: ");
	scanf("%c", &ch);
	fun_93(ch, x, y);
}

void fun_93(char ch, int u, int v)
{
	int i, j; 
	for (i = u; i > 0; i--)
	{
		for (j = v; j > 0; j--)
			printf("%c", ch);
		printf("\n");
	}
}


/*
	9.4 调和平均值的计算
*/

void _94(void)
{
	double x, y, z;
	printf("Enter two numbers to analysis: ");
	scanf("%lf %lf", &x, &y);
	while (getchar() != '\n')
		continue;
	printf("the harmonical average is %.2lf.\n", z = harmonic_ave(x, y));

}
double harmonic_ave(double u, double v)
{
	double w;

	w = ((1 / u) + (1 / v)) / 2;

	return 1 / w;
}

/*
	9.5 把两个值替换成较大的那个值；
*/
void _95(void)
{
	double x, y;
	printf("Enter two numbers to analysis: ");
	scanf("%lf %lf", &x, &y);
	while (getchar() != '\n')
		continue;
	printf("x =  %.2lf, y = %.2lf.\n", x = larger_95(x, y), y = larger_95(x, y));

}
double larger_95(double u, double v)
{
	return u > v ? u : v;
}

/*
	9.6 以3个doubl变量的地址为变量,重在排序算法
*/
void _96(void)
{
	double x, y, z;
	printf("Enter 3 numbers to analysis: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	while (getchar() != '\n')
		continue;
	printf("This is it before:x =  %.2lf, y = %.2lf, z = %.2lf.\n", x, y, z);
	change_96(&x, &y, &z);
	printf("This is it after:x =  %.2lf, y = %.2lf, z = %.2lf.\n", x, y, z);


}
void change_96(double* u, double* v, double* w)
{
	double t1, t2, t3;


	if (*u > *v)
	{
		t1 = *u;
		*u = *v;
		*v = t1;
	}
	if (*v > *w)
	{
		t2 = *v;
		*v = *w;
		*w = t2;
	}
	if (*u > * v)
	{
		t3 = *u;
		*u = *v;
		*v = t3;
	}
	//printf("\n****************\n%lf, %lf, %lf\n*******************\n", *u, *v, *w);

}

/*
	9.7.编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。
	如果是，还要报告该字母在字母表中的数值位置。
	例如，c和C在字母表中的位置都是3。
	合并一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回-1

*/

void _97(void)
{
	char ch;
	int check;
	printf("Please enter a selection of character: ");
	while ((ch = getchar()) != EOF)
	{
		check = ischar(ch);
		if (check != -1)
			printf("%c is a character and is %dth in table. \n", ch, check);
	}

}

int ischar(char ch)
{
	if (isalpha(ch))
	{
		if (ch > 64 && ch < 91)
			return (int)ch - 64;
		if (ch > 96 && ch < 123)
			return (int)ch - 96;
	}
	else
		return -1;
}


/*
	9.8.第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。
	改进该函数，使其能正确计算负幂。
	另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1
	（函数应报告0的0次幂未定义，因此把该值处理为1）。
	要使用一个循环，并在程序中测试该函数
	并且对6.20有稍微改进，修改了一些输入错误的bug
*/
void _98_update_for_6_20(void)
{
	double x, final_x;
	int e;
	int mode;
	double E;

	int g;

	char judge;


	printf("If you wanna begin this game, you can keyin 'y',or 'n' to quit!\n");
	scanf("%c", &judge);
	while (getchar() != '\n')
		continue;
	if (judge == 'y')
	{
		printf("Please choose a mode in following modes\n");
		printf("Mode 1: let e be a int number(input 1);\n Mode 2:  let e be a float number(input 2);\n");
		printf("inputing other character will quit this game!\n");

		while (scanf("%d", &mode))
		{
			if (mode == 1)
			{
				printf("Enter an number and the positive integer power to which \n");
				printf("the number will be raised.Enter q to quit.\n");
				g = scanf("%lf%d", &x, &e);
				while (g == 2)
				{
					final_x = power_int(x, e);
					printf("%.1lf to power %d is %.3lf\n", x, e, final_x);
					final_x = 0;
					printf("Enter the next pair of numbers or q to quit.\n");
					g = scanf("%lf%d", &x, &e);
				}
				while (getchar() != '\n')
					continue;
				printf("\nIf you wanna continue, and enter again to choose mode again(non-digit to quit):\n");
				//scanf("%d", &mode);
			}

			else if (mode == 2)
			{
				printf("Enter an number and the positive float power to which \n");
				printf("the number will be raised.Enter q to quit.\n");
				g = scanf("%lf%lf", &x, &E);
				while (g == 2)
				{
					final_x = power_float(x, E);
					printf("%.2lf to power %.2lf is %.3lf\n", x, E, final_x);
					final_x = 0;
					printf("Enter the next pair of numbers or q to quit.\n");
					g = scanf("%lf%lf", &x, &E);
				}
				while (getchar() != '\n')
					continue;
				printf("\nIf you wanna continue, enter again to choose mode again(non-digit to quit):\n");
				//scanf("%d", &mode);
			}

			else if (mode != 2 && mode != 1)
			{
				printf("Sorry ,there is no such mode;Please enter number again.\n");
				//scanf("%d", &mode);
				printf("If you wanna continue, enter again to choose mode again(non-digit to quit):\n");
			}
			else
			{
				while (getchar() != '\n')
					continue;
				break;
			}
		}

		if (!isdigit(getchar()))
			printf("Bey!\n");
	}
	else if (judge == 'n')
	{
		printf("You are a stupid asshole!\n");
	}
	else
		printf("Are you mad?\nThere's no such an option!!!\n");

}
//对于FLOAT类型,直接用的库函数
double power_float(double x, double E)
{
	double power_value_f;
	power_value_f = pow(x, E);
	return power_value_f;

} 
//对于int型，直接手写运算函数
double power_int(double x, int e)
{
	double power_value_i = 1.0, power_value = 1.0;
	int i;
	if (x != 0)
	{
		if (e > 0)
		{
			for (i = 0; i < e; i++)
				power_value_i *= x;
			power_value = power_value_i;
		}
		else if (e < 0)
		{
			e = abs(e);
			for (i = 0; i < e; i++)
				power_value_i *= x;
			power_value = 1 / power_value_i;
		}
		else
			power_value = 1;
	}
	else
	{
		if (e == 0)
			power_value = 1;
		else
		power_value = 0;
	}
	return power_value;
}

/*
	9.9 用递归函数简易实现上题
*/
void _99(void)
{
	int x, y;
	double z;

	printf("2 num : ");
	scanf("%d%d", &x, &y);
	z = digui(x, y);
	printf("%.4lf\n", z);


}
double digui(int x, int e)
{
	double power_value_i = 1.0, power_value = 1.0;
	int i;
	if (x != 0)
	{
		if (e > 0)
		{
			power_value_i = x * digui(x, e - 1);
			power_value = power_value_i;
		}
		else if (e < 0)
		{
			power_value_i = 1 / (double)x * digui(x, e + 1);
			power_value = power_value_i;	//这里的double至关重要，否则，乘出来的结果为int型，直接就是0，并且/后不能带括号，
		}
		else
			power_value = 1;
	}
	else
	{
		if (e == 0)
		{
			printf("0^0 has't been defined\n");
			power_value = 1;
		}
		else
			power_value = 0;
	}
	return power_value;
}

/*
	9.10 将例程9.8改为能够实现2-10任意进制的程序easy
*/
void _9_10(void)
{
	int num,jinzhi;
	//int ch[100];
	printf("Please enter two number to caculate(the later is among 2-10, or any illeagle char to quit): ");
	while (scanf("%d%d", &num,&jinzhi) == 2)
	{
		while (getchar() != '\n')
			continue;
		if (jinzhi < 2 || jinzhi > 10)
		{
			printf("your input is wrong ,pls try again: \n");
			continue;
		}
		set_to_binary(num, jinzhi);
		printf("\n");
		printf("Please enter two number to caculate again(the later is among 2-10, or any illeagle char to quit): ");
	}
	printf("Bey!\n");
}
void set_to_binary(int num, int jinzhi)
{
	int r = 0;
	char ch = '0';
	int chk;
	r = num % jinzhi;
	if (num >= jinzhi)
		set_to_binary(num / jinzhi, jinzhi);
	switch (r)
	{
	case 0:
		ch = '0';
		break;
	case 1:
		ch = '1';
		break;
	case 2:
		ch = '2';
		break;
	case 3:
		ch = '3';
		break;
	case 4:
		ch = '4';
		break;
	case 5:
		ch = '5';
		break;
	case 6:
		ch = '6';
		break;
	case 7:
		ch = '7';
		break;
	case 8:
		ch = '8';
		break;
	case 9:
		ch = '9';
		break;
	case 10:
		ch = 'a';
		break;
	default:
		break;
	}
	putchar(ch);

}

/*
	9.11： 要求 
	第一：用头文件形式。
	第二：循环和递归分别实现斐波那契数列。(mode 1 2)
	第三：计算第n个斐波那契数是什么。(mode 3)
	第四：是计算前n项和。
	第五：有退出程序选项。
*/

void _9_11(void)
{
	int mode = 0;
	int endnum;

	while ((mode = selectM()) != 5)
	{
		switch (mode)
		{
		case 1:
			printf("\t\tPls enter a number for the end of Fibonacci series.\t");
			endnum = getsint();
			Ficaculation(endnum, 0, 0, 0);
			break;
		case 2: 
			printf("\t\tPls enter a number for the end of Fibonacci series.\t");
			endnum = getsint();
			Ficaculation(0, endnum, 0, 0);
			break;
		case 3:
			printf("\t\tPls enter the number of the Fibonacci series you want know.\t");
			endnum = getsint();
			Ficaculation(0, 0, endnum, 0);
			break;
		case 4:
			printf("\t\tPls enter an integer n:\t");
			endnum = getsint();
			Ficaculation(0, 0, 0, endnum);
			break;
		default:
			break;
		}
	}

}

int getsint(void)
{
	char ch;
	int num;
	//printf("\t");
	while (scanf("%d", &num) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is illegle, Pls try again :");
	}
	while (getchar() != '\n')
		continue;
	return num;
	
}
