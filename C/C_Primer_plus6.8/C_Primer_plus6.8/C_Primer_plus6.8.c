//***********************************C_Primer_plus6.8********************************************************
//***********************************2020-8-9 09:52:45****************************************
//********************************	//被注释的地方是6.8的，其余的是6.9的****************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	/*int status;*/
	//被注释的地方是6.8的，其余的是6.9的
	_Bool input_is_good;	//布尔变量

	printf("Please enter an integer to be summed: ");
	printf("q to quit\n");

	input_is_good =(scanf("%ld", &num) == 1);
	while (input_is_good)
		{
			sum += num;
			printf("Now the sum is %ld. \n", sum);
			printf("\nPlease enter the next number(q to quit): ");	//ctrl + D可以复制光标所在行代码到这行代码的下方，66666啊
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
