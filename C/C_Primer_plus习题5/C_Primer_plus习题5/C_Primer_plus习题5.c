//*************************************************C_Primer_plusϰ��5******************************************
//******************************************2020-7-25 15:43:03*******************************************
//

//*********************************************C_Primer_plusϰ��5.1**************************


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

//*********************************************C_Primer_plusϰ��5.2**************************

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
//	num_ass = num + 1;	//+1��Ϊ������������0��ʱ�������whileֱ��Ϊ�񣬴Ӷ��ó�λ������Ϊ0�����γ��������
//	printf("num_ass = %d\n", num_ass);
//
//	//�ж��������ֳ��ȵķ�����
//
//	while (num_ass != 0)	//ʲôʱ��Ϊ�棿
//	{
//		num_ass = (num_ass-1) / 10;		//-1��Ϊ�˵����ո�+1��Ч��
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

//*********************************************C_Primer_plusϰ��5.3**************************
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
//	printf("������ÿ������Ļ�������IF(),����IF()	ELSE()�ȣ�");
//	printf("���޷�������浱days��1ʱ���ӡ�����ҵڶ���Ϊ��������bug��\n");
//	printf("Please enter days\n");
//	scanf("%d", &days);
//	days_ass = days;
//
//	while (days > 0)//Ӣ���﷨�ϵ������Ĵ�������whileʵ�֣�������BUG�������뵽����취���л����ٸ���
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
//	//�ж������0ʱ��Ĵ���
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

//*********************************************C_Primer_plusϰ��5.4**************************

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



//*********************************************C_Primer_plusϰ��5.5&6**************************

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
////*********************************************C_Primer_plusϰ��5.7**************************
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
///*һ��С��д���˴�����ֵ�ĺ�������ĿҪ�����ȶ���main������ġ�������������*/
///*double cubic(double n);
//int main(void)
//{
//	double num;
//	printf("Please enter the double datum to calc cubic:");
//	scanf("%lf", &num);
//	printf("the number's calc cubic is %.6lf\n", cubic(num));
//
//	printf("һ��С��д���˴�����ֵ�ĺ�������ĿҪ�����ȶ���main������ġ�������������\n");
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
////��������ֵ�ĺ���
//void cubic(double n);
//int main(void)
//{
//	double num;
//	printf("Please enter the double datum to calc cubic:");
//	scanf("%lf", &num);
//	cubic(num);
//
//	printf("һ��С��д���˴�����ֵ�ĺ�������ĿҪ�����ȶ���main������ġ�������������\n");
//
//	return 0;
//}
//
//void cubic(double n)
//{
//	printf("the number's calc cubic is %.6lf\n", n * n * n);
//
//}



//*********************************************C_Primer_plusϰ��5.8**************************
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



//*********************************************C_Primer_plusϰ��5.9**************************



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
