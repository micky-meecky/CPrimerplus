//****************************C_Primer_plus6.16*****************************
//*******************************2020-8-9 15:34:29***************************


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	_Bool test = 1;

	printf("To enter the triskardekaphobia therapy club,\n");
	printf("Please enter the secret code number: ");
	test = scanf("%d", &code_entered);

	while ((code_entered != secret_code) && (test == 1))
	{
		printf("To enter the triskardekaphobia therapy club,\n");
		printf("Please enter the secret code number: ");
		test = scanf("%d", &code_entered);//此时还是会无限循化，因为我输入的.会一直存在scanf（）的下一次读取中，导致用户没办法重新输入！！！
		while (test != 1)
		{
			printf("What are you doing ,asshoel!\n");
			test = 1;
		}
	}

	printf("Congratulations! You are cured!\n");

	return 0;
}