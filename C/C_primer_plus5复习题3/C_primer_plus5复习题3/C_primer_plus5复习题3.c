//***********************************C_primer_plus5复习题3*************************************
//************************************2020-7-25 12:49:41***************************************
//
//#include<stdio.h>
//int main(void)
//{
//	printf("%d	 %lf\n", 30.0 / 4.0 * 5.0, 30.0 / 4.0 * 5.0);
//
//	return 0;
//}



//***********************************C_primer_plus5复习题4*************************************

//#include<stdio.h>
//int main(void)
//{
//	int i = 1;
//	float n;
//	while (i < 30)
//	{
//		n = 1.0 / i;//(这里需要将 1 变为 1.0，进行浮点运算)
//		printf(" %f\n", n);
//		i++;
//
//	}
//	printf("That's all,folks!!!\n");
//
//	return 0;
//}


//***********************************C_primer_plus5复习题6*************************************

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

//***********************************C_primer_plus5复习题9*************************************

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
//	/*这是我的拙劣方法，不足之处在于需要知道ASCII码中a和g是多少*/
//	/*所以以下是改进的*/
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

//***********************************C_primer_plus5复习题9*************************************

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
	/*这是我的拙劣方法，不足之处在于需要知道ASCII码中a和g是多少*/
	/*所以以下是改进的*/


	char a = 'a';

	while (a++ <= 'g')
		printf("%5c", a - 1);
	printf("\n");

	return 0;
}