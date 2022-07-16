//*************************************C_Primer_plus6.17******************************
//**************************************2020-8-9 15:54:37*******************************

#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;
	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}