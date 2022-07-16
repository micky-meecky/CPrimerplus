#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>		//添加字符测试的函数库
#include <stdbool.h>	//添加布尔变量的函数库

#define salaryh 10.00
#define tax1 0.15
#define tax2 0.2
#define tax3 0.25

void _81(void);
void _82(void);
void _83(void);
void _84(void);
void _85(void);

void _86(void);
char get_1st(void);

void _87(void);

void _88(void);
char getselection(void);
float get_num1(void);
float get_num2(void);
float add(float n1, float n2);
float substract(float n1, float n2);
float multiply(float n1, float n2);
float divide(float n1, float n2);

bool lable = true;

//C Primer plus第八章的编程训练
int main(void)
{
	//_81();
	//_82();
	//_83();
	//_84();
	//_85();
	//_86();
	//_87();
	_88();

	return 0;
}
//8.1设计一个程序，统计在读到文件结尾字符之前的字符数
void _81(void)
{
	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		count++;
	}
	printf("\nthere are %d characters. \n", count);
}

/*
8.2 在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符及其相应的ASCII十进制值。注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处理这些字符。
如果非打印字符是换行符或制表符，则分别打印\n或\t。否则，使用控制字符表示法。例如，ASCII的1是Ctrl + A，可显示为 ^ A。注意，A的ASCII值是Ctrl + A的值加上64。其他非打印
字符也有类似的关系。除每次遇到换行符打印新的一行之外，每行打印10对值。
*/
void _82(void)
{
	int ch;
	int count = 0;
	FILE* fp;
	char fname[50];

	printf("Please enter the file name :\n");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open the file.\n");
		exit(1);
	}

	while ((ch = getc(fp)) != EOF)
	{

		if (ch < ' ')
		{
			if (ch == 10)
			{
				putchar('\\');
				putchar('n');
				printf("\t");
				count++;
			}
			else if (ch == 9)
			{
				putchar('\\');
				putchar('t');
				printf("\t");
				count++;
			}
			else
			{
				count++;
				putchar('^');
				putchar(ch + 64);
				printf("\t");
			}
		}
		else
		{
			putchar(ch);
			printf("\t");
			count++;
		}
		if (count == 10)
		{
			printf("\n");
			count = 0;
		}
	}
	fclose(fp);
	
	return 0;

}

/*
8.3 编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便
*/
void _83(void)
{
	int ch;
	int cd, cx;		//cd是指大写的，cx是指小写的
	cd = cx = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			cx++;
		else if (isupper(ch))
			cd++;
		else
		{
			continue;
		}
	}
	printf("uppers have %d.\nlowers have %d.\n", cd, cx);
}

/*
8.4 编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点符号也不应该统计，但是现在暂时不同考虑这么多
（如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）
*/
void _84(void)
{
	char ch;
	int wordc = 0, sumc = 0;
	int efc = 0;
	float ave = .0;
	bool inword = false;

	printf("Please enter a phrase of words:\n");
	while ((ch = getchar()) != EOF)
	{
		sumc++;
		if ((!ispunct(ch) && !isspace(ch)) && !inword)
		{
			wordc++;
			inword = true;
		}
		if((ispunct(ch) || isspace(ch)) && inword)
		{
			inword = false;
		}

		if (ispunct(ch) || isspace(ch))
			sumc--;
	}

	efc = sumc;
	ave = (double)efc / (double)wordc;
	printf("efc = %d\t", efc);
	printf("word count = %d\n", wordc);
	printf("There are %.2lf average characters in each word.\n", ave);



}

/*
8.5 修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一次猜测的值应是50和100中值，也就是75。如果这
次猜大了，那么下一次猜测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案
*/
void _85(void)
{
	int MAX = 100;
	int MIN = 0;
	char prech, ch;
	int num = 50;
	double test = 0.0;

	printf("Pick an integer from 1 to 100 .i will try to gerss it .\n");
	printf("Response with a d if my guess is over!\n or with a x if my guess is less!\n or 6 if I were right!\n ");
	printf("I guess it is %d\n", num);
	while ((ch = getchar()))
	{
		while (getchar() != '\n')
			continue;
		if (ch == 'x')
		{
			MIN = num;
			printf("oh! bigger.\n Let me try again: ");
			test = (((double)num + (double)MAX) / 2.0);
			//printf("\ntest = %.2lf\n", test);
			if(test <= 99)													//添加100进入猜测范围里面；否则永远最大都只能猜到99
				printf("I guess it is %d\n", num = (num + MAX) / 2);
			else
				printf("I guess it is %d\n", 100);
			
			prech = ch;
		}
		else if (ch == 'd')
		{
			MAX = num;
			printf("oh! smaller.\n Let me try again: ");
			printf("I guess it is %d\n", num = (num + MIN) / 2);
			prech = ch;
		}
		else if (ch == '6')
		{
			printf("I know I can do it! \n");
			break;
		}
		else
		{
			printf("Sorry ! I don't understand. Please enter again: ");
			continue;
		}
	}

	printf("I know I can do it! \n");
}


/*
8.6 修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试
*/
void _86(void)
{
	int ch;
	//int num;
	ch = get_1st();
	printf("%c\n", ch);
	printf("Bey!\n");
}
char get_1st(void)
{
	int ch;

	while (isspace((ch = getchar())))
		continue;
	return ch;
}

/*
8.7 修改第7章的编程练习8，用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记
*/
void _87(void)
{
	float grosswage = 300.0, wage = 300.0, rate = 0.0;
	float tax;
	int hour = 40;
	char ch;


	printf("**************************************************************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr \t\t\t b) $9.33/hr\n");
	printf("c) $10.00/hr \t\t\t d) $11.20/hr\n");
	printf("q) quit\n");
	printf("**************************************************************************************************************\n");
	
	while ((ch = get_1st()) != 'q')
	{
		while (getchar() != '\n')
			continue;
		switch (ch)
		{
		case 'a':
			rate = 8.75;
			break;
		case 'b':
			rate = 9.33;
			break;
		case 'c':
			rate = 10.00;
			break;
		case 'd':
			rate = 11.20;
			break;
		default:
			printf("Please enter a currect charater : ");
			continue;
		}
		printf("You have selected the %c selection\n", ch);
		printf("Please enter your work hour: ");
		break;
	}

	while (scanf("%d", &hour) == 1)
	{
		if (hour < 0)
			printf("Are you boss? How do you work for hours of nagetive number? Enter again");
		else if (hour >= 0 && hour <= 40)
		{
			grosswage = hour * rate;
			break;
		}
		else if (hour > 40 && hour < (7 * 24))
		{
			grosswage = hour * 40 + (hour - 40) * 1.5 * rate;
			break;
		}
		else
		{
			printf("Are a dipshit?\n\n Try again!!!");
		}
	}

	if (grosswage <= 300)
		tax = grosswage * tax1;
	else if (grosswage > 300 && grosswage <= 450)
		tax = 300 * 0.15 + (grosswage - 300) * tax2;
	else
		tax = 300 * tax1 + 150 * tax2 + (grosswage - 450) * tax3;

	wage = grosswage - tax;

	printf("So, you have worked for %3d hours in this week.\n Your gross pay is %.2f dollars,\n and the tax you have to pay is %.2f,\n and your pure wage is %.2f.\n ", hour, grosswage, tax, wage);
lable1: printf("\nbye!\n");

}

/*
8.8 编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输入的数字，如果用户输入失败，则允许再次输入。进行除法运算时，如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。
该程序的一个运行示例如下：
Enter the operation of your choice:
a. add                s. subtract
m. multiply       d. divide
q. quit
a
...(见书上)
*/

void _88(void)
{
	char ch = 'c';
	float num1, num2;
	float otcm;

	printf("Enter the operation of your choice:\n");
	printf("a. add                s. subtract\n");	
	printf("m. multiply		      d. divide\n");
	printf("q: quit\n");
	while ((ch = getselection()) != 'q')
	{
		switch (ch)
		{
		case 'a':
			printf("you have choose add.\n");
			num1 = get_num1();
			num2 = get_num2();
			add(num1, num2);
			break;
		case 's':
			printf("you have choose substract.\n");
			num1 = get_num1();
			num2 = get_num2();
			substract(num1, num2);
			break;
		case 'm':
			printf("you have choose multiply.\n");
			num1 = get_num1();
			num2 = get_num2();
			multiply(num1, num2);
			break;
		case 'd':
			printf("you have choose divide.\n");
			num1 = get_num1();
			num2 = get_num2();
			if (num2 == 0.0 && lable == true)
			{
				printf("Enter an number other than 0: ");
				lable = false;
				num2 = get_num2();
				
			}
			divide(num1, num2);
			break;
		default:
			ch = 'c';
			
			break;
		}
		if (ch == 'c')
		{
			printf("Ouch! there is no this option. \nPlease try again: ");
			continue; 
		}
		printf("Enter the operation of your choice:\n");
	}

	printf("Bey!\n");

}

char getselection(void)
{
	int ch;
	while (isspace(ch = getchar()))
	{
	
			continue;
	}	
	while (getchar() != '\n')
		continue;
	return ch;
}
float get_num1(void)
{
	float num1;
	char ch;
	printf("Enter the first number: ");
	while (scanf("%f", &num1) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an effective number.\n");
		printf("Please enter anumber, such as 2.3, -1.738E8, or 3: ");
	
		continue;
		
	}
	while (getchar() != '\n')
		continue;
	return num1;
}
float get_num2(void)
{
	float num2;
	char ch;
	if (lable == false)
	{
		while (scanf("%f", &num2) != 1)
		{
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an effective number.\n");
			printf("Please enter anumber, such as 2.3, -1.738E8, or 3: ");
			lable = true;

			continue;
		}
		while (getchar() != '\n')
			continue;
	}
	else
	{	
		printf("Enter the 2rd number: ");
		while (scanf("%f", &num2) != 1)
		{
		
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an effective number.\n");
			printf("Please enter anumber, such as 2.3, -1.738E8, or 3: ");
			continue;
		}
		while (getchar() != '\n')
			continue;
	}
	return num2;
}
float add(float n1, float n2)
{
	float otk;
	otk = n1 + n2;
	printf("\n%.2f + %2.f = %.2f\n", n1, n2, otk);
	return 1.0;
}
float substract(float n1, float n2)
{
	float otk;
	otk = n1 - n2;
	printf("\n%.2f - %2.f = %.2f\n", n1, n2, otk);
	return 2.0;
}
float multiply(float n1, float n2)
{
	float otk;
	otk = n1 * n2;
	printf("\n%.2f * %2.f = %.2f\n", n1, n2, otk);
	return 3.0;
}
float divide(float n1, float n2)
{
	float otk;
	otk = n1 / n2;
	printf("\n%.2f / %2.f = %.2f\n", n1, n2, otk);
	return 4.0;
}

