#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h> //ʹ��rand()����
#include <stdbool.h>

#define MSG "I am a symbolic string sonstant."
#define LIM 5
#define SLEN 40

void _11_1(void);
void _11_2(void);
void _11_3(void);
void _11_self_test(void);
void _11_4_int(void);
void _11_4(void);



int main(void)
{
	//_11_1();
	//_11_2();
	//_11_3();
	//_11_self_test();
	//_11_4_int();
	_11_4();



	return 0;
}

//11.1��ʾ�ַ����ļ��ַ���
void _11_1(void)
{
	char words[81] = "I am a string in an array.";
	const char* pt1 = "Something is pointing at me.";
	puts("Heare are some strings:");
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8] = 'p';
	puts(words);

}

//11.2 ���ַ�������ָ��
void _11_2(void)
{
	printf("%s, %p, %c\n","me","are", *"space fares");
}
//11.3 ���ַ�����ʼ�������ַ�ʽ��
//1�������ͣ��Ӿ�̬�洢�����ַ����������������������飬��ar1�Ǹ�������Ԫ�صı�������ar1Ϊָ�볣��
//2��ָ���ͣ����ַ��������ַ���ַ����ar1����ar1��Ϊ����ָ��
void _11_3(void)
{
	char ar[] = MSG;
	const char* pt = MSG;
	printf("address of \"I am a symbolic string sonstant.\": %p \n", "I am a symbolic string sonstant.");
	printf("		address of ar: %p\n", ar);
	printf("		address of pt: %p\n", pt);
	printf("		address of MSG: %p\n", MSG);
	printf("address of \"I am a symbolic string sonstant.\": %p \n", "I am a symbolic string sonstant.");
	/* ���н�����£� 
	pt �� MSG�ĵ�ַ��ͬ������ar��ͬ����ǰ������һ�£�
	�����������ͬ�����������һ�����߶ദ�������������;�����
	��̬����ʹ�õ��ڴ��arʹ�õĶ�̬�ڴ治��ֵ��ͬ����������ַ��λ�����п��ܲ�ͬ

	address of "I am a symbolic string sonstant.": 00707B90
                address of ar: 00B8FB04
                address of pt: 00707B90
                address of MSG: 00707B90
	address of "I am a symbolic string sonstant.": 00707B90
	
	*/
}

void _11_self_test(void)
{
	int arr[10] = {0};

	printf("%d\n", arr[8]);
	//arr++;//������������ָ�볣�����������޸ĵ���ֵ

}

//11.4_int ��ά���������ʼ��
void _11_4_int(void)
{
	const int* a[5] = {0,111,2,3,5};//����һά����,��Ҫ��Ϊ�Ƕ�ά�����ˣ�ʵ���ǣ�����5��һά����ָ�����飩
	int ar[5][2] = { {1,2},
					 {3,4},
					 {5,6},
					 {7,8},
					 {9,10} };
	printf("%d" ,*(a+3));
	printf("\n%d", *(*(ar+1) + 1));//��������Ϊ4

	/*�����
	3
	4
	*/
}

//11.4 ��ά�ַ��������ʼ��
void _11_4(void)
{
	const char* mytalents[LIM] = {
		"Adding number swiftly",
		"Multiplying accurately",MSG,
		"Following instructions to the letter",
		"Understanding the C language"
	};

	char yourtalents[LIM][SLEN] = {
		"Walking in straight line",
		"Sleeping","Watching television",
		"Mailing letters", "Reading emails"
	};

	int i;

	puts("Lets compare talents.");
	printf("%-40s %-25s\n", "My Talents", "Your Talents");
	for (i = 0; i < LIM; i++)
	{
		printf("%-40s %-25s\n", mytalents[i], yourtalents[i]);
	}
	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

	printf("\naddress of yourtalents:\n");
	printf("\"Adding number swiftly\": %p\n", "Adding number swiftly");
	for (i = 0; i < LIM; i++)
	{
		printf("\"mytalents[%d]\": %p\n", i, mytalents[i]);
	}
	for (i = LIM - 1; i > 0; i--)
	{
		printf("\"mytalents[%d]\" - \"mytalents[%d]\": %-8d,(hex)%-30p\n", i, i - 1, mytalents[i] - mytalents[i - 1], mytalents[i] - mytalents[i - 1]);
	}

	printf("\naddress of yourtalents:\n");
	for (i = 0; i < LIM; i++)
	{
		printf("\"yourtalents[%d]\": %p\n", i, yourtalents[i]);
	}
	for (i = LIM - 1; i > 0; i--)
	{
		printf("\"yourtalents[%d]\" - \"yourtalents[%d]\": %-8d,(hex)%-30p\n", i, i - 1, yourtalents[i] - yourtalents[i - 1], yourtalents[i] - yourtalents[i - 1]);
	}
	return;
	/*����� 
		Lets compare talents.
		My Talents                               Your Talents
		Adding number swiftly                    Walking in straight line
		Multiplying accurately                   Sleeping
		I am a symbolic string sonstant.         Watching television
		Following instructions to the letter     Mailing letters
		Understanding the C language             Reading emails

		sizeof mytalents: 40, sizeof yourtalents: 200

		address of yourtalents:
		"Adding number swiftly": 00007FF6CDFCB0A8
		"mytalents[0]": 00007FF6CDFCB0A8
		"mytalents[1]": 00007FF6CDFCB0C8
		"mytalents[2]": 00007FF6CDFCAFB0
		"mytalents[3]": 00007FF6CDFCAF20
		"mytalents[4]": 00007FF6CDFCB108
		"mytalents[4]" - "mytalents[3]": 488     ,(hex)00000000000001E8
		"mytalents[3]" - "mytalents[2]": -144    ,(hex)FFFFFFFFFFFFFF70
		"mytalents[2]" - "mytalents[1]": -280    ,(hex)FFFFFFFFFFFFFEE8
		"mytalents[1]" - "mytalents[0]": 32      ,(hex)0000000000000020

		address of yourtalents:
		"yourtalents[0]": 0000003AB4CFF360
		"yourtalents[1]": 0000003AB4CFF388
		"yourtalents[2]": 0000003AB4CFF3B0
		"yourtalents[3]": 0000003AB4CFF3D8
		"yourtalents[4]": 0000003AB4CFF400
		"yourtalents[4]" - "yourtalents[3]": 40      ,(hex)0000000000000028
		"yourtalents[3]" - "yourtalents[2]": 40      ,(hex)0000000000000028
		"yourtalents[2]" - "yourtalents[1]": 40      ,(hex)0000000000000028
		"yourtalents[1]" - "yourtalents[0]": 40      ,(hex)0000000000000028
		������
			1.mytalentsռ40�ֽڣ���yourtalentsռ200�ֽڡ�ԭ���ǣ�ǰ��ʹ�õ����ַ��������������Ǵ洢�ھ�̬�ڴ�����
				��ָ��ֻ�ǻ�ȡ�����ǵĵ�ַ��	�����Ǵ洢���ַ��������Ŀ������൱�ڿ������죬���Һ��ߵ�ÿ��Ԫ�ش�С��ͬ
				�൱����һ��5*40�ľ��󣬹�Ϊ200�ֽڣ���Ϊһ��char����Ԫ��ռһ���ֽڡ�
			2.�ӵ�ַ���������ǰ�ߵĵ�ַ�ǲ������ģ����������������ڴ�ռ�
	*/
}






























