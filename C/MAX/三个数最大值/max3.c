#include<stdio.h>
int main(void)
{

	/*
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (((a > b) == 1) && ((a > c) == 1))
		printf("%d", a);
	else if (((a > b) == 0) && ((b > c) == 1))
		printf("%d", b);
	else if (((c > b) == 1) && ((a > c) == 0))
		printf("%d", c);
	else
		return 0;
		*/
	int a, b, c, temp;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)								//�ȱȽ�a��b�����ȽϺ�Ľ����ֵ��temp
		temp = a;
	else
		temp = b;
	if (temp > c)							//�ٱȽ�temp �� c������ӡok	
		printf("%d", temp);						
	else
		printf("%d", c);

	return 0;

}
