/*
	2020年6月17日21:32:47
	目的：郝斌老师的C语言课程29-34节课
*/


//本节课是郝斌老师的C语言课程第29至30节课
#include <stdio.h>
int main(void)
{
	//char ch = 'A';
	//char ch = "+";//错误，ch被多次定义了
	//char CH = "AB";//AB是字符串，我们不能把字符串赋值给单个字符
	//char sh = 'AB';//这居然不报错？'AB'是错误的！！！
	//ch = 'C';
	//int a;
	//a = ch;
	//printf("%c & %d\n", a, a);//不应该有错吗？这里
	//putchar(ch);
	//什么是ASCLL码？它规定了不同字符用哪个二进制代码去表示，就如'A' = 65;	'B' = 66;	'a' = 97;	'0' = 48;


	//本节课是郝斌老师的C语言课程第31-33节课------printf和scanf函数使用；
	//printf("字符串");
	//printf("输出控制符",输出参数);
	
	int b;
	b = 47;//默认十进制
	printf("%d,%x,%o,%c\n", b, b, b, b, b);
	//printf("输出控制符1，输出控制符2。。。",输出参数1，输出参数2.。。。。。。);输出控制符和输出参数个数要一一对应
	//printf("输出控制符，非输出控制符"，。。。。。。。);输出控制符包含有%d,%ld,%c,%f,%lf,%x(or %X  %#x)
	printf("%x\n", b);//输出是2f
	printf("%X\n", b);//输出是2F
	printf("%#X\n", b);//输出是0X2F（这个最好！）
	printf("%#x\n", b);//输出是0X2f


	return 0;

}