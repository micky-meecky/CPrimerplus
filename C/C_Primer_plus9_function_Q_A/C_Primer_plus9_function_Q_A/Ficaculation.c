#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "911.h"

int Ficaculation(int loop, int recursion, int seriesnum, int sumnum)
{
	int i,en = 0;
	if (loop != 0)
	{
		printf("\t\t\tIn loop, it is: \n");
		filoop(loop);
		printf("\n\n");
	}
	if (recursion != 0)
	{
		printf("\t\t\tIn recursion, it is: \n");
		printf("\t\t\t");
		for (i = 1; i <= recursion; i++)
		{
			printf("%d\t", firecursion(i));
			en++;
			if (en >= 10)
			{
				en = 0;
				printf("\n\t\t\t");
			}
		}

		firecursion(recursion);		//由于这个是双递归函数，故会以指数级地消耗内存，并且运行时间长。故数不能太大 
		printf("\n\n");
	}
	if (seriesnum != 0)
	{
		printf("\t\t\tthe num you want is: \n");
		fiseriesnum(seriesnum);
		printf("\n\n");
	}
	if (sumnum != 0)
	{
		printf("\t\t\tthe sum you want is: \n");
		fisum(sumnum);
		printf("\n\n");
	}

}

void filoop(int loop)	//循环实现数列函数
{
	int a = 1, b = 1,en = 0;	//en计列数变量
	int sum = 0;
	int i = 1, j = 1;

	if (loop == 1)
	{
		printf("\t\t\t1\t\n");
	}
	if (loop == 2)
	{
		printf("\t\t\t1\t1\t\n");
	}
	if (loop >= 3)
	{
		printf("\t\t\t1\t1\t");
		for (i = 3; i <= loop; i++, en++)
		{
			sum = a + b;
			a = b;
			b = sum;
			printf("%d\t",sum);
			if (en >= 7)	//每行输出10个数字
			{
				en = 0;
				printf("\n\t\t\t");
			}
		}
	}
}

int firecursion(int recursion)
{
	int a = 1, b = 1, en = 0;	//en计列数变量
	int sum = 0;
	//int i = 1, j = 1;
	if (recursion == 1)
	{
		sum = 1;
		en++;
		return sum;
		//printf("1\t");
	
	}
	if (recursion == 2)
	{
		sum = 1;
		en++;
		return sum;
		//printf("1\t");
	
	}
	if (recursion > 2)
	{
		sum = firecursion(recursion - 2) + firecursion(recursion - 1);
		en++;
		if (en >= 7)	//每行输出10个数字
		{
			en = 0;
			printf("\n\t\t\t");
		}
	}
	//printf("%d\t", sum);
	return sum;
}

void fiseriesnum(int seriesnum)
{
	int a = 1, b = 1;	//en计列数变量
	int sum = 0;
	int i = 1, j = 1;
	printf("\t\t\t");
	if (seriesnum == 1)
	{
		printf("1\t\n");
	}
	if (seriesnum == 2)
	{
		printf("1\t\n");
	}
	if (seriesnum >= 3)
	{
		for (i = 3; i <= seriesnum; i++)
		{
			sum = a + b;
			a = b;
			b = sum;
		}
		printf("%d\t\n", sum);
	}

}

void fisum(int sumnum)
{
	int a = 1, b = 1;	//en计列数变量, b必须赋值为1，因为第一个1还没加到
	int sum = 0;
	int total = 1;
	int i = 1, j = 1;

	if (sumnum == 1)
	{
		sum = 1;
		total = 1;
		
	}
	if (sumnum == 2)
	{
		sum = 1;
		total = 2;
	}
	if (sumnum >= 3)
	{
		for (i = 2; i <= sumnum; i++)
		{
			sum = a + b;
			a = b;
			total += b;
			b = sum;
		}
	}
	printf("\t\t\t%d", total);
}

