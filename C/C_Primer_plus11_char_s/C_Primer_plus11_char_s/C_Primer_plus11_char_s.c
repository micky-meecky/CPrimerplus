#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h> //使用rand()函数
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

//11.1表示字符串的几种方法
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

//11.2 把字符串看作指针
void _11_2(void)
{
	printf("%s, %p, %c\n","me","are", *"space fares");
}
//11.3 把字符串初始化的两种方式，
//1，数组型：从静态存储区把字符串字面量常量拷贝到数组，而ar1是该数组首元素的别名，该ar1为指针常量
//2，指针型：将字符串的首字符地址赋给ar1，该ar1则为常量指针
void _11_3(void)
{
	char ar[] = MSG;
	const char* pt = MSG;
	printf("address of \"I am a symbolic string sonstant.\": %p \n", "I am a symbolic string sonstant.");
	printf("		address of ar: %p\n", ar);
	printf("		address of pt: %p\n", pt);
	printf("		address of MSG: %p\n", MSG);
	printf("address of \"I am a symbolic string sonstant.\": %p \n", "I am a symbolic string sonstant.");
	/* 运行结果如下： 
	pt 和 MSG的地址相同，而与ar不同，与前面讨论一致；
	编译器会把相同字面量存放在一处或者多处，依编译器类型决定；
	静态数据使用的内存和ar使用的动态内存不仅值不同，而且连地址的位数都有可能不同

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
	//arr++;//报错，数组名是指针常量，不是能修改的左值

}

//11.4_int 二维整型数组初始化
void _11_4_int(void)
{
	const int* a[5] = {0,111,2,3,5};//这是一维数组,不要以为是二维数组了（实际是：常量5个一维整型指针数组）
	int ar[5][2] = { {1,2},
					 {3,4},
					 {5,6},
					 {7,8},
					 {9,10} };
	printf("%d" ,*(a+3));
	printf("\n%d", *(*(ar+1) + 1));//这里的输出为4

	/*输出：
	3
	4
	*/
}

//11.4 二维字符串数组初始化
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
	/*输出： 
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
		分析：
			1.mytalents占40字节，而yourtalents占200字节。原因是，前者使用的是字符串字面量，他们存储在静态内存区，
				而指针只是获取了他们的地址。	后者是存储了字符字面量的拷贝，相当于拷贝构造，而且后者的每个元素大小相同
				相当于是一个5*40的矩阵，故为200字节，因为一个char类型元素占一个字节。
			2.从地址输出来看，前者的地址是不连续的，而后者是连续的内存空间
	*/
}






























