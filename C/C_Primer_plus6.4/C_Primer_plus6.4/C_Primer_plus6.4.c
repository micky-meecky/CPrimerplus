//************************C_Primer_plus6.4******************************
//************************2020-8-8 20:50:32*******************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	int m;

	while (n++ < 3);	//ע��������һ���ֺţ�whileѭ���е�expression�ǿ����
		printf("n is %d\n", n);
	printf("That's all this program does\n");
	//����Ϊ����
	while (scanf("%d", &m) == 1)
		;
	printf("m = %d", m);

	return 0;
}
