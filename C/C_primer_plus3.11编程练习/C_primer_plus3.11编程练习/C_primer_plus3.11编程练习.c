//************************************************************�����±����ϰP60*******************************************************************************
//**********************************************************2020��7��5��15:09:04************************************************************************
//***********************��һ�⣺�۲�������������Լ���������������������������������


//#include <stdio.h>
//#include <float.h>
////������ͷ�ļ��ж����˳����������͵�����
//#include <limits.h>
//int main(void)
//{
//	int a,b;
//
//	float c;
//
//	float d = 10.0 / 3;
//	a = 2147483647;
//	b = 32768;
//	c = 3.400e38;
//
//	printf("The big int data is %d\n", a + 1);//�������ֵ��1�������������Ϊ������Сֵ
//
//	printf("The big float data is %f\n", c * 10);
//	printf("���������ֵ����10������磬Խ�磬���inf \n");
//	printf("The big float data is %f\n", c + 1);
//	printf("���������ֵ��1�����ھ�ȷ�����ƣ��򲻻����Խ��\n");
//
//	printf("The big float data is %f\n", d);
//	printf("��ӡ3.333333��������ʧ\n");
//
//
//
//	printf("The max float data is %f\n", FLT_MAX);
//	printf("The max float data is %ld\n", INT_MAX);
//
//	printf("%d\n", a );
//	printf("%d\n", a - 1);
//	printf("%d\n", a + 1);
//	printf("%d\n", a + 2);
//	printf("%d\n", b + 1);
//	printf("%d\n", b + 2);
//	printf("%e\n", c);
//
//	//ʵ��
//	/*printf("%zd\n",sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(short int));
//	printf("%zd\n", sizeof(long long int));*/
//	return 0;
//}

//**************************************�ڶ��⣺����һ��ASCII�룬�����ӡ���ַ�****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int a;//����һ�����ͱ���
//	 
//	printf("Please key-in a number you want,thank you! \n");
//
//	scanf("%d", &a);
//
//	printf("The charater you input has converted to %c\n", a);
//
//	return 0;
//}


//**************************************��3�⣺��д���򣬷���һ��������Ȼ���ӡ�����ı�****************************************
//
//#include <stdio.h>
//int main(void)
//{
//	printf("\a");
//	//���߲���\a,��'\007'��ʾ
//	printf("%c", '\007');
//	printf("Startled by the sudden sound,Sally shoutd,\n");
//	printf("By the Great Pumkin, what was that!\n");
//	return 0;
//}


//**************************************��4�⣺��д������̫�࣬�Լ�����****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	float a;
//
//	printf("Enter a floating-point value:");//��֪�û�����
//	printf("____\b\b\b\b");
//	scanf("%f",&a);//��ȡ�û�����
//
//	printf("\nfixed-point notation: %f\n", a);//���û������ֵ����ͨ���������
//	printf("exponential notation: %e\n", a);//���û�����ֵ��ָ����ʽ���
//	printf("p notation: %.2a", a);//���û������ֵ��P��ʽ���
//
//
//	return 0;
//}
//

//**************************************��5�⣺��д������̫�࣬�Լ�����****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	float sec = 3.157e7f;
//	double age;
//
//	printf("Please input your age:");
//	scanf("%lf", &age);
//
//	printf("You have lived %.2Lf seconds\n", sec * age);
//
//	return 0;
//}
//

//**************************************��6�⣺��д������̫�࣬�Լ�����****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	float single_mass = 3.0e-23f;//ע�⣬�������ֳ���ϵͳ���ж�Ϊdouble ���ͣ���ʱֻ��Ҫ�����ֺ���Ӹ�f����ָ��������Ϊfloat �͵ģ��������ִ�double��float�ضϾ���
//	float unit_mass = 950.0f,kuatuo;
//
//	printf("Please tell me how much water you have:");
//	printf("___\b\b\b");
//	scanf("%f", &kuatuo);
//
//	printf("\nOK!You have %.2f water molecule,\n also %.2le water molecule", kuatuo * unit_mass / single_mass, kuatuo * unit_mass / single_mass);
//
//	return 0;
//}

//**************************************��7�⣺��д������̫�࣬�Լ�����****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	double height;
//	float a = 2.54f;
//	printf("please input your height(inch) by keyboard in front of you,m**herf**ker, son of bi*ch!!!!");
//	printf("____\b\b\b\b");
//
//	scanf("%lf", &height);
//	printf("your height is %lf cm,douchbag!!!!!!", height * a);
//
//	return 0;
//}


//**************************************��8�⣺��д������̫�࣬�Լ�����****************************************

#define _CRT_SECURE_NO_WARNINGS
#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3
//�궨��
#include <stdio.h>
int main(void)
{
	float pint, cup, ounce, spoon, tea_spoon;//ΪʲôҪ�ø����ͣ�����Ϊ��1Ʒ�ѵ���2���Ƕ����ܻ����С�����¾�����ʧ�����Բ��������ͣ���float�͹��ˣ�һ�㲻���ܳ�����Χ�����Բ���double

	printf("Enter how many cups:");
	scanf("%f", &cup);

	pint = cup / PINT_CUP;
	ounce = cup * CUP_OUNCE;
	spoon = ounce * OUNCE_SPOON;
	//tea_spoon = spoon * SPOON_TEA;

	printf("%.1f cup equals %.1f pint, %.1f ounce ,%.1f spoon, %.1f tea_spoon.\n",cup, pint, ounce, spoon, tea_spoon);

	return 0;
}


//******************************************����ʱ�䣺2020��7��5��16:17:47**********************************************************
