#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h> //ʹ��rand()����
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
	101.�޸ĳ����嵥10.7��rain.c������ָ����м��㣨��ȻҪ��������ʼ�����飩
	10.7 ����ÿ����ܽ�ˮ���������ˮ����5����ÿ�µľ���ˮ��
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

	/*������Ϊ�˼�����ɵ�����������Ƿ�ɹ���*/
	for (i = 0; i < Year; i++)
	{
		for (j = 0; j < Month; j++)
			printf("%6.2f", rain[i][j]);
		printf("\n");
	}
	/*      ������Ϊ�˼�����ɵ�����������Ƿ�ɹ���      */


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
	102 .��дһ�����򣬳�ʼ��һ��double���͵����飬Ȼ��Ѹ���������ݿ�����3�����������У���main()��������4�����飩��ʹ�ô������ʾ���ĺ������е�1�ݿ�����ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ�������Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ�������3��������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ�롣Ҳ����˵������������������������������ʾ��
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
	103.��дһ�����������ش�����int���������е����ֵ������һ���򵥵ĳ����в��Ըú���
	104.��дһ�����������ش�����double�������������ֵ���±꣬����һ���򵥵ĳ����в��Ըú���
	105.��дһ�����������ش�����double�������������ֵ����Сֵ�Ĳ�ֵ������һ���򵥵ĳ����в��Ըú���
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
	106.��дһ����������double���������е����ݵ������У�����һ���򵥵ĳ����в��Ըú���
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
	107.��дһ�����򣬳�ʼ��һ��double���͵Ķ�ά���飬ʹ�ñ����ϰ2�е�һ�����������Ѹ������е����ݿ�������һ����ά������
	����Ϊ��ά��������������飬���Կ���ʹ�ô���һά����Ŀ������������������е�ÿ�������飩
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
	108.ʹ�ñ����ϰ2�еĿ�����������һ���ں�7��Ԫ�ص������е�3����5��Ԫ�ؿ������ں�3��Ԫ�ص������С�
	�ú���������Ҫ�޸ģ�ֻ��Ҫѡ����ʵ�ʵ�ʲ���
	��ʵ�ʲ�������Ҫ���������������С��ֻ��Ҫ������Ԫ�صĵ�ַ�ʹ�����Ԫ�صĸ�����
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
	109��дһ�����򣬳�ʼ��һ��double���͵�3��5��ά����.
	ʹ��һ������䳤����ĺ������俽������һ����ά�����С�
	��Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�
	����������Ӧ���ܴ�������N��M����
	�������������֧�ֱ䳤���飬��ʹ�ô�ͳC��������N��5�����飩

*****************************
	���Ǳ䳤����Ĳ��֡�
*****************************
*/

void _109_bc(void)
{
	int r, c;
	r = 3;
	c = 5;
	double s[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//����ע�ⷽ������ֻ�������γ������ʽ��������ʽ��ͬs[r][c]�ǲ��������
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
	109��дһ�����򣬳�ʼ��һ��double���͵�3��5��ά����.
	ʹ��һ������䳤����ĺ������俽������һ����ά�����С�
	��Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�
	����������Ӧ���ܴ�������N��M����
	�������������֧�ֱ䳤���飬��ʹ�ô�ͳC��������N��5�����飩

*****************************
	���ǷǱ䳤����Ĳ��֡�
*****************************
*/
void _109_nbc(void)
{
	int r = 0, c = 0;
	double s[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };//����ע�ⷽ������ֻ�������γ������ʽ��������ʽ��ͬs[r][c]�ǲ��������
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
void _109_nbc_getrc(int* x, int* y,double (*s)[col],int rows)    //�������������ûɶ�ã�Ҳ�����ѧ��֮�����ã�����
{
	*y = col;
	*x = rows;

}

/*
	1010.��дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ�����浽�� 3 ��������
	��Ҳ����˵���������1�а�����ֵ��2��4��5��8������2�а�����ֵ��1��0��4��6����ô�ú�����3��4��9��14������3�����顣
	��������3����������һ�������С����һ���򵥵ĳ����в��Ըú���
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
//�����������Ŀǰ�ò��ˣ��ȵ�ѧ�˵�12�º���malloc()���Խ���ڷ�c99��׼�µ������Сֻ���ǳ���������
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
			s3[i][j] = s1[i][j] + s2[i][j];//�����ʾ��
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
	1011.��дһ����������һ��int���͵�3��5��ά���飬���ú��ʵ�ֵ��ʼ������
	�ó����ӡ�����е�ֵ��Ȼ���ֵ����������ԭֵ��2����������ʾ����Ԫ�ص���ֵ��
	��дһ��������ʾ��������ݣ��ٱ�дһ�������Ѹ�Ԫ�ص�ֵ������
	����������������������������Ϊ����.
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
	1012.��д�����嵥10.7��rain.c���򣬰�main()�е���Ҫ���񶼸ĳ��ú��������
	10.7 ����ÿ����ܽ�ˮ���������ˮ����5����ÿ�µľ���ˮ��
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

	/*������Ϊ�˼�����ɵ�����������Ƿ�ɹ���*/

	 _1012_display(rain, Year);

	/*������Ϊ�˼�����ɵ�����������Ƿ�ɹ���*/

	total = _1012_subtot(rain, Year);		//���ܽ�ˮ��
	_1012_yearaverage(rain, Year);		//�����ˮ��
	_1012_monthaverage(rain, Year);		//��ƽ����ˮ��

	printf("\nThe yearly average is %.2f inches.\n\n", total / Year);
	printf("rain == &rain[0][0] ?\n%s", rain == &rain[0][0] ? "true" : "false");		//��֤�������Ǹ�����ĵ�һ��Ԫ�صĵ�ַ
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
	1013.��дһ��������ʾ�û�����3������ÿ��������5��double���͵����������û�����ȷ����Ӧ�������������ֵ���ݣ����ó���Ӧ�����������
	a.���û���������ݴ�����3��5��������
	b.����ÿ�飨5�������ݵ�ƽ��ֵ
	c.�����������ݵ�ƽ��ֵ
	d.�ҳ���15�������е����ֵ
	e.��ӡ��� ÿ������Ҫ�õ����ĺ�������ɣ�ʹ�ô�ͳC��������ķ�ʽ����
	�������b��Ҫ��дһ�����㲢����һά����ƽ��ֵ�ĺ���������ѭ�����øú���3�Ρ����ڴ�����������ĺ�����Ӧ�ð�����������Ϊ�������������c��d�ĺ���Ӧ�ѽ��������������
	��������������������������������
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
	1014.�Ա䳤������Ϊ�����βΣ���ɱ����ϰ13
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


