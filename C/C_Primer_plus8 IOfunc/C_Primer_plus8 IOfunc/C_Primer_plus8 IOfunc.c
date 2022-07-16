#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����

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

//C Primer plus�ڰ��µı������
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

//8_1����ʲô����ӡʲô
void io8_1()
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}
}//������⣬���'#'��������ַ��û���Ҫ��ô�죿����ж���������أ�


//������������Ĳ��� 8.3��  ��DOS��ʹ��������ִ��exe�ļ������ض��������'<' or '>'ִ���ض�����������, ����ض���
void io8_2()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}

//8.3 ��IDE����֤�ض���Ĺ��ܣ�
void io8_3()
{
	int ch;
	FILE * fp;	
	char fname[50];		//�洢�ļ���

	printf("Enter the name of the file:");	
	scanf("%s", fname);
	fp = fopen(fname, "r");		//�򿪴���ȡ�ļ�
	if (fp == NULL)		//�����ʧ��
	{
		printf("Failed to open file. Bye \n");
		exit(1);	//�˳�������Ҫ����stdlib.hͷ�ļ���
	}

	while ((ch = getc(fp)) != EOF)		//getc�Ӵ򿪵��ļ��ж�ȡһ���ַ�
		putchar(ch);
	fclose(fp);		//�ر��ļ�
}

//8.4 ���ճ��򣬣������Ľ������Ȳ�Ҫ�����㷨
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

//8.5 & 8.6 �ó������һ���ַ��������֣��ó�������������������ָ����������������ӡ���ַ���
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
			continue;	//����һ����'!=',��Ϊ������x, y֮��������ַ�����������'\n'�ַ�
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

//8.7 �����ض���Χ�ڵ�����������ƽ���͡�����Ҫ��˵��������֤����Ҫ�ԣ�Ϊ�û�������ȫ������������֤����Ҫ����Ҫ���㲿�ָ��ӣ�
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

//8.8 �˵�������Ҫ����������֤
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
	printf("a. advice               b. bell\n");	//b��ANSI��������
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


