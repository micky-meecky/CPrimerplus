#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����
#define salaryh 10.00
#define tax1 0.15
#define tax2 0.2
#define tax3 0.25


void q_r_1();
void q_r_2();
void q_r_3();
void _q_r_4();
void _q_r_5();
void _q_r_6();
void _q_r_7();
void _q_r_8();
void _q_r_9_1();
void _q_r_9_2();
void _q_r_10();
void _q_r_11();


//C Primer plus�����µı����ϰ��
int main(void)
{
	//q_r_1();
	//q_r_2();
	//q_r_3();
	//_q_r_4();
	//_q_r_5();
	//_q_r_6();
	//_q_r_7();
	//_q_r_8();
	//_q_r_9_1();
	//_q_r_9_2();
	//_q_r_10();
	_q_r_11();

	return 0;
}


//��дһ�����򣬶�ȡ���룬����#�ַ�Ϊֹ��Ȼ�󱨸��ȡ�Ŀո��������������������ַ���������
void q_r_1()
{
	char ch;
	int spct =0, etct = 0, oct = 0;

	printf("Enter some text (# to quit ):\t");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case ' ':
			spct++;
			break;
		case '\n':
			etct++;
			break;
		default:
			oct++;
			break;
		}
	}

	printf("there are space : %3d, enter : %3d, other : %4d.\n", spct, etct, oct);


}

//��дһ�����򣬶�ȡ���룬����#�ַ�Ϊֹ������Ӧ�ô�ӡÿ����������Ӧ��ACSII�루ʮ���ƣ���
//ÿ�д�ӡ8�� �ַ�-ACSII�� ���
void q_r_2()
{
	char ch;
	int ct = 0;

	printf("Enter some text (# to quit ):\t");
	while ((ch = getchar()) != '#')
	{
		ct++;
		if (ct < 8)
		{
			printf("%4c - %4d   ", ch, (int)ch);
		}
		else
		{
			ct = 0;
			printf("\n");
		}
	}



}

//��ȡ������ֱ���û������㡣��������󣬳���Ӧ�����û������ż��������ż��ƽ��ֵ������������������ƽ��ֵ��(Ϊ��������Ŀ����bug������˵�����Ϊ0ʱ���޷������ĳ��棬������ʾ)
void q_r_3()
{
	int num;
	int odds = 0, evens = 0;
	int oct = 0, ect = 0;
	printf("\nPlease enter some integers to analysis:\n");

	while(scanf("%d",&num) == 1)
	{
		if (num == 0)
			break;
		if ((num % 2) == 0)
		{
			ect++;
			evens += num;
		}
		else
		{
			oct++;
			odds += num;
		}
	}
	if (ect != 0)
		printf("The number of even is : %d, and the average of even number is %.2f.\n", ect, (float)((float)evens / ect));
	else
		printf("The number of even is : %d, ****ERROR!!!****, evensum can't be devided ba zero!\n", ect);

	if(oct != 0)
		printf("The number of odd is : %d, and the average of odd number is %.2f.\n", oct, (float)((float)odds / oct));
	else
		printf("The number of even is : %d, ****ERROR!!!****, oddsum can't be devided ba zero!\n",oct);

}

//ʹ��if ... else ��дһ�������ȡ���룬����#Ϊֹ���ã��滻��ţ����������滻ԭ���ģ�����󱨸�����˶��ٴ��滻, ��������滻��ľ��ӣ�
void _q_r_4()
{
	char ch;
	int ct = 0;
	printf("Please enter a sentence(# to quit):\n");
	//printf("%c", '!!');
	while ((ch = getchar()) != '#')
	{
		if (ch == '.' || ch == '!')
		{
			if (ch == '.')
			{
				ch = '!';
				putchar(ch);
				ct++;
			}
			else
			{
				if (ch == '!')
				{
					ch = '!';
					putchar(ch);
					putchar(ch);
					ct++;
				}
				else
					putchar(ch);
			}
		}
		else
			putchar(ch);
	}
	printf("\nReplaced %d times\n", ct);

}

//��switch��д�����⣻so easy!!!
void _q_r_5()
{
	char ch;
	int ct = 0;

	printf("Please enter a sentence(# to quit):\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			putchar(ch);
			ct++;
			break;
		case '!':
			ch = '!';
			putchar(ch);
			putchar(ch);
			ct++;
			break;
		default:
			putchar(ch);
			break;
			
		}

	}
	printf("\nReplaced %d times\n", ct);

}

//��дһ�����򣬶�ȡ���룬����ei���ֵĴ�����
void _q_r_6()
{
	char ch;
	int ct = 0;

	printf("Please enter a sentence(# to quit):\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e' || ch == 'i')
		{
			if(ch == 'e')
				continue;
			else
				ct++;
		}

	}
	rewind(stdin);
	printf("\n 'ei'occured %d times\n", ct);
}

//7. ��ʾ�û�����һ�ܹ�����Сʱ������ӡ�����ܶ˰�𣬾����롣�������� = 10$/h. �Ӱࣨ����40H��= 1.5�����ʣ� ˰�ʣ� ǰ300$Ϊ15%����150$Ϊ20%������Ϊ25%��
void _q_r_7()
{
	float grosswage = 300.0, wage = 300.0;
	float tax;
	int hour = 40;

	printf("Please enter your work hour: ");
	while (scanf("%d", &hour) == 1)
	{
		if (hour < 0)
			printf("Are you boss? How do you work for hours of nagetive number? Enter again");
		else if (hour >= 0 && hour <= 40)
		{
			grosswage = hour * salaryh;
			break;
		}
		else if (hour > 40 && hour < (7 * 24))
		{
			grosswage = hour * 40 + (hour - 40) * 1.5 * 10;
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

}

//8. �ڵ�7���ǰ���£������������ʹ̶���һ�����ó������һ����ѡ��ĵȼ��˵���ʹ��switch��ɹ��ʵȼ�ѡ�񣬳���������ʽӦ��������ʾ�������������Ҫ��
void _q_r_8()
{
	float grosswage = 300.0, wage = 300.0, rate = 0.0;
	float tax;
	int hour = 40, selection = 0;

	
	printf("**************************************************************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr \t\t\t 2) $9.33/hr\n");
	printf("3) $10.00/hr \t\t\t 4) $11.20/hr\n");
	printf("5) quit\n");
	printf("**************************************************************************************************************\n");

	while (scanf("%d", &selection) == 1)
	{
		switch (selection)
		{
		case 1:
			rate = 8.75;
			break;
		case 2:
			rate = 9.33;
			break;
		case 3:
			rate = 10.00;
			break;
		case 4:
			rate = 11.20;
			break;
		case 5:
			goto lable1;
			break;
		default:
			printf("Please enter a currect charater : ");
			continue;
		}
		printf("You have selected the %d selection\n", selection);
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

//9.1. ��дһ������ֻ���������������룬Ȼ����ʾ����С�ڻ���������������������һ���㷨��ö�ٷ���
void _q_r_9_1()
{
	int num, sum = 0;
	int i, j, a = 0;
	printf("Please enter an number to analysis: \n");
	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
		{
			printf("Try again");
			continue;
		}
		else
		{
			for (j = 2; j <= num; j++)		//ȫ�����������һ�飻
			{
				for (i = 2; i < j; i++)
				{
					if (j % i == 0)
						a++;		//������ǩ
				}
				if (a == 0)
				{
					printf("%4d\t", j);
					sum++;
				}
				else
				{
					a = 0;
					
				}
			}
		}
		printf("\n����%d������\n", sum);
		sum = 0;
		rewind(stdin);

	}
}

//9.2. ��дһ������ֻ���������������룬Ȼ����ʾ����С�ڻ��������������������ڶ����㷨�����бȽϷ������֮������һ���ʱ�䣩
void _q_r_9_2()
{
	int num, sum = 0;
	int i, j, a = 0;
	printf("Please enter an number to analysis: \n");
	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
		{
			printf("Try again");
			continue;
		}
		else
		{
			for (j = 2; j <= num; j++)
			{
				for (i = 2; i * i <= j; i++)		//�����<=��������=�ţ���������ж�һ��ƽ����
				{
					if (j % i == 0)
						a++;
				}
				if (a == 0)
				{
					printf("%4d\t", j);
					sum++;
				}
				else
				{
					a = 0;

				}
			}
		}
		printf("\n����%d������\n", sum);
		sum = 0;
		rewind(stdin);

	}
}

//10. ��������1988��˰�յ���Ŀ���������
void _q_r_10()
{
	float tax = 100.0, wg = 102.0, ratep = 0, ratea = 0;
	int type = 1, type_ef = 0, key = 1;
	float t1wg = 17850.0, t2wg = 23900.0, t3wg = 29750.0, t4wg = 14875.0, threshold = 0.0;
	float tp = 0.15, ta = 0.28;
	char ch;

	printf("Pls enter 'y' to get into system or quit: \n");
	ch = getchar();
	while (ch == 'y')
	{
		rewind(stdin);
		printf("Pls choose type you are below (1, 2, 3, 4,q to quit): \n");
	
		while (key)
		{	
			key = scanf("%d", &type);
			if (key == 0)
			{
				key = 1;		//��1����Ϊֻ�е�1ʱ���ܽ�����ѭ��
				rewind(stdin);
				printf("ERROR!!!\nPls enter again:\n");
				continue;
			}

			switch (type)
			{
			case 1:
				printf("You are single, so your tax rate is %.2f when your wage is under %.2f, and %.2f%% when your wage is above %.2f\n", tp, t1wg, ta, t1wg);
				ratep = tp;
				ratea = ta;
				threshold = t1wg;
				break;
			case 2:
				printf("You are head of a household, so your tax rate is %.2f when your wage is under %.2f, and %.2f%% when your wage is above %.2f\n", tp, t2wg, ta, t2wg);
				ratep = tp;
				ratea = ta;
				threshold = t2wg;
				break;
			case 3:
				printf("You are married, so your tax rate is %.2f when your wage is under %.2f, and %.2f%% when your wage is above %.2f\n", tp, t3wg, ta, t3wg);
				ratep = tp;
				ratea = ta;
				threshold = t3wg;
				break;
			case 4:
				printf("I'm sorry for that you are devorced, so your tax rate is %.2f when your wage is under %.2f, and %.2f%% when your wage is above %.2f\n", tp, t4wg, ta, t4wg);
				ratep = tp;
				ratea = ta;
				threshold = t4wg;
				break;
			default:
				printf("Your input number has surpass the limit, please enter again: ");
				type_ef++;	//typeЧ��������������볬����Χ���������Ϊ��0,
				break;		//�ڴ�break�˳�switch
			}
			if (type_ef == 0)
				break;		//����˳�ѭ��
			else
			{
				type_ef = 0;		//���type_ef ��= 0 ��˵��������Χ����ʾ��������
				continue;
			}
			rewind(stdin);
		}
		printf("Please enter your wage before paying tax: ");
		if(type)

		while (scanf("%f", &wg) == 1)	//�������壬�л�����һ��bug���磺����Ϊ�������ַ�����ô�죿
		{
			if (wg < 0)
				printf("Are you mad? How do you work for hours of nagetive number? Enter again: ");
			else if (wg >= 0 && wg <= threshold)
			{
				tax = wg * ratep;
				break;
			}
			else
			{
				tax = threshold * ratep + (wg - threshold) * ratea;
				break;
			}
			rewind(stdin);
		}

		printf("You should get %.2f pay, and you should pay tax %.2f. \n", wg - tax, tax);

		//printf("\nPls choose type you are below again(1, 2, 3, 4,q to quit): \n");
		rewind(stdin);
		printf("If you want to play again, you could enter 'y' again!(enter 'n' to say goodbey!)\n");
		ch = getchar();
		if (ch == 'n')
		{
			printf("\nBey!!!!\n");
			break;
		}
	}
}


void _q_r_11()
{
	float uprc[3] = { 2.05, 1.15, 1.09 }, bounce[3] = { 0.0 }, price[3] = { 0.0 } ,puresum = .0, discount = .0, weight = .0, dlv_bg = .0, totalsum = .0;
	//char type[3] = { "artichoke","beet" };
	int a = 0, b = 0, c = 0;
	int key = 1, key2 = 1, i, j;
	char ch;
	

	printf("***********************************************************************************************************");
	printf("\n");
	printf("type:artichoke  beet  carrot ;respectively uint price :2.05$/b  1.15$/b  1.09$/b\n");
	printf("\n");
	printf("***********************************************************************************************************");

	printf("please enter a character within 'a' 'b' 'c'\n");

	while (key)
	{
		key = scanf("%c", &ch);
		if (key == 0)
		{
			key = 1;
			printf("please enter a currect character again: \n");
			continue;
		}
		switch (ch)
		{
		case 'a':
			printf("you have choose artichoke, its unit price is %.2f\n", uprc[0]);
			printf("pls enter the weight you want: ");
			scanf("%d", &a);
			//bounce[0] = a;
			bounce[0] += a;
			price[0] = uprc[0] * bounce[0];
			rewind(stdin);
			continue;
		case 'b':
			printf("you have choose beet, its unit price is %.2f\n", uprc[1]);
			printf("pls enter the weight you want: ");
			scanf("%d", &b);
			//bounce[1] = b;
			bounce[1] += b;
			price[1] = uprc[1] * bounce[1];
			rewind(stdin);
			continue;
		case 'c':
			printf("you have choose carrot, its unit price is %.2f\n", uprc[2]);
			printf("pls enter the weight you want: ");
			scanf("%d", &c);
			//bounce[2] = c;
			bounce[2] += c;
			price[2] = uprc[2] * bounce[2];
			rewind(stdin);
			continue;
		case 'q':
			break;
		default:
			key = 1;
			printf("Your input number has surpass the limit, please choose again: ");
			continue;
		}

		for (i = 0; i < 3; i++)
			totalsum += price[i];
		if (totalsum <= 100)
			totalsum *= 0.95;
		printf("The total consumption is %.2f\n", totalsum);
		//deliver and bagagges consumption
		for (j = 0; j < 3; j++)
			weight += bounce[j];

		while (key2)
		{
			if (weight <= 0)
			{
				printf("what the fuck? try again: ");
				key2 = 1;
				continue;
			}
			else if (weight <= 5 && weight > 0)
			{
				dlv_bg = 6.5;
				break;
			}
			else if (weight > 5 && weight < 20)
			{
				dlv_bg = 14.0;
				break;
			}
			else
			{
				dlv_bg = 14.0 + (weight - 20) * 0.5;
				break;
			}
		}
		puresum = totalsum - dlv_bg;
		printf("So, the pure consumption is %.2f\n", puresum);
		printf("your discount is %.2f\n", dlv_bg);
		break;
	}
		printf("Bey!!!!\n");
	




}





