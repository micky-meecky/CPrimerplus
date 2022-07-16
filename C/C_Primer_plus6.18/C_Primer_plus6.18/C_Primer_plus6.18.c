//**************************************C_Primer_plus6.18************************************
//************************************2020-8-9 16:01:43***************************************

#include <stdio.h>
int main(void)
{
	const int r = 6;
	const int c = 6;

	int row;
	char ch;

	for (row = 0; row < r; row++)
	{
		for (ch = ('A' + row); ch < ('A' + c); ch++)
			printf("%c\t",ch);
		printf("\n");
	}



	return 0;
}