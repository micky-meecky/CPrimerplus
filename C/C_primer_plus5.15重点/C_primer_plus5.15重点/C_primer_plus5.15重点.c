//******************************************C_primer_plus5.15重点*******************************************
//**************************************2020-7-25 11:28:03***********************************************

//pound.c --定义一个带一个参数的函数

#include <stdio.h>
void pound(int n);//void pound();如果用这样的声明，即ANSI C之前的声明的话，泽会出现下面情况
/*
5
#####

33
#################################

0
*/
//这是因为缺少函数原型，float会自动被升级为double类型，输出则会有变化
//为了解决这个问题，可以在函数调用时用强制类型转换，即pound (int(f));【注意：如果f的值太大，超过了int显示范围也不行】
int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}
void pound(int n)
{
	printf("%d\n", n);
	while (n-- > 0)
		printf("#");
		printf("\n");
		printf("\n");

}