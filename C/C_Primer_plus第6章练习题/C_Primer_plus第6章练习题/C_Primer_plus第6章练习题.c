//************************************C_Primer_plus��6����ϰ��*****************************
//***********************************2020-8-12 20:23:35*****************************************


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#define longth 15
#define Dunbars_number 150

int cube(int n);
int square(int n);
void Frist_ques(void);
void Second_ques(void);
void Third_ques(void);
void Forth_ques(void);
void Fifth_ques(void);
void Sixth_ques(void);
void Seventh_ques(void);
void Eighth_ques(void);
void tenth_ques(void);
void eleventh_ques(void);
void twelveth_ques(void);
void thirteenth_ques(void);
void fourteenth_ques(void);
void fifteenth_ques(void);
void Sixteenth_ques(void);
void Seventeenth_ques(void);
void eighteenth_ques(void);



int main(void)
{
	//Frist_ques();//��һ��
	//Second_ques();//�ڶ���
	//Third_ques();//������
	//Forth_ques();
	//Fifth_ques();
	//Sixth_ques();
	//Seventh_ques();
	//Eighth_ques();
	//tenth_ques();
	//eleventh_ques();
	//twelveth_ques();
	//thirteenth_ques();
	//fourteenth_ques();
	//fifteenth_ques();
	//Sixteenth_ques();
	//Seventeenth_ques();
	eighteenth_ques();

	return 0;
}

void Frist_ques(void)
{
	char characters[30];
	int i;

	characters[0] = 'a';
	printf("%3c", characters[0]);

	for (i = 1; i <= 26; i++)
	{
		characters[i] = characters[i - 1] + 1;
		printf("%3c", characters[i]);
	}
	printf("\n");

	return 0;
}

void Second_ques(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}

void Third_ques(void)
{
	int i, j;
	char c;

	for (i = 0; i < 6; i++)
	{
		for (j = 0,c = 'F'; j <= i; j++)
		{
			printf("%c", c);
			c -= 1;
		}
		printf("\n");
	}
	return 0;
}

void Forth_ques(void)
{
	int i, j;
	char c;
	c = 'A';

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c", c);
			c += 1;
		}
		printf("\n");
		
	}
	return 0;
}

void Fifth_ques(void)
{
	int i, j,k,l;
	char c,d,t;
	/*c = 'A';
	d = 'A';*/
	int mode = 0;

	printf("Keyin 1 to get in this little game,q to quit!\n");//��ʾ�û�ѡ���Ƿ������Ϸ
	scanf_s("%d", &mode);
	rewind(stdin);//************************������뻺����*******************

	//֪ʶ��
	//rewind(stdin);������������ָ�򻺳�����ָ��ָ�򻺳����Ŀ�ͷ
	//fpurpe(stdin);��������������������������е�����

	if (mode == 1)
	{
		printf("Please enter a character whatever you want\n");//��ʾ�û����뿪ʼ����ĸ
		scanf("%c", &t);
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j <= 4 - i; j++)
				printf(" ");	//��ӡǰ��Ŀո�
			for (k = 0, c = t; k <= i; k++)
			{
				printf("%c", c);//��ӡ˳����ĸ
				c += 1;
			}
			for (l = 0, d = c - 1 ; l <= i - 1; l++)//����d = c - 1����Ϊ����һ��ѭ�������c��������һ��1 �����������ѭ������Ҫ����һ
			{
				d = d - 1;
				printf("%c", d);//��ӡ������ĸ
			}
			printf("\n");
		}
	}

	else
		printf("Shut up!\n");//���û�����

	return 0;
}
//���ԣ�����

void Sixth_ques(void)
{
	int i, num_L,num_H;

	printf("Please enter lowest number and highest number ,we will ");
	printf("give those number among that two number square and cube value to you\n");

	scanf("%d%d", &num_L, &num_H);

	printf("	  number        square		cube\n");
	for (i = 0; i <= num_H - num_L; i++)
	{
		printf("%14d %14d %14d\n",num_L + i,square(num_L + i),cube(num_L + i));
	}
	printf("\n\t\tThat's all!!!\n");
	return 0;
}

void Seventh_ques(void)
{
	int i;
	char word[40];

	printf("Please enter a word:");
	scanf("%s", word);
	for (i = strlen(word) - 1; i >= 0; i--)//֪ʶ�㣬��strlen()�������������ַ��������һ���ַ����±�
		printf("%c", word[i]);
	printf("\tOK\n");


	return 0;
}

void Eighth_ques(void)
{
	float a, b;
	/*int t;*/
	printf("******************Please enter two numbers to caculus their values****************************\n");
	//t = scanf("%f %f", &a, &b);
	while (scanf("%f%f", &a, &b) == 2)
	{
		/*rewind(stdin);*/
		printf("The difference between these two numbers divided by the product of two numbers is %.3f\n", (a + b) / (a * b));
		//rewind(stdin);
	}

	return 0;
}

void tenth_ques(void)
{
	int a, b;
	int i;
	int sum = 0;
	printf("Please enter lower and upper integer limits: ");
	scanf("%d%d", &a, &b);
	
	while ((b - a) > 0)
	{
		rewind(stdin);
		for (i = a; i <= b; i++)
		{
			sum = square(i) + sum;
		}
			printf("The sums of the squares from %d to %d is %d. \n", square(a),square(b), sum);
			printf("Enter next set of limits: ");
			scanf("%d%d", &a, &b);
			sum = 0;
	}
	printf("	\nDone!\n");
	return 0;
}

void eleventh_ques(void)
{
	int n[8];
	int i, j;

	for (i = 0; i < 8; i++)
		scanf("%d", &n[i]);
	printf("\n");
		for (j = 7;j >= 0;j--)
			printf(" here we are :%d\t\n",n[j]);
		printf("\n");

	return 0;
}

void twelveth_ques(void)
{
	double normal_sum,abnormal_sum,denominator,all_sum = 0.0;
	int i,j,ch = 1;
	long int limit;

	printf("Please enter the upper limit: \n");
	scanf("%d", &limit);
	while (limit > 0)
	{
		for (normal_sum = 0.0, abnormal_sum = 0.0,ch = -1, i = 1,j = 0,all_sum = 0; i <= limit; i++)
		{
			normal_sum = normal_sum + 1.0 / (double)i;
				ch *= -1 ;
			denominator = ch / (double)i;
			abnormal_sum = abnormal_sum + denominator;
			j = i % 2;							//�ж���ż���������Ϊ1��ż����Ϊ0��
			all_sum += j * 2.0 / (double)i;		//�����ϳ����ˣ�����If else��䣻

		}

		printf("ch = %d\n", ch);
		printf("the first series is %.10lf\n", normal_sum);
		printf("the sec series is %.10lf\n",abnormal_sum);
		printf("all sum is %.10lf\n", all_sum);

		scanf("%d", &limit);
	}
	printf("\n\tDone!\n");

	return 0;
}
//��		��

void thirteenth_ques(void)
{
	int i, j;
	int n[8];

	for (n[0] = 2,i = 1; i < 8; i++)
	{
		n[i] = n[i - 1] * 2;
	}

	j = 0;

	do 
	{
		printf("\tn[%d] is %d\n", j, n[j]);
		j++;
	} while (j < 8);


	return 0;
}

void fourteenth_ques(void) //��
{
	double n1[8], n2[8];
	int i,j;

	/*for (n1[0] = 0, n2[0] = n1[0], i = 0; i <= 7; i++)
	{
		printf("Please enter the %d element of n1\n", i);
		scanf("%lf", &n1[i]);
		n2[0] = n1[0];
		n2[i] = n2[i-1] + n1[i];
		rewind(stdin);
	}*/


	/*****************************************************************************
	���ϵ�ע���Ǵ����߼�����ģ�����n2[-1]��ʲô�������������ᱨ���棡
	Ӧ�ý�n1��n2�ֿ���ֵ��
	�������£�
	******************************************************************************
	*/
	for (n1[0] = 0, i = 0; i <= 7; i++)
	{
		printf("Please enter the %d element of n1\n", i);
		scanf("%lf", &n1[i]);


		//rewind(stdin);
	}

	for (n2[0] = n1[0], j = 1; j < 8; j++)
	{
		n2[j] = n2[j - 1] + n1[j];
	}

	printf("n1: ");
	for (j = 0; j < 8; j++)
	{
		printf(" %.2lf\t",n1[j]);
	}
	printf("\n");

	printf("n2: ");
	for (j = 0; j < 8; j++)
	{
		printf(" %.2lf\t", n2[j]);
	}
	printf("\n");

	return 0;
}
//��   ��

void fifteenth_ques(void)
{
	char ch[256];
	int i = 0;
	_Bool j = 0;

	do
	{
		scanf("%c", &ch[i]);
	} while (ch[i] != '\n' && ++i);
	/*���ﲻ����i++,��Ϊ����ȡ��һ���ַ���i = 0;
	��ʱ����������ʽ��i++��Ϊ0�ģ����Ը����Ͳ���ȡ��һ���ַ�*/

	//j = (i++);
	//printf("%d\n", j);/*��������ʵ�飬������������Ҳ���棬ֻ��0�Ǽ�*/

	//printf("i = %d\nch[i] != '\\n' && ++i   =    %d", i,(ch[1] != '\n' && ++i));

	printf("\n");
	//printf("ch[0] = %c\nch[1] = %c & %d\n", ch[0],ch[1],ch[1]);
	for (i--; i >= 0; i--)
	{
		printf("%c", ch[i]);
		/*printf("%c  ***   %d\n", ch[i],ch[i]);*/
	}
	//printf("%d,%d", '5','f');
	return 0;
}
//���ⲻ�ᣬ�����ѣ�����������

void Sixteenth_ques(void)
{
	double Daphne = 100.0, Deirdre = 100.0;
	int i;
	int year = 0;

	do
	{
		Daphne += 10.0;
		Deirdre *= 1.05;
		year++;
	} while (Deirdre < Daphne);

	printf("There has been through %3d years that Deridre's estate surpasses Daphne's!\n", year);
	printf("Now,Daphne has %.2lf money\n  Deridre has %.2lf money\n", Daphne, Deirdre);


	return 0;
}

void Seventeenth_ques(void)
{
	float chuckie = 100;
	int years = 0;

	do {
		chuckie = 1.08 * chuckie - 10.0;
		years++;
		printf("%d years later,there are %.2lf money left\n", years, chuckie);


	} while (chuckie > 0.0);

	printf("It's been through %d years to use his money out.\n", years);

	return 0;
}

void eighteenth_ques(void) 
{
	int Rabund_friends = 5;
	int weeks = 0;
	printf("%d weeks later ,he has %d friends.\n", weeks, Rabund_friends);
	for(weeks = 1;Rabund_friends <= Dunbars_number;weeks++)
	{
		Rabund_friends = (Rabund_friends - weeks) * 2;
		printf("%d weeks later ,he has %d friends.\n", weeks, Rabund_friends);
	}

	printf("At last ,he has %d friends!\n", Rabund_friends);

	return 0;
}

int square(int n)	//	ƽ���ĺ���
{
	int square;
	square = n * n;

	return square;
}

int cube(int n)	//	�����ĺ���
{
	int cube;
	cube = n * n * n;

	return cube;
}