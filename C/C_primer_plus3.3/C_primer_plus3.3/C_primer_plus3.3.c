//#include<stdio.h>
//int main(void)
//{
//	int x = 100;
//
//	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//	printf("dec = %d; octal = %#o; hex = %#x; HEX = %#X\n",x, x, x, x);
//
//
//	return 0;
//}

//以上为3.3例程，以下为超出系统最大int值例程**********************************************************************
//******************************************************2020年7月4日13:14:10***************************************************************


//#include <stdio.h>
//int main(void)
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//	
//	printf("%d %d %d \n", i, i + 1, i + 2);
//	printf("%u %u %u \n", j, j + 1, j + 2);
//
//	/*该例程表明，对于有符号数，当数值溢出时，是从负的最大值开始，而对于无符号数，溢出时是从0开始的*/
//	return 0;
//}



//****************************************以下为更多printf()的特性例程**********************************************************************
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678928642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);
	printf("\"a \\ is a backslash.\"");//该处为转义字符的运用！！
	printf("beep,hello\007\\n");//编译后会听到'嘟嘟嘟'的声音！！



	return 0;

}

