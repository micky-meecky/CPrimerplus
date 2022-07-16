#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>		//添加字符测试的函数库
#include <stdbool.h>	//添加布尔变量的函数库

#define SPACE ' '
#define rate1 0.13230
#define rate2 0.15040
#define rate3 0.30025
#define rate4 0.34025
#define break1 360.0
#define break2 468.0
#define break3 720.0
#define base1 (rate1 * break1)
#define base2 (base1 + (break2 - break1) * rate2)
#define base3 (base2 + (break3 - break2) * rate3)

void _7_1();
void _7_2();
void _7_3();
void _7_4();
void _7_5_1();
void _7_5_2();
void _7_6();
void _7_7();
void _7_8();
void _7_9();
void _7_10_1();
void _7_10_2();
void _7_11();
void _7_12();



int main(void)
{
	//_7_1();
	//_7_2();
	//_7_3();
	//_7_4();
	//_7_5_1();
	//_7_5_2();
	//_7_6();
	//_7_7();
	//_7_8();
	//_7_9();
	//_7_9_1();
	//_7_10_1();
	//_7_10_2();
	//_7_11();
	_7_12();


	return 0;
}


//书上P151页
void _7_1()
{
	const int freezing = 0;
	float temperature;
	int cold_day = 0;
	int all_days = 0;
	int i = 0;

	printf("please enter the list of daily temperatures.\n");
	printf("Use celsius, and enter q to quit\n");
	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < 0)
		{
			cold_day++;
		}

	}
	if (cold_day != 0)
		printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_day / all_days);
	if (all_days == 0)
	{
		printf("No data entered!\n");
	}
	i = pow(2, 31) - 1;
	printf("%d \n", i);


}

//书上P154
void _7_2()
{
	char ch; 

	ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();

	}

	rewind(stdin);

	//if (ch = '\n')
	//	printf("cao!!!");
	////printf("\n");
	//putchar(ch);


}

//书上P155----加上ctype.h的头文件用里面的isalpha()函数
void _7_3()
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}

	putchar(ch);

}

//书上P157----计算电费的程序
void _7_4()
{
	float payment = -1.0, kwh = 0.0;
	int i = 0;

	printf("Please enter your electrical consumption: ");
	scanf("%f", &kwh);
	rewind(stdin);
	//printf("\n");
	//printf("%c", kwh);

	while (payment < 0)					//代表用户输入错误，提示重新输入
	{	
		//for(i = 0;)

		if (kwh >= 0 && kwh <= break1)							//0-360
			payment = kwh * rate1;
		else if (kwh > break1 && kwh < break2)					//360 - 468
			payment = base1 + (kwh - break1) * rate2;
		else if (kwh == break2)
			payment = base2;
		else if (kwh > break2 && kwh < break3)					//468 - 720
			payment = base2 + (kwh - break2) * rate3;
		else if (kwh == break3)
			payment = base3;
		else if (kwh > base3)									//>720
			payment = base3 + (kwh - break3) * rate4;
		else													// < 0
		{
			payment = -1.0;
			printf("Such an idiot! your input is absolutly wrong, ass**le!!!\n");
		}
		if (payment >= 0)
			printf("After cacculating ,your bill is $%.2f\n", payment);
		else
		{

			printf("You are an idiot!!!\n");
			printf("Your last input is completely wrong ,I'll give you another f**king chance to reinput it\n");	//提示输入超出允许输入范围，提示重新输入
			scanf("%f", &kwh);
			rewind(stdin);
			//printf("\n");
		}
	}
}

//书上P161（稍微比较冗余的算法） 使用if嵌套语句实现显示一个正整数的约数，并显示约数的序号以及该数除以该约数的结果，若遇到没有约数，则显示该数为素数。输入非数字字符和小数回车则退出程序
void _7_5_1()
{
	int num = 0, i = 0, sequence = 0, outcome = 0, s[100] = { 0 }, div[100] = {0}, j = 0;
	int check;
	bool isprime = false;

	printf("Please enter an number to cacculate: ");
	check = scanf("%d", &num);	//大循环检测变量
	rewind(stdin);
	while (check && num > 0)		//大循环，表明输入合法字符就运算出结果，其他字符则退出程序,并且要输入大于零的正整数，否则退出程序
	{
		for (i = 2; i <= num; i++)	//进行运算的主循环
		{	
			if ((num % i) == 0)		//检测是否能被整除
			{
				sequence++;			//表明第sequence个约数的变量
				if(sequence == 1 && i == num)	//如果sequence始终为1 且i已经加到num了，说明该数为素数
				{
					isprime = true;		//素数变量赋true
				}
				else	//如果sequence大于1，说明该数有除了自己其他的约数，将序数变量和该约数赋值给数组变量
				{
					s[sequence] = sequence;
					div[sequence] = i;
					
					isprime = false;
				}
			}
		}


		if (isprime == true)	//如果为素数，则显示该数为素数
		{
			printf("\n%d is prime\n\n", num);
		}
		else		//如果为约数
		{
			printf("The %dth divisor of the number you just typed is %d .\n", 1, 1);	//显示第一个约数1
			printf("and the outcome of the processing is %d\n\n", num);					//显示该数除以1的结果

			for (j = 1; j <= sequence; j++)
			{
				printf("The %dth divisor of the number you just typed is %d .\n", s[j]+1, div[j]);	//显示第s[j]+1个约数
				printf("and the outcome of the processing is %d\n\n", num / div[j]);
			}
			printf("\nThe total number which the number you keyed in have %d\n\n", sequence + 1);	//显示总共约数的个数
			
		}
		printf("please enter again: ");		//请求再次输入
		check = scanf("%d", &num);
		rewind(stdin);						//清除输入缓冲区
		sequence = 0;						//序数变量清零，以便下次运算显示
		printf("\n");
	}


}

//书上P161（稍微好的算法） 使用if嵌套语句实现显示一个正整数的约数，并显示约数的序号以及该数除以该约数的结果，若遇到没有约数，则显示该数为素数。输入非数字字符和小数回车则退出程序.
//输出形式为第一排显示有多少个约数；
//最后再把所有约数按小到大排列出来；
void _7_5_2()
{
	long num = 0, div = 0, divp[100] = { 0 }, diva[100] = { 0 };	//divp & diva 是前面一半和后面一半的约数	
	int i = 0, j = 0, k = 0;
	bool isprime = false;
	int seq = 0, total = 0;		//total是总共的约数个数

	printf("Please enter an integer for analysis: ");
	printf("Enter q to quit.\n");

	while (scanf("%d", &num) == 1 && num > 0)		//scanf返回输入成功的1，num必须大于0
	{
		rewind(stdin);		//清除输入缓冲区
		printf("\n");

		for (div = 2, isprime = true; div * div <= num; div++)		//判断到num的平方根
		{
			if (num % div == 0)
			{
				isprime = false;		//如果能够被整除，则不是素数
			}

		}

		if (isprime == true)
		{
			printf("\n%d is prime\n\n", num);	//如果不能被整除，则为素数
		}
		else
		{
			//按以下方案无法轻松解决约数序号的问题，但能比上题一样的枚举法少测试一半的时间，同时程序比上个程序复杂一倍
			for (i = 1; i * i <= num; i++)		//进行计算且判断到num的平方根
			{
				if (num % i == 0)		//如果被整除
				{
					seq += 2;			//没出现一个能够被整除的i，则意味着同时出现了一大一小的两个约数，所以seq+2，
					//printf("The %dth divisor of the number you just typed is %d .\n", seq, i);	//显示第  个约数
					//printf("and the outcome of the processing is %d\n\n", num / i);
					divp[seq / 2 - 1] = i;				//能够整除num的i装到divp数组里，并从第一个元素开始，直到中间的一个约数
					diva[seq / 2 - 1] = num / i;		//将num / i 的结果，即i对应的另外一个约数装到diva数组里，并从第一个元素开始，直到中间的一个约数
				}
			}
		}

		total = seq;		//总共的数赋值于seq的序数

		if (isprime == false)		//如果不是素数
		{
			if (divp[((seq / 2) - 1)] != diva[((seq / 2) - 1)])		//如果前面一半的数组里的最后一个数跟后面一半的最后一个数不相等，即该数num不是平方数，那么就一定有偶数个约数【如：num = 10，divp=1,2，diva = 10,5 】
			{
				printf("There are %d divisors of the number you just typed !\n", total);		//total跟seq一样，没有因为重复数字而减1；
				printf("They are respectively: ");
				for (j = 0; j < (seq / 2); j++)			//diva跟divp一样，总数就是seq/2
				{
					printf("%d\t", divp[j]);
				}
				for (k = (seq / 2 - 1); k >= 0; k--)		//因为diva是从大到小，而需要倒序输出，所以用减法排序
				{
					printf("%d\t", diva[k]);
				}
			}
			else													//如果前面一半的数组里的最后一个数跟后面一半的最后一个数相等，即该数num是平方数，那么就一定有偶数个约数【如：num = 9，divp=1,3，diva = 9,3 】
			{
				printf("There are %d divisors of the number you just typed !\n", total - 1);	
				printf("They are respectively: ");
				for (j = 0; j < (seq / 2 - 1); j++)		//diva跟divp一样，总数就是seq/2，但这里需要不输出最后一个数，因为那个数跟diva的需要输出的第一个数重复了，所以需要减一
				{
					printf("%d\t", divp[j]);
				}
				for (k = (seq / 2 - 1); k >= 0; k--)
				{
					printf("%d\t", diva[k]);
				}
			}
		}
		
		printf("\n");
		printf("Please enter again: ");		//请求再次输入
		//  scanf("%d", &num);
		rewind(stdin);						//清除输入缓冲区
		seq = 0;						//序数变量清零，以便下次运算显示

	}
}

//计算一个句子中除单引号和双引号以外的其他字符的个数；
void _7_6()
{
	char ch76;
	int charcount = 0;
	printf("\n\tPlease enter a sentence to analysis:\n");


	while (!ispunct((ch76 = getchar())))	//指遇到标点符号字符结束输入传入！
	{
		if (ch76 != '\"' && ch76 != '\'')
			charcount++;
	}
	printf("Your sentence has %d characters.", charcount);

}

//P167 该程序读取一段话并输出单词数量，字符数，行数。用|代表终点
void _7_7()
{
	char ch77, prev = ' ';
	int charct = 0, lines = 0, wordct = 0, inword = 1, in_line = 1, p_line = 0;;

	while (1)
	{
		printf("\nPlease enter a phrase to analysis: [| to terminate!]\n");
		while ((ch77 = getchar()) != '|')
		{
			charct++;
			if (!isspace(ch77) && inword == 1)
			{
				inword = 0;
				wordct++;
			}
			if (isspace(ch77) && inword == 0)
				inword = 1;
			if (ch77 != '\n' && in_line == 1)
			{
				lines++;
				in_line = 0;
			}
			if (ch77 == '\n' && in_line == 0)
				in_line = 1;

			prev = ch77;
		}

		if (prev == '\n')
			p_line = 1;

		printf("characters = %d, \twords = %d \tlines = %d \tpartial line = %d \t\n", charct, wordct, lines, p_line);
		putchar(ch77);
		rewind(stdin);
		charct = 0, lines = 1, wordct = 0;
	}
}

//P169 该程序计算刷给定面积的墙壁需要多少罐油漆，（油漆老板只卖整罐的油漆）【条件运算符相关练习】
//要求1: can需要区分单复数；
//要求2: 墙壁必须全部刷完，不能由于油漆不够而剩余墙壁不刷；
void _7_8()
{
	int cans = 0;
	int sq_feet = 0,coverage = 350;
	printf("Please enter the square feet for painting: \n");
	while (scanf("%d", &sq_feet) == 1 && sq_feet > 0)
	{
		cans = sq_feet / coverage;
		cans += (sq_feet % coverage == 0) ? 0 : 1;
		printf("You need %d %s of paint. \n", cans, (cans > 1) ? "cans" : "can");
		printf("Please enter next value (q to quit): \n");
	}
	

}

//P170 连续输入所有分数数据至系统，输出显示，有n个数据，他们的平均值是多少？以及给出他们中的最高最低分，分数范围在（0-100.0）
void _7_9()
{
	const float MIN = 0.0;
	const float MAX = 100.0;
	float score = 0;
	float total = 0;

	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score(q to quit): ");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f is an invalid value. Try again:", score);
			continue;
		}
		printf("Accepting %0.1f:\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Enter next score (q to quit): ");
	}
	if (n > 0)
	{
		printf("Average of %d scores is %0.1f.\n", n, total / n);
		printf("Lowest = %0.1f, highest = %0.1f\n", min, max);
	}
	else
	{
		printf("No cvalid scores were entered.\n");
	}

}

//循环读取10个字符，并输出同样的字符的两种实现方式；
void _7_9_1()
{
	int count = 0;
	char ch;

	while (count < 10)		////执行完continue后，不执行count++，故这十个字符里不包括换行符；
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
		count++;
	}

	printf("\n********************************************************************\n");
	for (count = 0; count < 10; count++)	//执行完continue后，需要进行一次count++，所以这10个字符里是包含换行符的；
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
	}
}

//用一个循环计算矩形的面积。如果输入非数字字符，则终止程序；(自己的答案，更简单)
void _7_10_1()
{
	float width = .0, length = .0;
	//int i;

	printf("Please enter the length and width: \n");
	while (scanf("%f %f", &width, &length) == 2)
	{
		printf("Area = %.2lf\n", width * (double)length);
	}
	
}

//P172 用一个循环计算矩形的面积。如果输入非数字字符，则终止程序；(书上的的答案，更繁琐，但是是为了解释break的作用)
void _7_10_2()
{
	float width = .0, length = .0;
	//int i;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("length = %.2f: \n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("width = %.2f\n", width);

		printf("Area = %.2lf\n", width * (double)length);
		printf("Enter the length of the rectangle:\n");
	}
	printf("\nDone!\n");
}

//P173 该程序读入一个字母，然后打印这个字母所对应开头的动物名
void _7_11()
{
	char ch;

	printf("Give me a letter of the alphabet, and i will give ");
	printf("an animal name\nbegining with that letter.\n");
	printf("Please type in a letter; Type # to end my act.\n");
	while((ch = getchar()) != '#')	//输入#结束程序
	{
		if ('\n' == ch)		//跳过没用的换行符
			continue;
		if (islower(ch))	//正式开始程序内容
			switch (ch)
			{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			case 'c':
				printf("coati, recoonlike mammal\n");
				break;
			case 'd':
				printf("desman, aquatic molelike critter\n");
				break;
			case 'e':
				printf("echidna, the spiny anteater\n");
			case 'f':
				printf("fisher, brownish marten\n");
				break;
			default:
				printf("That's a stumper!\n");

			}
		else
			printf("I recognize only lowercase letters.\n");
		while (getchar() != '\n')		//实现只读取第一个字符，舍弃后面字符的功能代码
			continue;
		printf("Please type another letter or a #.\n");

	}

	printf("bye!\n");
}

//P176 多重标签 switch语句
//统计一句话里元音字母出现的次数；
void _7_12()
{
	int a_ct, e_ct, i_ct, o_ct, u_ct, other;
	char ch;

	a_ct = e_ct = i_ct = o_ct = u_ct = other = 0;
	printf("Enter some text(# to quit) : \t");
	while ((ch = getchar()) != '#')// 可以用这个语句以避免switch中的多重标签： swicth(toupper(ch))或者： swicth(tolower(ch))
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			a_ct++;
			break;
		case 'e':
		case 'E':
			e_ct++;
			break;
		case 'i':
		case 'I':
			i_ct++;
			break;
		case 'o':
		case 'O':
			o_ct++;
			break;
		case 'u':
		case'U':
			u_ct++;
			break;
		default: 
			other++;
			break;
		}

	}

	printf("number of vowels:	A	   E	   I	   O	   U\n");			//这个对齐是真的难调啊。
	printf("    \t\t     %4d	%4d	%4d	%4d	%4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
	printf("number of other charaters: \t\t%4d", other);


}








