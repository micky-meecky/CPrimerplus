//**************************************1.��дһ�����򣬵���һ��printf()����������������մ�ӡ��һ���ٵ���һ��printf()����������������շֱ��ӡ�����С�Ȼ���ٵ���һ��printf()����������������մ�ӡ��һ��
//*************************************************2020��7��1��20:32:16----------2020��7��2��20:42:58***************************

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


//*************************************2.��ӡ�ҵ������͵�ַ***************************************

//#include<stdio.h>
//int main(void)
//{
//
//	printf("My name is yang yafeng and My address is bluh-bluh!!\n");
//
//	return 0;
//}


//************************************���ҵ����任������������ʾ������ֵ������ÿ�궼��365�죩***************************************

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


////***********************************4.��Ŀ��̫�࣬�Լ�����***************************************


//#include<stdio.h>
//
//void jolly(void);//�����в�Ҫ���˷ֺţ�������Ŀ����������Ҫ�ú�����
//void deny(void);//�����в�Ҫ���˷ֺţ�������Ŀ����������Ҫ�ú�����
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


////***********************************5.��Ŀ��̫�࣬�Լ����飨���첻��������������***************************************
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

//***********************************6.��Ŀ��̫�࣬�Լ�����***************************************
//#include <stdio.h>
//int main(void)
//{
//	int toes = 10;
//	printf(" toes = %d\n toes squared = %d\t toes cubes = %d\n", toes, toes * toes, toes * toes * toes);//note: there is a '\t'
//
//	return 0;
//}

//***********************************7.��Ŀ��̫�࣬�Լ�����***************************************
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

//***********************************8.��Ŀ��̫�࣬�Լ�����***************************************

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








