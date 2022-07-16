//************************C_Primer_plus6.4******************************
//************************2020-8-8 20:50:32*******************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	int m;

	while (n++ < 3);	//注意这里有一个分号，while循环中的expression是空语句
		printf("n is %d\n", n);
	printf("That's all this program does\n");
	//以下为测试
	while (scanf("%d", &m) == 1)
		;
	printf("m = %d", m);

	return 0;
}
