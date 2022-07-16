//************************************************************第三章编程练习P60*******************************************************************************
//**********************************************************2020年7月5日15:09:04************************************************************************
//***********************第一题：观察整型数据溢出以及浮点型数据溢出（上下溢出）的输出情况


//#include <stdio.h>
//#include <float.h>
////以上俩头文件中定义了常见数据类型的限制
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
//	printf("The big int data is %d\n", a + 1);//整型最大值加1会产生溢出，结果为负的最小值
//
//	printf("The big float data is %f\n", c * 10);
//	printf("浮点数最大值乘以10造成上溢，越界，输出inf \n");
//	printf("The big float data is %f\n", c + 1);
//	printf("浮点数最大值加1，由于精确度限制，则不会造成越界\n");
//
//	printf("The big float data is %f\n", d);
//	printf("打印3.333333，精度损失\n");
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
//	//实验
//	/*printf("%zd\n",sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(short int));
//	printf("%zd\n", sizeof(long long int));*/
//	return 0;
//}

//**************************************第二题：输入一个ASCII码，输出打印的字符****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int a;//定义一个整型变量
//	 
//	printf("Please key-in a number you want,thank you! \n");
//
//	scanf("%d", &a);
//
//	printf("The charater you input has converted to %c\n", a);
//
//	return 0;
//}


//**************************************第3题：编写程序，发出一声警报，然后打印下面文本****************************************
//
//#include <stdio.h>
//int main(void)
//{
//	printf("\a");
//	//或者不用\a,用'\007'表示
//	printf("%c", '\007');
//	printf("Startled by the sudden sound,Sally shoutd,\n");
//	printf("By the Great Pumkin, what was that!\n");
//	return 0;
//}


//**************************************第4题：编写程序，字太多，自己看书****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	float a;
//
//	printf("Enter a floating-point value:");//告知用户输入
//	printf("____\b\b\b\b");
//	scanf("%f",&a);//读取用户输入
//
//	printf("\nfixed-point notation: %f\n", a);//将用户输入的值以普通浮点型输出
//	printf("exponential notation: %e\n", a);//将用户输入值以指数形式输出
//	printf("p notation: %.2a", a);//将用户输入的值以P形式输出
//
//
//	return 0;
//}
//

//**************************************第5题：编写程序，字太多，自己看书****************************************

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

//**************************************第6题：编写程序，字太多，自己看书****************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	float single_mass = 3.0e-23f;//注意，这里数字常量系统会判定为double 类型，此时只需要在数字后面加个f，就指定该数字为float 型的，否则会出现从double到float截断警告
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

//**************************************第7题：编写程序，字太多，自己看书****************************************

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


//**************************************第8题：编写程序，字太多，自己看书****************************************

#define _CRT_SECURE_NO_WARNINGS
#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3
//宏定义
#include <stdio.h>
int main(void)
{
	float pint, cup, ounce, spoon, tea_spoon;//为什么要用浮点型，是因为在1品脱等于2杯那儿可能会出现小数导致精度损失，所以不能用整型，用float就够了，一般不可能超出范围，所以不用double

	printf("Enter how many cups:");
	scanf("%f", &cup);

	pint = cup / PINT_CUP;
	ounce = cup * CUP_OUNCE;
	spoon = ounce * OUNCE_SPOON;
	//tea_spoon = spoon * SPOON_TEA;

	printf("%.1f cup equals %.1f pint, %.1f ounce ,%.1f spoon, %.1f tea_spoon.\n",cup, pint, ounce, spoon, tea_spoon);

	return 0;
}


//******************************************结束时间：2020年7月5日16:17:47**********************************************************
