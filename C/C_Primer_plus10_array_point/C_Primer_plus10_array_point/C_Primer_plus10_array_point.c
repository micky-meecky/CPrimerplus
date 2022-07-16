#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h> //使用rand()函数
#include <stdbool.h>



#define Month 12
#define Year 5
#define MAX_RAND 999
#define row 3
#define col 4



void _10_1(void);
void _10_2_3(void);
void _10_4(void);
void _10_5(void);
void _10_6(void);
void _10_7(void);
void _10_8(void);
void _10_9(void);

void _10_10(void);
long sum_1010(int* m, int n);

void _10_11(void);
long sum_10_11(int* start, int* end);

void _10_12(void);

void _10_14(void);
void showar(const double* array, int n);
void multiar(double* arrraystart, double* arrayend, double add);

void _10_15(void);

void _10_16(void);

void _10_17(void);
void sum_row(int ar[][col], int rows);
void sum_col(int[][col], int);
int sum2d(int(*ar)[4], int rows);


//void _10_18(void);
//int sum2d_18(int rows, int cols, int ar[rows][cols]);

void _10_19(void);
int sum(const int ar[], int n);
int sum2d_19(const ar[][col], int rows);

int main(void)
{
	//_10_1();
	//_10_2_3();
	//_10_4();
	//_10_5();
	//_10_6();
	//_10_7();
	//_10_8();
	//_10_9();
	//_10_10();
	//_10_11();
	//_10_12();
	//_10_14();
	//_10_15();
	//_10_16();
	//_10_17();
	//_10_18();
	_10_19();

	return 0;
}

/*
	10.1打印每个月的天数
*/
void _10_1(void)
{
	const int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//加了const就意味着该数组不能被重新赋值，为只读性质
	for (int i = 0; i < 12; i++)
	{
		printf("month %d has %d days.\n", i + 1, month[i]);
	}
}


/*
	10.2  使用前必须给数组初始化 / 列表项数与实际数组大小不一致 / 如果多了则会毫不留情报错
*/
void _10_2_3(void)
{
	int no_datas[4] = { 1};
	int i;
	for (i = 0; i < 4; i++)
		printf("%2d%14d\n", i, no_datas[i]);
}

/*
	10.4 计算未指定数组大小的数组元素个数
*/
void _10_4(void)
{
	const int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//加了const就意味着该数组不能被重新赋值，为只读性质
	printf("%d\n", sizeof month);
	printf("%d\n", sizeof month[0]);
	for (int i = 0; i < sizeof month / sizeof month[0]; i++)	//用sizeof计算整个数组所占字节大小，除以单个元素所占字节大小，即为数组大小
	{

		printf("month %d has %d days.\n", i + 1, month[i]);
	}
}

/*
	10.5 制定初始化器。
*/
void _10_5(void)
{
	const int month[12] = { 31,28,[3] = 30,31,[1] = 31 };	//加了const就意味着该数组不能被重新赋值，为只读性质
	printf("%d\n", sizeof month);
	printf("%d\n", sizeof month[0]);
	for (int i = 0; i < sizeof month / sizeof month[0]; i++)	//用sizeof计算整个数组所占字节大小，除以单个元素所占字节大小，即为数组大小
	{

		printf("month %d has %d days.\n", i + 1, month[i]);
	}
}

/*
	10.6 使用越界的数组可能会造成其他变量值改变的后果
*/
void _10_6(void)
{
	int v = 44;
	int a[4];
	int v2 = 88;
	int i;

	printf("v = %d, v2 = %d\n", v, v2);
	for (i = -1; i <= 4; i++)
		a[i] = 2 * i + 1;

	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, a[i]);
	printf("v = %d, v2 = %d\n", v, v2);
	printf("address of a[-1]: %p\n", &a[-1]);
	printf("address of a[4]: %p\n", &a[4]);
	printf("address of v: %p\n", &v);
	printf("address of v2: %p\n", &v2);


}


/*
	10.7 计算每年的总降水量，年均降水量和5年中每月的均降水量
*/
void _10_7(void)
{
	float rain[Year][Month];
	int i, j;
	int y, m;
	float subtot, total;

	//for (i = 0; i < 12; i++)
	//	printf("%10f", (double)1000.0/rand());

	printf("\n");

	for (i = 0; i < Year; i++)
		for (j = 0; j < Month; j++)
			rain[i][j] = (rand() / (double)(MAX_RAND / 1));

	/*以下是为了检测生成的随机浮点数是否成功了*/
	for (i = 0; i < Year; i++)
	{
		for (j = 0; j < Month; j++)
			printf("%8.2f", rain[i][j]);
		printf("\n");
	}
	/*      以上是为了检测生成的随机浮点数是否成功了      */

	printf("YEAR           RAINFALL  (inches)\n");
	for (y = 0, total = 0; y < Year; y++)
	{
		for (m = 0, subtot = 0; m < Month; m++)
			subtot += rain[y][m];
		printf("%d         %10.2f\n ", 2010 + y, subtot);
		total += subtot;
	}

	printf("\nThe yearly average is %.2f inches.\n\n", total / Year);
	printf("MONTHLY AVERAGE :\n\n");
	printf("1	2	3	4	5	6	7	8	9	10	11	12\n");

	for (m = 0; m < Month; m++)
	{
		for (y = 0, subtot = 0; y < Year; y++)
			subtot += rain[y][m];
		printf("%.2f   ", subtot / Year);
	}
	printf("\n");
	printf("%s", rain == &rain[0][0] ? "true" : "false");		//验证数组名是该数组的第一个元素的地址


}

/*
	10.8 讨论指针地址的程序，看对地址+1，+2 。。。有什么变化
*/
void _10_8(void)
{
	short dates[4];
	short * pti;
	double bills[4];
	short index;
	double* ptf;

	pti = dates;
	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < 4; index++)
		printf("pointers + %d: %10p %10p\n",index,pti + index,ptf + index);




}


/*
	10.9 用的第一个程序，改了这里的数组表示法为指针表示法  
*/
void _10_9(void)
{
	const int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//加了const就意味着该数组不能被重新赋值，为只读性质
	for (int i = 0; i < 12; i++)
	{
		printf("month %d has %d days.\n", i + 1, *(month + i));		//用的第一个程序，改了这里的数组表示法为指针表示法
	}
}

/*
	10.10 数组元素之和，用的指针和元素数量变量传递，以让函数知道对数组何处开始，何处结束；
*/
void _10_10(void)
{
	int marbles[10] = { 10,20,10,21,12,10,11,11,21,20 };
	long answer = 0;

	answer = sum_1010(marbles, 10);
	printf("The total number of marbles is %4d.\n", answer);
	printf("The size of marbles is %zd.\n", sizeof marbles);




}

long sum_1010(int* m, int n)
{
	long t;

	int i;
	for (t = 0, i = 0; i < n; i++)
	{
		t += *(m + i);
	}
	printf("The sizeof m is %zd bytes.\n", sizeof m);
	printf("The address of m is %p.\n", m);


	return t;
}


/*
	10.11 用纯指针形参传递信息
*/
void _10_11(void)
{
	int marbles[10] = { 10,20,10,21,12,10,11,11,21,20 };
	long answer = 0;

	answer = sum_10_11(marbles, &marbles[9]);
	printf("The total number of marbles is %4d.\n", answer);
	printf("The size of marbles is %zd.\n", sizeof marbles);
}
long sum_10_11(int* start, int* end)
{
	long total = 0;
	while (start <= end)
	{
		
		total += *start;
		start++;
		//total += *(start++);最好这样写，简洁
	}
	return total;
}

/*
	该程序表明了指针运算中的优先级
*/

void _10_12(void)
{
	int data[2] = { 100,200 };
	int moredata[2] = { 300,400 };

	int* p1, * p2, * p3;
	p1 = p2 = data;
	p3 = moredata;
	printf(" *p = %d, *p2 = %d,   *p3 = %d\n", *p1, *p2, *p3);
	printf("*p1++ = %d, *++p2 = %d,  (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf("*p1 = %d, *p2 = %d,   *p3 = %d\n", *p1, *p2, *p3);


}

/*
	10.13太简单，不需要把程序打出来，把程序与结果看懂就行了
*/

/*
	10.14 保护数组中的数据，用const

*/
void _10_14(void)
{
	double ar[5] = { 10.2,20.0,25.25,50,22.22 };
	double a = 2.5;

	printf("The original array is:\n");
	showar(ar, 5);
	multiar(ar, &ar[4], a); //对所有数组元素乘上2.5
	printf("\n");
	printf("The arrar after calling multiar:\n");
	showar(ar, 5);
	printf("\n");

}


void showar(const double* array, int n)	//指向const的指针不会更改指向地址中的值 
{
	int i = 0;
	for (i; i < n; i++)
		printf("%8.3f", array[i]);
}

void multiar(double* arraystart, double* arrayend, double add)
{
	//add = 2.5;		//一定要检查函数声明有没有改数据类型！！！
	while (arraystart <= arrayend)
	{
		*(arraystart++) *= add;
	}
}


/*
	10.15 指针最难的部分，多维数组与指针的关系，比较绕，多看多想，慢才是快
*/
void _10_15(void)
{
	int zippo[4][2] = { {4,2},{6,8},{1,3} ,{5,7} };

	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
	printf("zippo[0] = %p,zippo[0] + 1 = %p\n",zippo, zippo[0] + 1);
	printf(" *zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("*zippo[0] = %d\n", *zippo[0]);
	printf("**zippo = %d\n", **zippo);
	printf("zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo + 2) +1) = %d\n", *(*(zippo + 2) + 1));

}


/*
	10.16 通过指针获取zippo信息，如何声明一个指针遍历欧昂指向一个二维数组。见书上P261页。
*/
void _10_16(void)
{
	int zippo[4][2] = { {4,2},{6,8},{1,3} ,{5,7} };
	int(*pz)[2];	//这是声明了一个pz指向了一个内含两个int类型的值的数组
	//int* pz[2];		//这是声明了一个内含两个指针的数组，每个元素都是指向一个int的指针

	pz = zippo;
	printf("pz = %p,			 pz + 1 = %p\n", pz, pz + 1);
	printf("pz[0] = %p,		pz[0] + 1 = %p\n", pz, pz[0] + 1);
	printf(" *pz = %p,		*pz + 1 = %p\n", *pz, *pz + 1);
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*pz[0] = %d\n", *pz[0]); 
	printf("**pz = %d\n", **pz);
	printf("pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz + 2) +1) = %d\n", *(*(pz + 2) + 1));


}

void _10_17(void)
{
	int junk[row][col] = {
	{ 2, 4, 6, 8},
	{ 3, 5, 7, 9},
	{ 12, 10, 8, 9 },
	};

	sum_row(junk, row);
	sum_col(junk, col);
	printf("Sum of all elements = %d\n", sum2d(junk, row));


}
void sum_row(int ar[][col], int rows)
{
	int r, c, tot = 0;

	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < col; c++)
		{
			tot += ar[r][c];
		}
		printf("row %d: sum = %d.\n", r, tot);

	}
}
void sum_col(int ar[][col], int cols)
{
	int r, c, tot = 0;
	for (c = 0; c < cols; c++)
	{
		for (r = 0; r < row; r++)
		{
			tot += ar[r][c];
		}
		printf("col %d: sum = %d.\n", c, tot);

	}
}
int sum2d(int(*ar)[4], int rows)
{
	int r, c, tot = 0;
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < col; c++)
			tot += ar[r][c];
	}
	return tot;
}


/*
	10.18 使用变长数组的函数。用变量代替数组行列数
		Vs code 用不了变长数组？
*/


//void _10_18(void)
//{
//	int i, j;
//	int rs = 3;
//	int cs = 10;
//	int junk[row][col] = { {2,4,6,8},{3,5,7,9},{12,10,8,6} };
//
//	int morejunk[row - 1][col + 2] = { {20,30,40,50,60,70,},{5,6,7,8,9,10} };
//
//	int varr[rs][cs];
//
//	for (i = 0; i < rs; i++)
//		for (j = 0; j < cs; j++)
//			varr[i][j] = i * j + j;
//
//	printf("3x4 array\n");
//	printf("sum of all elements = %d\n", sum2d_18(row, col, junk));
//
//	printf("2x6 array\n");
//	printf("sum of all elements = %d\n", sum2d_18(row - 1, col + 2, morejunk));
//
//	printf("3x10 array\n");
//	printf("sum of all elements = %d\n", sum2d_18(rs, cs, varr));
//
//}
//
//int sum2d_18(int rows,int cols,int ar[rows][cols] )
//{
//	int r, c, tot = 0;
//	for (r = 0; r < rows; r++)
//	{
//		for (c = 0; c < col; c++)
//			tot += ar[r][c];
//	}
//	return tot;
//}


/*
	10.19 复合字面量的使用，必须创建的同时使用，它没有数组名，但依然是数组;
*/
void _10_19(void)
{
	int total1, total2, total3;
	int* pt1;
	int(*pt2)[col];

	pt1 = (int[2]){ 10,20 };
	pt2 = (int[2][col]){ {1,2,3,-9},{4,5,6,-8} };

	total1 = sum(pt1, 2);
	total2 = sum2d_19(pt2, 2);
	total3 = sum((int[]) { 4, 4, 4, 5, 5, 5 }, 6);
	printf("total1 = %d\n", total1);
	printf("total2 = %d\n", total2);
	printf("total3 = %d\n", total3);



}

int sum(const int ar[], int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];

	return total;


}

int sum2d_19(const ar[][col], int rows)
{
	int r;
	int c, tot = 0;


		for (r = 0; r < rows; r++)
			for (c = 0; c < col; c++)
				tot += ar[r][c];

		return tot;
	
}
