#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static int bit = 0;

int d2b(int n)
{
	int r;
	bit++;
	r = n % 2;
	if (n >= 2)
	{
		d2b(n / 2);
		
	}
	printf("%d", r);
	return bit;
}

int input_int(void)
{
	int n;
	printf("Please enter an unsigned finite int num: ");
	scanf("%d", &n);

	return n;
}

void test01(void)
{
	int n_d;
	//用二进制表示十进制数。
	n_d = input_int();

	printf("%d = 2b'", n_d);

	printf("\t%d bits\n\r",d2b(n_d));
}

//这种矩阵叫做什么矩阵啊？
void test02(void)
{
	int i, j;
	int arr[4][4];
	i = j = 0;
	for (i; i < 4; i++)
	{
		for (j; j < 4; j++)
		{
			arr[i][j] = i + j;
		}
		j = 0;
	}
	printf("Initial successfully\r\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		j = 0;
		printf("\n\r");
	}

}

int main(void)
{

	//test01();
	test02();
	return 0;
}

