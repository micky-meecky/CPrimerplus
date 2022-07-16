//*****************************************C_Primer_plus6.12*****************************
//*******************************************2020-8-9 10:39:58****************************
//***********************此程序包含书上p129到p132的内容**************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;

	printf("	n	n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%9d %9d\n", num, num * num * num);
	printf("\n");

	//使用递减运算符
	int secs;
	for (secs = 5; secs > 0; secs--)
		printf("\t%d seconds left!\n",secs);
	printf("We have ignition,and now ,the secs is %d\n\n\n", secs);

	//使用递增2 ，10等

	int n;

	for (n = 2; n < 60; n += 13)
	{
		printf("\t%d\n", n);
	}
	printf("\n");

	//用字符代替数字计数

	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("\tThe ASCII value for %c is%d.\n", ch, ch);
	printf("\n");

	//可以让递增的量几何式增长，而不是算术增长，也就是说，每次乘上一个数而不是加上一个数；
	double debt;
	for (debt = 100.0; debt < 150.0; debt *= 1.1)
		printf("\tYour debt is now $%.2f.\n", debt);

	//第3个表达式可以是任何合法的表达式。

	int x, y = 55;

	for (x = 1; y <= 75; y = (++x * 5) + 50)
		printf("%10d %10d\n", x, y);

	//可以省略部分表达式，分号不可省！！！

	int ans, a;
	ans = 2;
	for (a = 3; ans <= 25;)
		ans *= a;
	printf("\ta = %d; ans = %d.\n", a, ans);

	//第一个表达式不一定是给变量赋值，也可以使用printf（）。记住，在执行循环的其他部分之前，只对第一个表达式求值一次或者执行一次

	int b = 0;

	for (printf("\nKeep entering numbers!\n"); b != 6;)
		scanf("%d", &b);
	printf("that's the one I want\n");

	return 0;

}