//*****************************************C_Primer_plus6.12*****************************
//*******************************************2020-8-9 10:39:58****************************
//***********************�˳����������p129��p132������**************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;

	printf("	n	n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%9d %9d\n", num, num * num * num);
	printf("\n");

	//ʹ�õݼ������
	int secs;
	for (secs = 5; secs > 0; secs--)
		printf("\t%d seconds left!\n",secs);
	printf("We have ignition,and now ,the secs is %d\n\n\n", secs);

	//ʹ�õ���2 ��10��

	int n;

	for (n = 2; n < 60; n += 13)
	{
		printf("\t%d\n", n);
	}
	printf("\n");

	//���ַ��������ּ���

	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("\tThe ASCII value for %c is%d.\n", ch, ch);
	printf("\n");

	//�����õ�����������ʽ����������������������Ҳ����˵��ÿ�γ���һ���������Ǽ���һ������
	double debt;
	for (debt = 100.0; debt < 150.0; debt *= 1.1)
		printf("\tYour debt is now $%.2f.\n", debt);

	//��3�����ʽ�������κκϷ��ı��ʽ��

	int x, y = 55;

	for (x = 1; y <= 75; y = (++x * 5) + 50)
		printf("%10d %10d\n", x, y);

	//����ʡ�Բ��ֱ��ʽ���ֺŲ���ʡ������

	int ans, a;
	ans = 2;
	for (a = 3; ans <= 25;)
		ans *= a;
	printf("\ta = %d; ans = %d.\n", a, ans);

	//��һ�����ʽ��һ���Ǹ�������ֵ��Ҳ����ʹ��printf��������ס����ִ��ѭ������������֮ǰ��ֻ�Ե�һ�����ʽ��ֵһ�λ���ִ��һ��

	int b = 0;

	for (printf("\nKeep entering numbers!\n"); b != 6;)
		scanf("%d", &b);
	printf("that's the one I want\n");

	return 0;

}