#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>		//添加字符测试的函数库
#include <stdbool.h>	//添加布尔变量的函数库

void io8_1();
void io8_2();
void io8_3();
void io8_4();

void io8_5_6();
void display(char cr, int lines, int width);

void io8_7();
long get_long(void);
double sum_squares(long a, long b);
bool bad_limits(long begin, long end, long low, long high);

void io8_8();
char get_ch(void);
char get_1st();
void count(void);
int get_int(void);

//C Primer plus第八章的编程例程
int main(void)
{
	////io8_1();
	//io8_2();
	//io8_3();
	//io8_4();
	//io8_5_6();
	//io8_7();
	io8_8();

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


//结束键盘输入的部分 8.3节  在DOS中使用命令行执行exe文件，用重定向运算符'<' or '>'执行重定向输入和输出, 组合重定向
void io8_2()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}

//8.3 在IDE中验证重定向的功能！
void io8_3()
{
	int ch;
	FILE * fp;	
	char fname[50];		//存储文件名

	printf("Enter the name of the file:");	
	scanf("%s", fname);
	fp = fopen(fname, "r");		//打开待读取文件
	if (fp == NULL)		//如果打开失败
	{
		printf("Failed to open file. Bye \n");
		exit(1);	//退出程序（需要包含stdlib.h头文件）
	}

	while ((ch = getc(fp)) != EOF)		//getc从打开的文件中读取一个字符
		putchar(ch);
	fclose(fp);		//关闭文件
}

//8.4 猜谜程序，（后面会改进），先不要在意算法
void io8_4()
{
	int i = 1;
	char ch;

	printf("Pick an integer from 1 to 100 .i will try to gerss it .\n");
	printf("Response with a y if my guess is right or with a n if my guess is wrong!\n");
	printf("i guess it is %d\n", i);
	while ((ch = getchar()))
	{
		//rewind(stdin);
		if (ch == 'n')
		{
			i++;
			printf("Well , then ,it is %d\n", i);
			while (getchar() == '\n')
				break;
			//continue;
		}
		else if (ch == 'y')
			break;
		else
		{
			printf("sorry, i can't understand it ,pls try again: ");
			continue;
		}
	}
	if (ch == 'y')
		printf("I know i can do it !\n");
	else
		printf("sb\n");
}

//8.5 & 8.6 该程序读入一个字符两个数字，该程序根据输入的两个数字指定的行数与列数打印该字符；
void io8_5_6()
{
	int x, y;
	int ch,c;
	int row;


	printf("Enter a character and two integers:");
	
	
	while ((ch = getchar()) != '\n')
	{
		/*while(getchar() != '\n')
			continue;*/

		
		if (scanf("%d %d", &x, &y) != 2)
			break;
		display(ch, x, y);
		printf("Enter another character and two integers:\n");
		printf("Enter a newline to quit.\n");
		while ((c = getchar()) != '\n')
			continue;	//这里一定是'!=',是为了消除x, y之后的其他字符，包括最后的'\n'字符
	}
	printf("Bey!\n");

}
void display(char cr, int lines, int width)
{
	int row, col;
	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			printf("%c", cr);
		printf("\n");
	}
}

//8.7 计算特定范围内的所有整数的平方和。（主要是说明输入验证的重要性，为用户考虑周全，明显输入验证部分要比主要计算部分复杂）
void io8_7()
{
	const long MAX = +10000000L;
	const long MIN = -10000000L;
	long start;
	long stop;
	double answer;

	printf("This program computes the sum of the suqares of"
		"integers in a range.\nThe lower bound shoule not"
		"be less than -10000000 and \nthe upper bound"
		"should not be more than +10000000.\nEnter the "
		"limits (enter 0 for both limits to quit):\n"
		"lower limit: ");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else
		{
			answer = sum_squares(start, stop);
			printf("The sum of the squares of integers ");
			printf("from %ld to %ld is %g\n", start, stop, answer);
		}
		printf("Enter the limits (enter 0 for both limits to quit):\n");
		printf("lower limit: ");
		start = get_long();
		printf("upper limit: ");
		stop = get_long();
	}
	printf("Done.\n");

	return 0;
}
long get_long(void)
{
	long input;
	char ch;

	while (scanf("%ld", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\nPlease enter  an integer value, such as 25, -17, or 3: ");
		
	}
	return input;
}
double sum_squares(long a, long b)
{
	double total = 0;
	long i; 

	for (i = a; i <= b; i++)
	{
		total += (double)i * (double)i;
	}
	return total;
}
bool bad_limits(long begin, long end, long low, long high)
{
	bool not_good = false;

	if (begin > end)
	{
		printf("%ld isn't smaller than %ld.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("lower value must be %ld or greater.\n", low);
		not_good = true;
	}
	if (begin > high || end > high)
	{
		printf("upper value must be %ld or less.\n", high);
		not_good = true;
	}
	return not_good;
}

//8.8 菜单程序，主要还是输入验证
void io8_8()
{
	int ch;
	//int num;
	printf("%d", '\x1');

	while ((ch = get_ch())!= 'q')
	{
		switch (ch)
		{
		case 'a':
			printf("I will give an advice, but now, you are not deserve it\n");
			break;
		case 'b':
			putchar('\a');
			break;
		case 'c':
			count();
			break;
		default:
			printf("Program ERROR!\n");
			break;
		}
	}

	printf("Bey!\n");
}
char get_ch(void)
{
	int c;

	printf("Enter the letter of your choice: \n");
	printf("a. advice               b. bell\n");	//b是ANSI报警声音
	printf("c. count                d. quit\n");

	c = get_1st();

	while ((c < 'a' || c > 'c') && c != 'q')
	{
		printf("Please response with a, b, c, q:\n");
		c = get_1st();
	}


	return c;
}
char get_1st(void)
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}
void count(void)
{
	int num;
	int i;
	printf("count how far? Enter an integer: \n");
	num = get_int();

	for (i = 1; i <= num; i++)
		printf("%d\n", i);

}
int get_int(void)
{
	int input;
	char chi;
	
	while ((scanf("%d", &input)) != 1)
	{
		while ((chi = getchar()) != '\n')
			putchar(chi);
		printf(" is not an integer.\n Please enter an integer again: ");
	}
	while (getchar() != '\n')
		continue;
	return input;
}


