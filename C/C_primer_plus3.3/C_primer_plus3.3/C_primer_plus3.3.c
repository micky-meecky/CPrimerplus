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

//����Ϊ3.3���̣�����Ϊ����ϵͳ���intֵ����**********************************************************************
//******************************************************2020��7��4��13:14:10***************************************************************


//#include <stdio.h>
//int main(void)
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//	
//	printf("%d %d %d \n", i, i + 1, i + 2);
//	printf("%u %u %u \n", j, j + 1, j + 2);
//
//	/*�����̱����������з�����������ֵ���ʱ���ǴӸ������ֵ��ʼ���������޷����������ʱ�Ǵ�0��ʼ��*/
//	return 0;
//}



//****************************************����Ϊ����printf()����������**********************************************************************
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
	printf("\"a \\ is a backslash.\"");//�ô�Ϊת���ַ������ã���
	printf("beep,hello\007\\n");//����������'���'����������



	return 0;

}

