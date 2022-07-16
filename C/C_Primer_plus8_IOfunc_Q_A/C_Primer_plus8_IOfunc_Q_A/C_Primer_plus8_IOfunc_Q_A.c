#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����

#define salaryh 10.00
#define tax1 0.15
#define tax2 0.2
#define tax3 0.25

void _81(void);
void _82(void);
void _83(void);
void _84(void);
void _85(void);

void _86(void);
char get_1st(void);

void _87(void);

void _88(void);
char getselection(void);
float get_num1(void);
float get_num2(void);
float add(float n1, float n2);
float substract(float n1, float n2);
float multiply(float n1, float n2);
float divide(float n1, float n2);

bool lable = true;

//C Primer plus�ڰ��µı��ѵ��
int main(void)
{
	//_81();
	//_82();
	//_83();
	//_84();
	//_85();
	//_86();
	//_87();
	_88();

	return 0;
}
//8.1���һ������ͳ���ڶ����ļ���β�ַ�֮ǰ���ַ���
void _81(void)
{
	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		count++;
	}
	printf("\nthere are %d characters. \n", count);
}

/*
8.2 ������EOF֮ǰ����������Ϊ�ַ�����ȡ������Ҫ��ӡÿ��������ַ�������Ӧ��ASCIIʮ����ֵ��ע�⣬��ASCII�����У��ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ���
����Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ\n��\t������ʹ�ÿ����ַ���ʾ�������磬ASCII��1��Ctrl + A������ʾΪ ^ A��ע�⣬A��ASCIIֵ��Ctrl + A��ֵ����64�������Ǵ�ӡ
�ַ�Ҳ�����ƵĹ�ϵ����ÿ���������з���ӡ�µ�һ��֮�⣬ÿ�д�ӡ10��ֵ��
*/
void _82(void)
{
	int ch;
	int count = 0;
	FILE* fp;
	char fname[50];

	printf("Please enter the file name :\n");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open the file.\n");
		exit(1);
	}

	while ((ch = getc(fp)) != EOF)
	{

		if (ch < ' ')
		{
			if (ch == 10)
			{
				putchar('\\');
				putchar('n');
				printf("\t");
				count++;
			}
			else if (ch == 9)
			{
				putchar('\\');
				putchar('t');
				printf("\t");
				count++;
			}
			else
			{
				count++;
				putchar('^');
				putchar(ch + 64);
				printf("\t");
			}
		}
		else
		{
			putchar(ch);
			printf("\t");
			count++;
		}
		if (count == 10)
		{
			printf("\n");
			count = 0;
		}
	}
	fclose(fp);
	
	return 0;

}

/*
8.3 ��дһ������������ EOF ֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ����������Сд��ĸ��ֵ�������ġ�����ʹ��ctype.h���к��ʵķ��ຯ��������
*/
void _83(void)
{
	int ch;
	int cd, cx;		//cd��ָ��д�ģ�cx��ָСд��
	cd = cx = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			cx++;
		else if (isupper(ch))
			cd++;
		else
		{
			continue;
		}
	}
	printf("uppers have %d.\nlowers have %d.\n", cd, cx);
}

/*
8.4 ��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ����ƽ��ÿ�����ʵ���ĸ������Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ�������Ҳ��Ӧ��ͳ�ƣ�����������ʱ��ͬ������ô��
�������Ƚ�������㣬����ʹ��ctype.hϵ���е�ispunct()������
*/
void _84(void)
{
	char ch;
	int wordc = 0, sumc = 0;
	int efc = 0;
	float ave = .0;
	bool inword = false;

	printf("Please enter a phrase of words:\n");
	while ((ch = getchar()) != EOF)
	{
		sumc++;
		if ((!ispunct(ch) && !isspace(ch)) && !inword)
		{
			wordc++;
			inword = true;
		}
		if((ispunct(ch) || isspace(ch)) && inword)
		{
			inword = false;
		}

		if (ispunct(ch) || isspace(ch))
			sumc--;
	}

	efc = sumc;
	ave = (double)efc / (double)wordc;
	printf("efc = %d\t", efc);
	printf("word count = %d\n", wordc);
	printf("There are %.2lf average characters in each word.\n", ave);



}

/*
8.5 �޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬���������50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ�β²��ֵӦ��50��100��ֵ��Ҳ����75�������
�β´��ˣ���ô��һ�β²��ֵӦ��50��75����ֵ���ȵȡ�ʹ�ö��ֲ��ң�binary search�����ԣ�����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ�
*/
void _85(void)
{
	int MAX = 100;
	int MIN = 0;
	char prech, ch;
	int num = 50;
	double test = 0.0;

	printf("Pick an integer from 1 to 100 .i will try to gerss it .\n");
	printf("Response with a d if my guess is over!\n or with a x if my guess is less!\n or 6 if I were right!\n ");
	printf("I guess it is %d\n", num);
	while ((ch = getchar()))
	{
		while (getchar() != '\n')
			continue;
		if (ch == 'x')
		{
			MIN = num;
			printf("oh! bigger.\n Let me try again: ");
			test = (((double)num + (double)MAX) / 2.0);
			//printf("\ntest = %.2lf\n", test);
			if(test <= 99)													//���100����²ⷶΧ���棻������Զ���ֻ�ܲµ�99
				printf("I guess it is %d\n", num = (num + MAX) / 2);
			else
				printf("I guess it is %d\n", 100);
			
			prech = ch;
		}
		else if (ch == 'd')
		{
			MAX = num;
			printf("oh! smaller.\n Let me try again: ");
			printf("I guess it is %d\n", num = (num + MIN) / 2);
			prech = ch;
		}
		else if (ch == '6')
		{
			printf("I know I can do it! \n");
			break;
		}
		else
		{
			printf("Sorry ! I don't understand. Please enter again: ");
			continue;
		}
	}

	printf("I know I can do it! \n");
}


/*
8.6 �޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�1���ǿհ��ַ�������һ���򵥵ĳ����в���
*/
void _86(void)
{
	int ch;
	//int num;
	ch = get_1st();
	printf("%c\n", ch);
	printf("Bey!\n");
}
char get_1st(void)
{
	int ch;

	while (isspace((ch = getchar())))
		continue;
	return ch;
}

/*
8.7 �޸ĵ�7�µı����ϰ8�����ַ��������ֱ�ǲ˵���ѡ���q����5��Ϊ��������ı��
*/
void _87(void)
{
	float grosswage = 300.0, wage = 300.0, rate = 0.0;
	float tax;
	int hour = 40;
	char ch;


	printf("**************************************************************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr \t\t\t b) $9.33/hr\n");
	printf("c) $10.00/hr \t\t\t d) $11.20/hr\n");
	printf("q) quit\n");
	printf("**************************************************************************************************************\n");
	
	while ((ch = get_1st()) != 'q')
	{
		while (getchar() != '\n')
			continue;
		switch (ch)
		{
		case 'a':
			rate = 8.75;
			break;
		case 'b':
			rate = 9.33;
			break;
		case 'c':
			rate = 10.00;
			break;
		case 'd':
			rate = 11.20;
			break;
		default:
			printf("Please enter a currect charater : ");
			continue;
		}
		printf("You have selected the %c selection\n", ch);
		printf("Please enter your work hour: ");
		break;
	}

	while (scanf("%d", &hour) == 1)
	{
		if (hour < 0)
			printf("Are you boss? How do you work for hours of nagetive number? Enter again");
		else if (hour >= 0 && hour <= 40)
		{
			grosswage = hour * rate;
			break;
		}
		else if (hour > 40 && hour < (7 * 24))
		{
			grosswage = hour * 40 + (hour - 40) * 1.5 * rate;
			break;
		}
		else
		{
			printf("Are a dipshit?\n\n Try again!!!");
		}
	}

	if (grosswage <= 300)
		tax = grosswage * tax1;
	else if (grosswage > 300 && grosswage <= 450)
		tax = 300 * 0.15 + (grosswage - 300) * tax2;
	else
		tax = 300 * tax1 + 150 * tax2 + (grosswage - 450) * tax3;

	wage = grosswage - tax;

	printf("So, you have worked for %3d hours in this week.\n Your gross pay is %.2f dollars,\n and the tax you have to pay is %.2f,\n and your pure wage is %.2f.\n ", hour, grosswage, tax, wage);
lable1: printf("\nbye!\n");

}

/*
8.8 ��дһ��������ʾһ���ṩ�ӷ����������˷��������Ĳ˵�������û�ѡ���ѡ��󣬳�����ʾ�û������������֣�Ȼ��ִ���û��ղ�ѡ��Ĳ������ó���ֻ���ܲ˵��ṩ��ѡ�����ʹ��float���͵ı��������û���������֣�����û�����ʧ�ܣ��������ٴ����롣���г�������ʱ������û�����0��Ϊ��2������������������Ӧ��ʾ�û���������һ����ֵ��
�ó����һ������ʾ�����£�
Enter the operation of your choice:
a. add                s. subtract
m. multiply       d. divide
q. quit
a
...(������)
*/

void _88(void)
{
	char ch = 'c';
	float num1, num2;
	float otcm;

	printf("Enter the operation of your choice:\n");
	printf("a. add                s. subtract\n");	
	printf("m. multiply		      d. divide\n");
	printf("q: quit\n");
	while ((ch = getselection()) != 'q')
	{
		switch (ch)
		{
		case 'a':
			printf("you have choose add.\n");
			num1 = get_num1();
			num2 = get_num2();
			add(num1, num2);
			break;
		case 's':
			printf("you have choose substract.\n");
			num1 = get_num1();
			num2 = get_num2();
			substract(num1, num2);
			break;
		case 'm':
			printf("you have choose multiply.\n");
			num1 = get_num1();
			num2 = get_num2();
			multiply(num1, num2);
			break;
		case 'd':
			printf("you have choose divide.\n");
			num1 = get_num1();
			num2 = get_num2();
			if (num2 == 0.0 && lable == true)
			{
				printf("Enter an number other than 0: ");
				lable = false;
				num2 = get_num2();
				
			}
			divide(num1, num2);
			break;
		default:
			ch = 'c';
			
			break;
		}
		if (ch == 'c')
		{
			printf("Ouch! there is no this option. \nPlease try again: ");
			continue; 
		}
		printf("Enter the operation of your choice:\n");
	}

	printf("Bey!\n");

}

char getselection(void)
{
	int ch;
	while (isspace(ch = getchar()))
	{
	
			continue;
	}	
	while (getchar() != '\n')
		continue;
	return ch;
}
float get_num1(void)
{
	float num1;
	char ch;
	printf("Enter the first number: ");
	while (scanf("%f", &num1) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an effective number.\n");
		printf("Please enter anumber, such as 2.3, -1.738E8, or 3: ");
	
		continue;
		
	}
	while (getchar() != '\n')
		continue;
	return num1;
}
float get_num2(void)
{
	float num2;
	char ch;
	if (lable == false)
	{
		while (scanf("%f", &num2) != 1)
		{
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an effective number.\n");
			printf("Please enter anumber, such as 2.3, -1.738E8, or 3: ");
			lable = true;

			continue;
		}
		while (getchar() != '\n')
			continue;
	}
	else
	{	
		printf("Enter the 2rd number: ");
		while (scanf("%f", &num2) != 1)
		{
		
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an effective number.\n");
			printf("Please enter anumber, such as 2.3, -1.738E8, or 3: ");
			continue;
		}
		while (getchar() != '\n')
			continue;
	}
	return num2;
}
float add(float n1, float n2)
{
	float otk;
	otk = n1 + n2;
	printf("\n%.2f + %2.f = %.2f\n", n1, n2, otk);
	return 1.0;
}
float substract(float n1, float n2)
{
	float otk;
	otk = n1 - n2;
	printf("\n%.2f - %2.f = %.2f\n", n1, n2, otk);
	return 2.0;
}
float multiply(float n1, float n2)
{
	float otk;
	otk = n1 * n2;
	printf("\n%.2f * %2.f = %.2f\n", n1, n2, otk);
	return 3.0;
}
float divide(float n1, float n2)
{
	float otk;
	otk = n1 / n2;
	printf("\n%.2f / %2.f = %.2f\n", n1, n2, otk);
	return 4.0;
}

