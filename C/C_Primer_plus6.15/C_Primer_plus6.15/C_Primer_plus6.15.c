//**********************************C_Primer_plus6.15*********************************
//***********************************2020-8-9 15:26:12**************************************
//����ѭ��do-while

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("Please enter the secret code number: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);

		printf("Congratulations!You are cured!\n");

	return 0;
}
