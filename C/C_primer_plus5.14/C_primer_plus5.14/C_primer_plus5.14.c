//****************************C_primer_plus5.14**********************************
//*****************************2020-7-25 11:17:32********************************

 //************ convert.c -- �Զ�����ת��
#include <stdio.h>
int main(void)
{
	char ch; 
	int i;
	float f1;
	f1 = i = ch = 'C';
	printf("ch = %c,i = %d , f1 = %2.2f\n", ch, i, f1);
	ch = ch + 1;
	i = f1 + 2 * ch;
	f1 = 2.0 * ch + i;
	printf("ch = %c, i = %d , f1 = %2.2f\n", ch, i, f1);
	ch = 1107;
	printf("Now ch = %c\n", ch);//��1107%256����ģ��
	ch = 80.89;
	printf("Now ch = %c\n", ch);//��С�����ֽ��нض���
	printf("%d\n", 'P');



	return 0;
}

