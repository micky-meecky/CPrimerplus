//********************************C_primer_plusϰ��4************************
//**************************2020-7-20 19:43:56****************************

//******************************C_primer_plusϰ��4.1*****************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
/*
{
	char name_F[40], name_S[40];
	printf("Please enter your frist name and second name!\n");
	printf("\n");
	printf("Second name:_______\b\b\b\b\b\b\b");
	scanf("%s", name_S);
	printf("\n");

	printf("Frist name:_______\b\b\b\b\b\b\b");
	scanf("%s",name_F);
	printf("\n");

	printf("Your name is %s %s ;Please check it out!  Thank you!\n", name_F, name_S);

	return 0;
}

*/
//***********************************C_primer_plusϰ��4.2****************************************************************�ص���*************************************

/*
{
	int width;
	int width_answer_1,width_answer_2;
	char name_F[40];
	printf("Please enter your frist name and second name!\n");
	printf("\n");
	printf("please enter your name:_____\b\b\b\b\b");
	scanf("%s", name_F);
	printf("\n");


	printf("�ҵı�������\n");
	printf("please enter the width of your name:");
	scanf("%d", &width);	//���ﲻӦ�����û��������ַ����ȣ����Լ����淽��
	printf("\n");
	printf("\t\"%s\"\n", name_F);
	printf("\t\"%20s\"\n", name_F);
	printf("\t\"%-20s\"\n", name_F);
	printf("\t\"%*s\"\n",width, name_F);
	printf("\n");

	printf("�𰸵ķ���1��\n");
	width_answer_1 = printf("\t\"%s.\"\n", name_F);
	width_answer_1 -= 5;	//������Ҫ��������˫���ţ���ţ����з����Ʊ����
	printf("\t\"%20s\"\n", name_F);
	printf("\t\"%-20s\"\n", name_F);
	printf("\t\"%*s\"\n", width_answer_1, name_F);
	printf("width_answer_1 = %d\n", width_answer_1);
	printf("\n");

	printf("�𰸵ķ���2��\n");
	width_answer_2 = strlen(name_F);//������Ҫ��string.h
	printf("\t\"%s.\"\n", name_F);
	printf("\t\"%20s\"\n", name_F);
	printf("\t\"%-20s\"\n", name_F);
	printf("\t\"%*s\"\n", width_answer_2, name_F);
	printf("width_answer_2 = %d\n", width_answer_2);


	return 0;
}

*/

//***********************************C_primer_plusϰ��4.3*************************

/*
{
	float f;
	printf("Please input a float number____\b\b\b\b");
	scanf("%f",&f);

	printf("\n");

	printf("The input is %2.1f or %1.1e\n", f, f);//ָ����ʾ����ָ����λ�����ݲ�ͬϵͳ��ʾ��λ�����ܲ�ͬ
	printf("The input is %+2.3f or %1.3E\n", f, f);

	return 0;
}
*/


//***********************************C_primer_plusϰ��4.4*************************

/*
{
	int selection;
	float inch;
	char name[40];
	printf("Please enter your feet in inch and your name\n");
	scanf("%f%s", &inch,name);
	printf("%s,you are %1.3f feet tall\n",name, inch / 12.0);

	printf("And,If you want,we could give you the value in centimeters,you can enter 1 to adopt it,or 0,to refuse\n");

	scanf("%d", &selection);
	if (selection == 1)
	{
		printf("You are %f centimeters tall\n", inch / 2.54);
	}
	else if (selection == 0)
	{
		printf("Thank you for your attention!\n");
	}
	else
		printf("Eeror!!!\n");

	return 0;

}
*/

//***********************************C_primer_plusϰ��4.5*************************//good question!!!!

/*
{
	float speed, size, time;
	printf("Please enter your file's size,and the download speed,so,we could give out the time!!\n");
	scanf("%f%f", &speed, &size);
	printf("At %2.2f magabits per second, a file of %1.2f megabytes\n",speed,size);
	time = size / speed * 8.0;
	printf("downloads in %1.2f seconds",time);

	return 0;
}*/