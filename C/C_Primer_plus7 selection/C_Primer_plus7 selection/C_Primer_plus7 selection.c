#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>		//����ַ����Եĺ�����
#include <stdbool.h>	//��Ӳ��������ĺ�����

#define SPACE ' '
#define rate1 0.13230
#define rate2 0.15040
#define rate3 0.30025
#define rate4 0.34025
#define break1 360.0
#define break2 468.0
#define break3 720.0
#define base1 (rate1 * break1)
#define base2 (base1 + (break2 - break1) * rate2)
#define base3 (base2 + (break3 - break2) * rate3)

void _7_1();
void _7_2();
void _7_3();
void _7_4();
void _7_5_1();
void _7_5_2();
void _7_6();
void _7_7();
void _7_8();
void _7_9();
void _7_10_1();
void _7_10_2();
void _7_11();
void _7_12();



int main(void)
{
	//_7_1();
	//_7_2();
	//_7_3();
	//_7_4();
	//_7_5_1();
	//_7_5_2();
	//_7_6();
	//_7_7();
	//_7_8();
	//_7_9();
	//_7_9_1();
	//_7_10_1();
	//_7_10_2();
	//_7_11();
	_7_12();


	return 0;
}


//����P151ҳ
void _7_1()
{
	const int freezing = 0;
	float temperature;
	int cold_day = 0;
	int all_days = 0;
	int i = 0;

	printf("please enter the list of daily temperatures.\n");
	printf("Use celsius, and enter q to quit\n");
	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < 0)
		{
			cold_day++;
		}

	}
	if (cold_day != 0)
		printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_day / all_days);
	if (all_days == 0)
	{
		printf("No data entered!\n");
	}
	i = pow(2, 31) - 1;
	printf("%d \n", i);


}

//����P154
void _7_2()
{
	char ch; 

	ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();

	}

	rewind(stdin);

	//if (ch = '\n')
	//	printf("cao!!!");
	////printf("\n");
	//putchar(ch);


}

//����P155----����ctype.h��ͷ�ļ��������isalpha()����
void _7_3()
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}

	putchar(ch);

}

//����P157----�����ѵĳ���
void _7_4()
{
	float payment = -1.0, kwh = 0.0;
	int i = 0;

	printf("Please enter your electrical consumption: ");
	scanf("%f", &kwh);
	rewind(stdin);
	//printf("\n");
	//printf("%c", kwh);

	while (payment < 0)					//�����û����������ʾ��������
	{	
		//for(i = 0;)

		if (kwh >= 0 && kwh <= break1)							//0-360
			payment = kwh * rate1;
		else if (kwh > break1 && kwh < break2)					//360 - 468
			payment = base1 + (kwh - break1) * rate2;
		else if (kwh == break2)
			payment = base2;
		else if (kwh > break2 && kwh < break3)					//468 - 720
			payment = base2 + (kwh - break2) * rate3;
		else if (kwh == break3)
			payment = base3;
		else if (kwh > base3)									//>720
			payment = base3 + (kwh - break3) * rate4;
		else													// < 0
		{
			payment = -1.0;
			printf("Such an idiot! your input is absolutly wrong, ass**le!!!\n");
		}
		if (payment >= 0)
			printf("After cacculating ,your bill is $%.2f\n", payment);
		else
		{

			printf("You are an idiot!!!\n");
			printf("Your last input is completely wrong ,I'll give you another f**king chance to reinput it\n");	//��ʾ���볬���������뷶Χ����ʾ��������
			scanf("%f", &kwh);
			rewind(stdin);
			//printf("\n");
		}
	}
}

//����P161����΢�Ƚ�������㷨�� ʹ��ifǶ�����ʵ����ʾһ����������Լ��������ʾԼ��������Լ��������Ը�Լ���Ľ����������û��Լ��������ʾ����Ϊ����������������ַ���С���س����˳�����
void _7_5_1()
{
	int num = 0, i = 0, sequence = 0, outcome = 0, s[100] = { 0 }, div[100] = {0}, j = 0;
	int check;
	bool isprime = false;

	printf("Please enter an number to cacculate: ");
	check = scanf("%d", &num);	//��ѭ��������
	rewind(stdin);
	while (check && num > 0)		//��ѭ������������Ϸ��ַ������������������ַ����˳�����,����Ҫ�����������������������˳�����
	{
		for (i = 2; i <= num; i++)	//�����������ѭ��
		{	
			if ((num % i) == 0)		//����Ƿ��ܱ�����
			{
				sequence++;			//������sequence��Լ���ı���
				if(sequence == 1 && i == num)	//���sequenceʼ��Ϊ1 ��i�Ѿ��ӵ�num�ˣ�˵������Ϊ����
				{
					isprime = true;		//����������true
				}
				else	//���sequence����1��˵�������г����Լ�������Լ���������������͸�Լ����ֵ���������
				{
					s[sequence] = sequence;
					div[sequence] = i;
					
					isprime = false;
				}
			}
		}


		if (isprime == true)	//���Ϊ����������ʾ����Ϊ����
		{
			printf("\n%d is prime\n\n", num);
		}
		else		//���ΪԼ��
		{
			printf("The %dth divisor of the number you just typed is %d .\n", 1, 1);	//��ʾ��һ��Լ��1
			printf("and the outcome of the processing is %d\n\n", num);					//��ʾ��������1�Ľ��

			for (j = 1; j <= sequence; j++)
			{
				printf("The %dth divisor of the number you just typed is %d .\n", s[j]+1, div[j]);	//��ʾ��s[j]+1��Լ��
				printf("and the outcome of the processing is %d\n\n", num / div[j]);
			}
			printf("\nThe total number which the number you keyed in have %d\n\n", sequence + 1);	//��ʾ�ܹ�Լ���ĸ���
			
		}
		printf("please enter again: ");		//�����ٴ�����
		check = scanf("%d", &num);
		rewind(stdin);						//������뻺����
		sequence = 0;						//�����������㣬�Ա��´�������ʾ
		printf("\n");
	}


}

//����P161����΢�õ��㷨�� ʹ��ifǶ�����ʵ����ʾһ����������Լ��������ʾԼ��������Լ��������Ը�Լ���Ľ����������û��Լ��������ʾ����Ϊ����������������ַ���С���س����˳�����.
//�����ʽΪ��һ����ʾ�ж��ٸ�Լ����
//����ٰ�����Լ����С�������г�����
void _7_5_2()
{
	long num = 0, div = 0, divp[100] = { 0 }, diva[100] = { 0 };	//divp & diva ��ǰ��һ��ͺ���һ���Լ��	
	int i = 0, j = 0, k = 0;
	bool isprime = false;
	int seq = 0, total = 0;		//total���ܹ���Լ������

	printf("Please enter an integer for analysis: ");
	printf("Enter q to quit.\n");

	while (scanf("%d", &num) == 1 && num > 0)		//scanf��������ɹ���1��num�������0
	{
		rewind(stdin);		//������뻺����
		printf("\n");

		for (div = 2, isprime = true; div * div <= num; div++)		//�жϵ�num��ƽ����
		{
			if (num % div == 0)
			{
				isprime = false;		//����ܹ�����������������
			}

		}

		if (isprime == true)
		{
			printf("\n%d is prime\n\n", num);	//������ܱ���������Ϊ����
		}
		else
		{
			//�����·����޷����ɽ��Լ����ŵ����⣬���ܱ�����һ����ö�ٷ��ٲ���һ���ʱ�䣬ͬʱ������ϸ�������һ��
			for (i = 1; i * i <= num; i++)		//���м������жϵ�num��ƽ����
			{
				if (num % i == 0)		//���������
				{
					seq += 2;			//û����һ���ܹ���������i������ζ��ͬʱ������һ��һС������Լ��������seq+2��
					//printf("The %dth divisor of the number you just typed is %d .\n", seq, i);	//��ʾ��  ��Լ��
					//printf("and the outcome of the processing is %d\n\n", num / i);
					divp[seq / 2 - 1] = i;				//�ܹ�����num��iװ��divp��������ӵ�һ��Ԫ�ؿ�ʼ��ֱ���м��һ��Լ��
					diva[seq / 2 - 1] = num / i;		//��num / i �Ľ������i��Ӧ������һ��Լ��װ��diva��������ӵ�һ��Ԫ�ؿ�ʼ��ֱ���м��һ��Լ��
				}
			}
		}

		total = seq;		//�ܹ�������ֵ��seq������

		if (isprime == false)		//�����������
		{
			if (divp[((seq / 2) - 1)] != diva[((seq / 2) - 1)])		//���ǰ��һ�������������һ����������һ������һ��������ȣ�������num����ƽ��������ô��һ����ż����Լ�����磺num = 10��divp=1,2��diva = 10,5 ��
			{
				printf("There are %d divisors of the number you just typed !\n", total);		//total��seqһ����û����Ϊ�ظ����ֶ���1��
				printf("They are respectively: ");
				for (j = 0; j < (seq / 2); j++)			//diva��divpһ������������seq/2
				{
					printf("%d\t", divp[j]);
				}
				for (k = (seq / 2 - 1); k >= 0; k--)		//��Ϊdiva�ǴӴ�С������Ҫ��������������ü�������
				{
					printf("%d\t", diva[k]);
				}
			}
			else													//���ǰ��һ�������������һ����������һ������һ������ȣ�������num��ƽ��������ô��һ����ż����Լ�����磺num = 9��divp=1,3��diva = 9,3 ��
			{
				printf("There are %d divisors of the number you just typed !\n", total - 1);	
				printf("They are respectively: ");
				for (j = 0; j < (seq / 2 - 1); j++)		//diva��divpһ������������seq/2����������Ҫ��������һ��������Ϊ�Ǹ�����diva����Ҫ����ĵ�һ�����ظ��ˣ�������Ҫ��һ
				{
					printf("%d\t", divp[j]);
				}
				for (k = (seq / 2 - 1); k >= 0; k--)
				{
					printf("%d\t", diva[k]);
				}
			}
		}
		
		printf("\n");
		printf("Please enter again: ");		//�����ٴ�����
		//  scanf("%d", &num);
		rewind(stdin);						//������뻺����
		seq = 0;						//�����������㣬�Ա��´�������ʾ

	}
}

//����һ�������г������ź�˫��������������ַ��ĸ�����
void _7_6()
{
	char ch76;
	int charcount = 0;
	printf("\n\tPlease enter a sentence to analysis:\n");


	while (!ispunct((ch76 = getchar())))	//ָ�����������ַ��������봫�룡
	{
		if (ch76 != '\"' && ch76 != '\'')
			charcount++;
	}
	printf("Your sentence has %d characters.", charcount);

}

//P167 �ó����ȡһ�λ�����������������ַ�������������|�����յ�
void _7_7()
{
	char ch77, prev = ' ';
	int charct = 0, lines = 0, wordct = 0, inword = 1, in_line = 1, p_line = 0;;

	while (1)
	{
		printf("\nPlease enter a phrase to analysis: [| to terminate!]\n");
		while ((ch77 = getchar()) != '|')
		{
			charct++;
			if (!isspace(ch77) && inword == 1)
			{
				inword = 0;
				wordct++;
			}
			if (isspace(ch77) && inword == 0)
				inword = 1;
			if (ch77 != '\n' && in_line == 1)
			{
				lines++;
				in_line = 0;
			}
			if (ch77 == '\n' && in_line == 0)
				in_line = 1;

			prev = ch77;
		}

		if (prev == '\n')
			p_line = 1;

		printf("characters = %d, \twords = %d \tlines = %d \tpartial line = %d \t\n", charct, wordct, lines, p_line);
		putchar(ch77);
		rewind(stdin);
		charct = 0, lines = 1, wordct = 0;
	}
}

//P169 �ó������ˢ���������ǽ����Ҫ���ٹ����ᣬ�������ϰ�ֻ�����޵����ᣩ����������������ϰ��
//Ҫ��1: can��Ҫ���ֵ�������
//Ҫ��2: ǽ�ڱ���ȫ��ˢ�꣬�����������᲻����ʣ��ǽ�ڲ�ˢ��
void _7_8()
{
	int cans = 0;
	int sq_feet = 0,coverage = 350;
	printf("Please enter the square feet for painting: \n");
	while (scanf("%d", &sq_feet) == 1 && sq_feet > 0)
	{
		cans = sq_feet / coverage;
		cans += (sq_feet % coverage == 0) ? 0 : 1;
		printf("You need %d %s of paint. \n", cans, (cans > 1) ? "cans" : "can");
		printf("Please enter next value (q to quit): \n");
	}
	

}

//P170 �����������з���������ϵͳ�������ʾ����n�����ݣ����ǵ�ƽ��ֵ�Ƕ��٣��Լ����������е������ͷ֣�������Χ�ڣ�0-100.0��
void _7_9()
{
	const float MIN = 0.0;
	const float MAX = 100.0;
	float score = 0;
	float total = 0;

	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score(q to quit): ");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f is an invalid value. Try again:", score);
			continue;
		}
		printf("Accepting %0.1f:\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Enter next score (q to quit): ");
	}
	if (n > 0)
	{
		printf("Average of %d scores is %0.1f.\n", n, total / n);
		printf("Lowest = %0.1f, highest = %0.1f\n", min, max);
	}
	else
	{
		printf("No cvalid scores were entered.\n");
	}

}

//ѭ����ȡ10���ַ��������ͬ�����ַ�������ʵ�ַ�ʽ��
void _7_9_1()
{
	int count = 0;
	char ch;

	while (count < 10)		////ִ����continue�󣬲�ִ��count++������ʮ���ַ��ﲻ�������з���
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
		count++;
	}

	printf("\n********************************************************************\n");
	for (count = 0; count < 10; count++)	//ִ����continue����Ҫ����һ��count++��������10���ַ����ǰ������з��ģ�
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
	}
}

//��һ��ѭ��������ε�������������������ַ�������ֹ����(�Լ��Ĵ𰸣�����)
void _7_10_1()
{
	float width = .0, length = .0;
	//int i;

	printf("Please enter the length and width: \n");
	while (scanf("%f %f", &width, &length) == 2)
	{
		printf("Area = %.2lf\n", width * (double)length);
	}
	
}

//P172 ��һ��ѭ��������ε�������������������ַ�������ֹ����(���ϵĵĴ𰸣���������������Ϊ�˽���break������)
void _7_10_2()
{
	float width = .0, length = .0;
	//int i;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("length = %.2f: \n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("width = %.2f\n", width);

		printf("Area = %.2lf\n", width * (double)length);
		printf("Enter the length of the rectangle:\n");
	}
	printf("\nDone!\n");
}

//P173 �ó������һ����ĸ��Ȼ���ӡ�����ĸ����Ӧ��ͷ�Ķ�����
void _7_11()
{
	char ch;

	printf("Give me a letter of the alphabet, and i will give ");
	printf("an animal name\nbegining with that letter.\n");
	printf("Please type in a letter; Type # to end my act.\n");
	while((ch = getchar()) != '#')	//����#��������
	{
		if ('\n' == ch)		//����û�õĻ��з�
			continue;
		if (islower(ch))	//��ʽ��ʼ��������
			switch (ch)
			{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			case 'c':
				printf("coati, recoonlike mammal\n");
				break;
			case 'd':
				printf("desman, aquatic molelike critter\n");
				break;
			case 'e':
				printf("echidna, the spiny anteater\n");
			case 'f':
				printf("fisher, brownish marten\n");
				break;
			default:
				printf("That's a stumper!\n");

			}
		else
			printf("I recognize only lowercase letters.\n");
		while (getchar() != '\n')		//ʵ��ֻ��ȡ��һ���ַ������������ַ��Ĺ��ܴ���
			continue;
		printf("Please type another letter or a #.\n");

	}

	printf("bye!\n");
}

//P176 ���ر�ǩ switch���
//ͳ��һ�仰��Ԫ����ĸ���ֵĴ�����
void _7_12()
{
	int a_ct, e_ct, i_ct, o_ct, u_ct, other;
	char ch;

	a_ct = e_ct = i_ct = o_ct = u_ct = other = 0;
	printf("Enter some text(# to quit) : \t");
	while ((ch = getchar()) != '#')// �������������Ա���switch�еĶ��ر�ǩ�� swicth(toupper(ch))���ߣ� swicth(tolower(ch))
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			a_ct++;
			break;
		case 'e':
		case 'E':
			e_ct++;
			break;
		case 'i':
		case 'I':
			i_ct++;
			break;
		case 'o':
		case 'O':
			o_ct++;
			break;
		case 'u':
		case'U':
			u_ct++;
			break;
		default: 
			other++;
			break;
		}

	}

	printf("number of vowels:	A	   E	   I	   O	   U\n");			//�������������ѵ�����
	printf("    \t\t     %4d	%4d	%4d	%4d	%4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
	printf("number of other charaters: \t\t%4d", other);


}








