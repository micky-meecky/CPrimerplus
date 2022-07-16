//*************************************************C_Primer_plus习题5******************************************
//******************************************2020-7-25 15:43:03*******************************************
//

//*********************************************C_Primer_plus习题5.1**************************


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//const int min_h = 60;
//int main(void)
//{
//	int min;
//	int hour = 0, left = 0;
//	printf("Please enter the minute!(<= 0 quit!!!)\n");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		hour = min / min_h;
//		left = min % min_h;
//		printf("the %d minutes = %d hours and %d minutes\n", min, hour, left);
//		printf("Please enter the NEXT\n");
//		scanf("%d", &min);
//		printf("\n");
//	}
//	printf("That's all ,bro.\n\n");
//
//
//	return 0;
//}

//*********************************************C_Primer_plus习题5.2**************************

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
////const int min_h = 60;
//int main(void)
//{
//	int i = 0, length = 0;
//	int num,num_ass;
//	
//
//	printf("Please enter a number you want:");
//	scanf("%d", &num);
//
//	num_ass = num + 1;	//+1是为了消除当输入0的时候，下面的while直接为否，从而得出位数长度为0的尴尬场面的问题
//	printf("num_ass = %d\n", num_ass);
//
//	//判断整数数字长度的方法啦
//
//	while (num_ass != 0)	//什么时候为真？
//	{
//		num_ass = (num_ass-1) / 10;		//-1是为了抵消刚刚+1的效果
//		length++;
//		printf("bit number: %d\t", length);
//	}
//	printf("\nYour num has %d bits\n", length);
//
//
//	while (i++ <= 10)
//	{
//
//		printf("%*d ", length, num);
//		num++;
//		/*printf("\t");*/
//	}
//
//	printf("\n");
//	printf("Good job!Bro!!!!!\n");
//
//	return 0;
//}

//*********************************************C_Primer_plus习题5.3**************************
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
//
//const int weekdays = 7;
//
//int main(void)
//{
//	int days,days_ass;
//	//int weeks;
//	printf("如果不用控制语句的话，比如IF(),或者IF()	ELSE()等，");
//	printf("则无法结局下面当days＞1时会打印两次且第二次为错误结果的bug。\n");
//	printf("Please enter days\n");
//	scanf("%d", &days);
//	days_ass = days;
//
//	while (days > 0)//英语语法上单复数的处理，仅用while实现，有严重BUG，后续想到解决办法后有机会再更改
//		{
//		while (days > 1)
//		{
//			printf("There is %d weeks and %d days\n", days / weekdays, days % weekdays);
//			days = 0; 
//		}
//		printf("There is %d week and %d day\n", days / weekdays, days % weekdays);
//	/*	days = 0;*/
//		printf("\n the next!\n");
//		scanf("%d", &days);
//		days_ass = days;
//		printf("\n");
//		}
//
//	//判断输入≤0时后的处理
//
//	while (days_ass <= 0)
//	{
//		printf("Erorr!!!\n");
//		days_ass = 1;
//	}
//	printf("\n");
//	printf("That's all!\n");
//
//	return 0;
//}
//

//*********************************************C_Primer_plus习题5.4**************************

//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
//
////const int weekdays = 7;
//const float inch_to_cm = 2.54;
//const float feet_to_cm = 30.48;
//
//int main(void)
//{
//	float height,inches;
//	int feet;
//
//	printf("Please enter a height in centimeters:");
//	scanf("%f", &height);
//
//	printf("\n");
//
//	while (height > 0)
//	{
//		feet = height / feet_to_cm;
//		inches = (height - feet * feet_to_cm) / inch_to_cm;
//
//		printf("%.1f cm = %d feet, %.1f inches\n",
//			height, feet, inches);
//		printf("enter a height in centimeters(<= 0 QUIT):");
//		scanf("%f", &height);
//		printf("\n");
//	}
//
//	while (height < 0)
//	{
//		printf("Are your stupid? who does it have a negative height?\n");
//		printf("ERROR!!!\tERROR!!!\tERROR!!!\n");
//		height = 1;
//	}
//
//	while (height == 0)
//	{
//		printf("you know nothing, and you are nothing. John! \n");
//	//	printf("ERROR!!!\tERROR!!!\tERROR!!!\n");
//		height = 1;
//	}
//
//	printf("\n******************bye!!!*************************\n");
//
//	return 0;
//}



//*********************************************C_Primer_plus习题5.5&6**************************

//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
//
//int main(void)
//{
//	int days,days_2;
//	long long int money = 0;
//
//	scanf("%d", &days);
//	days += 1;
//
//	while (days-- > 0)
//	{
//		days_2 = days;
//		days_2 *= days_2;
//		money += days_2;
//		
//	}
//	printf("You have earned %lld dollars. What a SURPRISE!!!!\n", money);
//	printf("\n******************bye!!!*************************\n");
//
//	return 0;
//}


//
////*********************************************C_Primer_plus习题5.7**************************
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
///*一不小心写出了带返回值的函数，题目要求计算等都在main函数里的。哈哈哈哈哈哈*/
///*double cubic(double n);
//int main(void)
//{
//	double num;
//	printf("Please enter the double datum to calc cubic:");
//	scanf("%lf", &num);
//	printf("the number's calc cubic is %.6lf\n", cubic(num));
//
//	printf("一不小心写出了带返回值的函数，题目要求计算等都在main函数里的。哈哈哈哈哈哈\n");
//
//	return 0;
//}
//
//double cubic(double n)
//{
//	double cubic_num;
//	cubic_num = n * n * n;
//
//	return cubic_num;
//}
//*/
////不带返回值的函数
//void cubic(double n);
//int main(void)
//{
//	double num;
//	printf("Please enter the double datum to calc cubic:");
//	scanf("%lf", &num);
//	cubic(num);
//
//	printf("一不小心写出了带返回值的函数，题目要求计算等都在main函数里的。哈哈哈哈哈哈\n");
//
//	return 0;
//}
//
//void cubic(double n)
//{
//	printf("the number's calc cubic is %.6lf\n", n * n * n);
//
//}



//*********************************************C_Primer_plus习题5.8**************************
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
//
//int main(void)
//{
//	int num1,num2;
//
//	printf("Please enter an integer to serve as the second operand:");
//	scanf("%d", &num2);
//	printf("Please enter an integer to serve as the frist operand:");
//	scanf("%d", &num1);
//
//	while (num1 > 0)
//	{
//		printf("%d %% %d is %d\n", num1, num2, num1 % num2);
//		printf("Enter next number for frist operand:");
//		scanf("%d", &num1);
//		printf("\n");
//	}
//
//	while (num1 <= 0)
//	{
//		printf("ERROR!!!\n");
//		num1 = 1;
//	}
//	printf("\t\t\tbye!!!!!\n");
//
//	return 0;
//
//}



//*********************************************C_Primer_plus习题5.9**************************



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define f "fahrenheit"
#define c "celsius"
#define k "kelvin"

void temperature(double i);

int main(void)
{
	double input;
	int back;
	printf("This program convert fahrenheit to celsius and kelvin.\n");
	back = scanf("%lf", &input);
	while (back == 1)
	{
		temperature(input);
		printf("Enter next %s !(q to quit!)",f);
		back = scanf("%lf", &input);
	}

	printf("\t\t\tbye\n");

	return 0;
}

void temperature(double i)
{
	const double f_to_c = 32.00;
	const double c_to_k = 273.16;

	double ce, ke;
	printf("%s is: %.2lf\t", f, i);
	ce = 5.0 / 9.0 * (i - f_to_c);
	ke = ce + c_to_k;
	printf("%s is: %.2lf\t", c, ce);
	printf("%s is: %.2lf\t\n", k, ke);

 }
