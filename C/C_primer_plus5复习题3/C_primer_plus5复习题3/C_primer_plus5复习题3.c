//***********************************C_primer_plus5��ϰ��3*************************************
//************************************2020-7-25 12:49:41***************************************
//
//#include<stdio.h>
//int main(void)
//{
//	printf("%d	 %lf\n", 30.0 / 4.0 * 5.0, 30.0 / 4.0 * 5.0);
//
//	return 0;
//}



//***********************************C_primer_plus5��ϰ��4*************************************

//#include<stdio.h>
//int main(void)
//{
//	int i = 1;
//	float n;
//	while (i < 30)
//	{
//		n = 1.0 / i;//(������Ҫ�� 1 ��Ϊ 1.0�����и�������)
//		printf(" %f\n", n);
//		i++;
//
//	}
//	printf("That's all,folks!!!\n");
//
//	return 0;
//}


//***********************************C_primer_plus5��ϰ��6*************************************

//
//#include<stdio.h>
//#define FORMAT "%s! C is Cool!\n"
//int main(void)
//{
//	printf(FORMAT, FORMAT);
//	printf("\n");
//	printf("That's all,folks!!!\n");
//
//	return 0;
//}

//***********************************C_primer_plus5��ϰ��9*************************************

//
//#include<stdio.h>
//#define BASIS 96
//int main(void)
//{	
//	int n = 0;
//
//	while (n++ < 7)
//	{
//		printf("%5c", n + BASIS);
//	}
//	printf("\n");
//	/*�����ҵ�׾�ӷ���������֮��������Ҫ֪��ASCII����a��g�Ƕ���*/
//	/*���������ǸĽ���*/
//
//
//	char a = 'a';
//
//	while (a++ <= 'g')
//		printf("%5c", a-1);
//	printf("\n");
//
//	return 0;
//}

//***********************************C_primer_plus5��ϰ��9*************************************

//
#include<stdio.h>
#define BASIS 96
int main(void)
{
	int n = 0;

	while (n++ < 7)
	{
		printf("%5c", n + BASIS);
	}
	printf("\n");
	/*�����ҵ�׾�ӷ���������֮��������Ҫ֪��ASCII����a��g�Ƕ���*/
	/*���������ǸĽ���*/


	char a = 'a';

	while (a++ <= 'g')
		printf("%5c", a - 1);
	printf("\n");

	return 0;
}