#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h> //使用rand()函数
#include <stdbool.h>
#include "C_Primer_plus10_array_point_Q_A.h"

int main(void)
{
	//_101();
	//_102();
	//_10_345();
	//_106();
	//_107();
	//_108();
	//_109_bc();
	//_109_nbc();
	//_1010();
	//_1011();
	//_1012();
	_1013();
	//_1014();

	return 0;
}

/*
	101.修改程序清单10.7的rain.c程序，用指针进行计算（仍然要声明并初始化数组）
	10.7 计算每年的总降水量，年均降水量和5年中每月的均降水量
*/
void _101(void)
{

	float rain[Year][Month];
	int i, j;
	int y, m;
	float msubtot, total;

	//for (i = 0; i < 12; i++)
	//	printf("%10f", (double)1000.0/rand());

	//printf("\n");

	for (i = 0; i < Year; i++)
		for (j = 0; j < Month; j++)
			rain[i][j] = (rand() / (double)(MAX_RAND / 1));

	/*以下是为了检测生成的随机浮点数是否成功了*/
	for (i = 0; i < Year; i++)
	{
		for (j = 0; j < Month; j++)
			printf("%6.2f", rain[i][j]);
		printf("\n");
	}
	/*      以上是为了检测生成的随机浮点数是否成功了      */


	printf("YEAR           RAINFALL  (inches)\n");
	total = yearsum(rain, Year);
	printf("\nThe yearly average is %.2f inches.\n\n", total / Year);


	printf("MONTH           RAINFALL  (inches)\n");
	monthsum(rain, Year);
	printf("\nMONTHLY AVERAGE :\n");
	for (y = 0; y < Month; y++)
		printf("%d\t ", y + 1);
	printf("\n");
	monthave(rain, Year);
	printf("\n");
}
double yearsum(const float ar[][Month], int years)
{
	int y, m;
	double total, subtot;
	for (y = 0, total = 0; y < years; y++)
	{
		for (m = 0, subtot = 0; m < Month; m++)
			subtot += ar[y][m];
		printf("%d           %10.2lf\n", 2010 + y, subtot);
		total += subtot;
	}
	return total;
}
double monthsum(const float (*ar)[Month], int years)
{
	int y, m;
	double subtot = 0.0;
	for (m = 0; m < Month; m++)
	{
		for (y = 0; y < years; y++)
			subtot += ar[y][m];
		printf("%d            %10.2lf\n", m+1, subtot);
	}
	return subtot;
}
double monthave(const float(*ar)[Month], int years)
{
	int y, m;
	double subtot = 0.0;
	for (m = 0; m < Month; m++)
	{
		for (y = 0; y < years; y++)
			subtot += ar[y][m];
		printf("%.2lf\t ", subtot / (double)(m+1.0));
	}
	return 0;
}

/*
	102 .编写一个程序，初始化一个double类型的数组，然后把该数组的内容拷贝至3个其他数组中（在main()中声明这4个数组）。使用带数组表示法的函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。第3个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指针。也就是说，给定以下声明，则函数调用如下所示：
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

*/
void _102(void)
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	printf("copy 1st array[1]: \n\n");
	copy_arr(target1, source, 5);
	printf("\ncopy 2cd array[2]: \n\n");
	copy_ptr(target2, source, 5);
	printf("\ncopy 3rd array[3]: \n\n");
	copy_ptrs(target3, source, source + 5);


}
void copy_arr(double ar1[], double s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ar1[i] = s[i];
		printf("%.1lf\t", ar1[i]);
	}
}
void copy_ptr(double *ar2, double *s, int n)

{
	int i;
	for (i = 0; i < n; i++)
	{
		*(ar2 + i) = *(s + i);
		printf("%.1f\t", ar2[i]);
		
	}
}
void copy_ptrs(double ar3[], double *sstart, double *send)
{
	int i = 0;
	while (sstart < send)
	{
		ar3[i] = *sstart;
		printf("%.1lf\t", ar3[i]);
		sstart++;
		i++;
	}
}

/*
	103.编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的程序中测试该函数
	104.编写一个函数，返回储存在double类型数组中最大值的下标，并在一个简单的程序中测试该函数
	105.编写一个函数，返回储存在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数
*/
void _10_345(void)
{
	int max = 0,xb = 0, min = 0;
	int a[4] = { 1, 2, 13, 4 };
	max = _10_345_fmax(a, 4, &xb);
	printf("So in the array, the max = %d. \nAnd the subscript is %d. \n", max, xb);
	min = _10_345_fmin(a, 4);
	printf("So in the array, the max = %d. \n", min);

	printf("So the gap is %d.\n", max - min);
}
int _10_345_fmax(int a[], int n, int* xb)
{
	int i, m = a[0];
	for (i = 0; i < n; i++)
	{
		if (m < a[i])
		{
			m = a[i];
			*xb = i;
		}
	}
	return m;
}
int _10_345_fmin(int* a, int n)
{
	int i, min = *a;
	for (i = 0; i < n; i++)
	{
		if (min > *(a + i))
		{
			min = *(a + i);
		}
	}
	return min;
}

/*
	106.编写一个函数，把double类型数组中的数据倒序排列，并在一个简单的程序中测试该函数
*/
void _106(void)
{
	double array[9] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
	int i;
	printf("The original list is :\n");
	for (i = 0; i < 9; i++)
		printf("%.1lf\t", array[i]);
	_106_reverse(array , 9);
	printf("\nBey!\n");

}
void _106_reverse(double* ar, int n)
{
	int j = n - 1;
	printf("\nThe reverted list is:\n");
	for (j; j >= 0; j--)
		printf("%.1lf\t", *(ar + j));
}

/*
	107.编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中
	（因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）
*/

void _107(void)
{
	double s[3][2] = { {1,2} ,{3,4}, {5,6} };
	double t1[3][2];
	int r, c;
	int i;
	printf("s[3][2] is :\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 2; c++)
			printf("%.1lf\t", s[r][c]);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		_107_copy_ptrs(t1[i],s[i],s[i]+2);
	}

	printf("\nt1[3][2] is :\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 2; c++)
			printf("%.1lf\t", t1[r][c]);
		printf("\n");
	}
}
void _107_copy_ptrs(double* ar3, double* sstart, double* send)
{
	int i = 0;
	//ar3 = sstart;
	while (sstart < send)
	{
		*ar3 = *(sstart++);
		ar3++;
	}

}

/*
	108.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5个元素拷贝至内含3个元素的数组中。
	该函数本身不需要修改，只需要选择合适的实际参数
	（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）
*/
void _108(void)
{
	int i;
	double s[7] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0 };

	double t2[3];

	printf("The original list is :\n");
	for (i = 0; i < 7; i++)
		printf("%.1lf\t",s[i]);
	printf("\nThe t2 list is :\n");
	copy_ptrs(t2, &s[2], &s[5]);


	/*for (i = 0; i < 3; i++)
		printf("%.1lf\t", t2[i]);*/


}


/*
	109编写一个程序，初始化一个double类型的3×5二维数组.
	使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
	还要编写一个以变长数组为形参的函数以显示两个数组的内容。
	这两个函数应该能处理任意N×M数组
	（如果编译器不支持变长数组，就使用传统C函数处理N×5的数组）

*****************************
	这是变长数组的部分。
*****************************
*/

void _109_bc(void)
{
	int r, c;
	r = 3;
	c = 5;
	double s[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//这里注意方括号中只能是整形常量表达式，变量形式如同s[r][c]是不被允许的
	double t3[3][5];

	//_109_bc_copy(r, c, s, t3);

	//printf("s[%d][%d] = \n", r, c);
	//_109_bc_display(r, c, s);

	//printf("\n");

	//printf("t3[%d][%d] = \n", r, c);
	//_109_bc_display(r, c, t3);
	//printf("\n");  

}
//
//void _109_bc_copy(int i, int j, double s[i][j], double t[i][j])
//{
//	int a, b;
//	for (a = 0; a < i; a++)
//	{
//		for (b = 0; b < j; b++)
//			t[a][b] = s[a][b];
//	}
//}
//
//void _109_bc_display(int i, int j, double dip[i][j])
//{
//	int a, b;
//	for (a = 0; a < i; a++)
//	{
//		for (b = 0; b < j; b++)
//			printf("%.1lf\t", dip[a][b]);
//		printf("\n");
//	}
//}


/*
	109编写一个程序，初始化一个double类型的3×5二维数组.
	使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
	还要编写一个以变长数组为形参的函数以显示两个数组的内容。
	这两个函数应该能处理任意N×M数组
	（如果编译器不支持变长数组，就使用传统C函数处理N×5的数组）

*****************************
	这是非变长数组的部分。
*****************************
*/
void _109_nbc(void)
{
	int r = 0, c = 0;
	double s[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };//这里注意方括号中只能是整形常量表达式，变量形式如同s[r][c]是不被允许的
	double t3[3][5];


	_109_nbc_copy(s,t3,3);
	_109_nbc_getrc(&r, &c,s,3);

	printf("s[%d][%d] = \n", r, c);
	_109_nbc_display(s,3);

	printf("\n");

	printf("t3[%d][%d] = \n", r, c);
	_109_nbc_display(t3,3);
	printf("\n");  

}
void _109_nbc_copy(double s[][col], double t3[][col], int rows)
{
	int a, b;
		for (a = 0; a < rows; a++)
		{
			for (b = 0; b < col; b++)
				t3[a][b] = s[a][b];
		}
}
void _109_nbc_display(double (*disp)[col], int rows)
{
	int a, b;
		for (a = 0; a < rows; a++)
		{
			for (b = 0; b < col; b++)
				printf("%.1lf\t", disp[a][b]);
			printf("\n");
		}
}
void _109_nbc_getrc(int* x, int* y,double (*s)[col],int rows)    //这个函数在这里没啥用，也许后面学成之后有用！！！
{
	*y = col;
	*x = rows;

}

/*
	1010.编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第 3 个数组中
	。也就是说，如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。
	函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数
*/

void _1010(void)
{
	int r, c;
	//_1010_getdigit(&r, &c);
	int s1[2][2];
	int s2[2][2];
	int s3[2][2];
	
	printf("Please enter number into the s1 array: \n");
	_1010_getdigit(s1,c10);
	printf("\nPlease enter number into the s2 array: \n");
	_1010_getdigit(s2, c10);

	printf("\n\nYou have had two arrays to be prepared to caculate: \n1st: ");
	_1010_nbc_display(s1, 2);
	printf("\n2nd:\n");
	_1010_nbc_display(s2, 2);

	_1010_caculate(s1, s2, s3, 2);
	printf("\nSo the s3 = \n");
	_1010_nbc_display(s3, 2);

	printf("\nBey~!!!\n");



}
//下面这个函数目前用不了，等到学了第12章后用malloc()可以解决在非c99标准下的数组大小只能是常量的问题
/*
void _1010_getdigit(int* r, int* c)
{

	printf("Please enter the dimensional number(illegal character to quit!): ");
	while (scanf("%d%d", r, c) == 2)
	{
		if (getchar() != '\n')
			continue;
	}
}
*/
void _1010_getdigit(int(*s)[c10], int rows)
{
	int i, j;
	char ch;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < c10; j++)
		{
			while (scanf("%d", &s[i][j]) != 1)
			{
				while (ch = getchar() != '\n')
					putchar(ch);
				printf(" is not a legle number.Try again:");
			}
			while (getchar() != '\n')
				continue;
		}
		printf("the %d row number has complete.", i+1);
		printf("\n");
	}
}
void _1010_caculate(int s1[][c10], int s2[][c10], int s3[][c10], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < c10; j++)
			s3[i][j] = s1[i][j] + s2[i][j];//数组表示法
	}
}
void _1010_nbc_display(int(*disp)[c10], int rows)
{
	int a, b;
	for (a = 0; a < rows; a++)
	{
		for (b = 0; b < c10; b++)
			printf("%d\t", disp[a][b]);
		printf("\n");
	}
}

/*
	1011.编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。
	该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示出各元素的新值。
	编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。
	这两个函数都以数组名和行数作为参数.
*/
void _1011(void)
{
	int s[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };


	printf("\nbefore:\n");
	printf("s = \n");
	_1011_display(s, 3);

	_1011_double(s, 3);

	printf("\nafter:\n");
	printf("s = \n");

	_1011_display(s, 3);

}
void _1011_display(const int(*s)[col], int rows)
{
	int a, b;
	for (a = 0; a < rows; a++)
	{
		for (b = 0; b < col; b++)
			printf("%d\t", s[a][b]);
		printf("\n");
	}
}
void _1011_double(int s[][col], int rows)
{
	int a, b;
	for (a = 0; a < rows; a++)
	{
		for (b = 0; b < col; b++)
			s[a][b] *= 2;
	}
}

/*
	1012.重写程序清单10.7的rain.c程序，把main()中的主要任务都改成用函数来完成
	10.7 计算每年的总降水量，年均降水量和5年中每月的均降水量
*/
void _1012(void)
{
	float rain[Year][Month];
	int i, j;
	int y, m;
	float subtot, total;

	//for (i = 0; i < 12; i++)
	//	printf("%10f", (double)1000.0/rand());

	printf("generate an array fulled with data\n");
	_1012_generate_array(rain ,Year);

	/*以下是为了检测生成的随机浮点数是否成功了*/

	 _1012_display(rain, Year);

	/*以上是为了检测生成的随机浮点数是否成功了*/

	total = _1012_subtot(rain, Year);		//年总降水量
	_1012_yearaverage(rain, Year);		//年均降水量
	_1012_monthaverage(rain, Year);		//月平均降水量

	printf("\nThe yearly average is %.2f inches.\n\n", total / Year);
	printf("rain == &rain[0][0] ?\n%s", rain == &rain[0][0] ? "true" : "false");		//验证数组名是该数组的第一个元素的地址
	printf("\n");

}
void _1012_generate_array(float r[][Month],int year)
{
	int i, j;
	for (i = 0; i < year; i++)
		for (j = 0; j < Month; j++)
			r[i][j] = (rand() / (double)(MAX_RAND / 1));
}
void _1012_display(const float r[][Month], int year)
{
	int i, j;
	for (i = 0; i < year; i++)
	{
		for (j = 0; j < Month; j++)
			printf("%.1f\t", r[i][j]);
		printf("\n");
	}
}
float _1012_subtot(float r[][Month], int year)
{
	float total, subtot;
	int y, m;
	printf("\nYEAR           RAINFALL  (inches)\n");
	for (y = 0, total = 0; y < year; y++)
	{
		for (m = 0, subtot = 0; m < Month; m++)
			subtot += r[y][m];
		printf("%d         %10.2f\n", 2010 + y, subtot);
		total += subtot;
	}
	return total;
}
void _1012_yearaverage(float r[][Month], int year)
{
	float subtot = 0.0;
	int m, y;
	printf("\nYEAR AVERAGE :\n");
	printf("2010    2011    2012    2013    2014\n");

	for (m = 0; m < year; m++)
	{
		subtot = 0.0;
		for (y = 0; y < Month; y++)
			subtot += r[m][y];
		printf("%.1f    ", subtot / (float)Month);
	}
	printf("\n");
}
void _1012_monthaverage(float r[][Month], int year)
{
	float subtot;
	int m, y;
	printf("\nMONTHLY AVERAGE :\n");
	printf("1	2	3	4	5	6	7	8	9	10	11	12\n");

	for (m = 0; m < Month; m++)
	{
		for (y = 0, subtot = 0; y < year; y++)
			subtot += r[y][m];
		printf("%.2f\t", subtot / year);
	}
	printf("\n");
	

}

/*
	1013.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。
	a.把用户输入的数据储存在3×5的数组中
	b.计算每组（5个）数据的平均值
	c.计算所有数据的平均值
	d.找出这15个数据中的最大值
	e.打印结果 每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。
	完成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数
	————————————————
*/
void _1013(void)
{
	double sum = 0;
	double a[3][col];

	_1013_getdata(a, 3);
	printf("\nHere is the array: \n");
	_1013_checkdata(a, 3);

	printf("\n");
	for (int k = 0; k < 3; ++k) 
	{
		printf("%d sequence's average is :%.2lf \n", k + 1,_1013_eachaver(a[k]) / 5.0);
	}
	printf("\n");
	printf("all datas's average is : %.2lf\n", _1013_allaver(a) / 15.0);
	printf("\n");
	printf("The max number is: %.2lf\n", _1013_max(*a, *a + 15));
}
void _1013_getdata(double a[][col], int rows)
{
	char ch;
	printf("input a sequence of 5 number(pc receive 5 correct number one time): \n");
	for (int i = 0; i < rows; i++)
	{
		
		for (int j = 0; j < col; j++)
		{
			
			while (scanf("%lf", &a[i][j]) != 1)
			{
				while (ch = getchar() != '\n')
					putchar(ch);
				printf(" is not a legle number.Try again:");
			}
		
		}	
		while (getchar() != '\n')
				continue;
		printf("input a sequence of 5 number again:\n");
	}
}
void _1013_checkdata(double a[][col], int rows)
{
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < col; j++)
		{
			printf("%.2lf\t", a[i][j]);
		}
		printf("\n");

	}
}
double _1013_eachaver(double *a)
{
	
	double tot = 0;
	for (int i = 0; i < col; i++)
	{
		tot += a[i];
	}
	return tot;
}
double _1013_allaver(double a[][col])
{
	double alltot = 0;
	for (int i = 0; i < 3; i++)
	{
		alltot += _1013_eachaver(a[i]);
	}
	return alltot;
}
double _1013_max(double *start, double *end)
{
	double max = 0.0;
	while (start < end)
	{
		max = (*start > max) ? *start : max;
		start++;
	}
	return max;
}

/*
	1014.以变长数组作为函数形参，完成编程练习13
*/
//
//void _1014(void)
//{
//	double a[3][5];
//	for (int i = 0; i < 3; ++i)
//	{
//		printf("input a sequence of 5 number:");
//		for (int j = 0; j < 5; ++j) {
//			scanf("%lf", &a[i][j]);
//		}
//	}
//	double sum = 0;
//	for (int k = 0; k < 3; ++k) {
//		printf("%.2lf ", _1014_aver(5, a[k]));
//	}
//	printf("\n");
//	printf("%.2lf\n", _1014_allaver(3, 5, a));
//	printf("%.2lf\n", _1014_maxx(3, 5, a));
//}
//double _1014_aver(int a, double b[a])
//{
//	double sum = 0;
//	for (int i = 0; i < a; ++i) {
//		sum += b[i];
//	}
//	return sum / 5;
//}
//
//double _1014_allaver(int b, int c, double a[b][c])
//{
//	double sum = 0;
//	for (int i = 0; i < b; ++i) {
//		sum += aver(c, a[i]);
//	}
//	return sum / 3;
//}
//
//double _1014_maxx(int a, int b, double c[a][b])
//{
//	double max = 0;
//	for (int i = 0; i < a; ++i) {
//		for (int j = 0; j < b; ++j) {
//			max = max > c[i][j] ? max : c[i][j];
//		}
//	}
//	return max;
//}


