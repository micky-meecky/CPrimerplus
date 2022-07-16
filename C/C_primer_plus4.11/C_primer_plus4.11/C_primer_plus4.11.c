//*******************************************C_primer_plus4.11***********************************
//**********************************2020Äê7ÔÂ19ÈÕ13:59:41*******************************************

#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	
	printf("num as short and unsigned short:	%hd %hu\n", num, num);
	printf("-num as shoprt and unsigned short:	%hd %hu\n", mnum, mnum);
	printf("num as int and char:	%d %c\n",num,num);
	printf("WORDS as int ,short ,and char:	%d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;
}