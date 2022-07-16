/*
*********************************************C primer plus书中的例程2.3于27页******************************************
*********************************************2020年7月1日19:26:31*************************************************
目的是为了写一个文件中包含多个函数
*/
#include<stdio.h>
void butler(void);/*ANSI/ISO C函数原型（注意结尾的分号）*///注意这里是函数原型（prototype）为了告诉编译器，我要用butler函数了
//第一个void 表示该函数的类型是没有返回值的函数。后面的void表示butler()函数不带参数
int main(void)
{
	printf("I wil summon the butler function.\n");
	butler();	//这里是函数调用（function call）
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;

}

void butler(void) /*函数定义（function declaration）开始.即函数本身的源代码*/
{
	printf("You rang ,sir?\n");
}