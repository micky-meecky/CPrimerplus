//***********************************C_Primer_plus6.8********************************************************
//***********************************2020-8-9 09:52:45****************************************
//********************************	//��ע�͵ĵط���6.8�ģ��������6.9��****************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	/*int status;*/
	//��ע�͵ĵط���6.8�ģ��������6.9��
	_Bool input_is_good;	//��������

	printf("Please enter an integer to be summed: ");
	printf("q to quit\n");

	input_is_good =(scanf("%ld", &num) == 1);
	while (input_is_good)
		{
			sum += num;
			printf("Now the sum is %ld. \n", sum);
			printf("\nPlease enter the next number(q to quit): ");	//ctrl + D���Ը��ƹ�������д��뵽���д�����·���66666��
			input_is_good = (scanf("%ld", &num) == 1);
		}
	//status = scanf("%ld", &num);
	//while (status)
	//{
	//	sum += num;
	//	printf("Now the sum is %ld. \n", sum);
	//	printf("\nPlease enter the next number(q to quit): ");
	//	status = scanf("%ld", &num);
	//}
	printf("Those integer sum to %ld.\n", sum);

	return 0;
}
