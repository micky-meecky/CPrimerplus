#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "911.h"

int selectM(void)
{
	int m = 1,mode = 1;
		printf("pls select mode from below: \n");
		printf("%s\n", STARS);
		printf("(1): loop;                              (2): recursion;\n");
		printf("(3): Fibonacci(n) is ?                  (4): the sum is ?\n");
		printf("(5): quit.\n");
		printf("%s\n",STARS);

		
		while (m)
		{
			mode = gets();
			switch (mode)
			{
			case 1:
				printf("\tmode 1 has been choosed.\n");
				break;
			case 2:
				printf("\tmode 2 has been choosed.\n");
				break;
			case 3:
				printf("\tmode 3 has been choosed.\n");
				break;
			case 4:
				printf("\tmode 4 has been choosed.\n");
				break;
			case 5:
				printf("\tyou are going to quit.\n");
				break;
			default:
				printf("\tAre you stupid? Try again: ");
				continue;
			}
			if (mode > 0 && mode < 6)
				break;
		}
	return mode;
}

int gets(void)
{
	char ch;
	int m;
	printf("  ");
	while (scanf("%d", &m) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is illegle, Pls try again :");
	}
	while (getchar() != '\n')
		continue;

	return m;
}