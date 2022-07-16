//**************************************1.编写一个程序，调用一次printf()函数，把你的名和姓打印在一起。再调用一次printf()函数，把你的明和姓分别打印在两行。然后，再调用一次printf()函数，把你的名和姓打印在一起。
//*************************************************2020年7月1日20:32:16----------2020年7月2日20:42:58***************************

//#include <stdio.h>
//int main(void)
//{
//	printf("yang yafeng\n");
//	printf("yang\nyafeng\n");
//	printf("yang ");
//	printf("yafeng\n");
//
//
//	return 0;
//}


//*************************************2.打印我的姓名和地址***************************************

//#include<stdio.h>
//int main(void)
//{
//
//	printf("My name is yang yafeng and My address is bluh-bluh!!\n");
//
//	return 0;
//}


//************************************把我的年龄换成天数，并显示这两个值（假设每年都是365天）***************************************

//#include <stdio.h>
//int main(void)
//{
//	int my_age;
//	int age_days;
//
//	my_age = 23;
//	age_days = my_age * 365;
//
//	printf("my age is %d,and I have lived for %d days\n",my_age,age_days);
//
//	return 0;
//}


////***********************************4.题目字太多，自己看书***************************************


//#include<stdio.h>
//
//void jolly(void);//这两行不要忘了分号，这两行目的是声明我要用函数了
//void deny(void);//这两行不要忘了分号，这两行目的是声明我要用函数了
//
//int main(void)
//{
//	int i;
//
//	for (i = 1; i < 4; i++)
//	{
//		jolly();
//	}
//
//	deny();
//	return 0;
//}
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//	return 0;
//}
//
//void deny(void)
//{
//	printf("Which nobody can deny!\n");
//	return 0;
//}


////***********************************5.题目字太多，自己看书（今天不做，过两天做）***************************************
//#include <stdio.h>
//void br(void);
//void ic(void);
//
//void br(void)
//{
//	printf("Brazil,Russia\n");
//	return 0;
//}
//
//void ic(void)
//{
//	printf("India,China\n");
//	return 0;
//}
//
//int main(void)
//{
//	printf("Brazil,Russia,India,China\n");
//	ic();
//	br();
//
//	return 0;
//
//}

//***********************************6.题目字太多，自己看书***************************************
//#include <stdio.h>
//int main(void)
//{
//	int toes = 10;
//	printf(" toes = %d\n toes squared = %d\t toes cubes = %d\n", toes, toes * toes, toes * toes * toes);//note: there is a '\t'
//
//	return 0;
//}

//***********************************7.题目字太多，自己看书***************************************
//#include <stdio.h>
//void tangjiba(void);
//void tangjiba(void)
//{
//	printf("Smile!");
//	return 0;
//}
//int main(void)
//{
//	tangjiba();
//	tangjiba();
//	tangjiba();
//	printf("\n");
//	tangjiba();
//	tangjiba();
//	printf("\n");
//	tangjiba();
//
//	return 0;
//}

//***********************************8.题目字太多，自己看书***************************************

#include <stdio.h>
void one_three(void);
void two(void);

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");

	return 0;
}

void two(void)
{
	printf("two\n");
	return 0;
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	return 0;
}








