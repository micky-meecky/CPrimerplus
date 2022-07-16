//***********************************C_primer_plus5.11******************
//************************************2020-7-25 10:37:54********************


//post_pre.c -- ǰ׺�ͺ�׺

#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 1;
	int a_post, pre_b;

	a_post = a++;
	pre_b = ++b;
	printf("a	a_post	b	pre_b\n");
	printf("%-5d %5d %5d %8d\n", a,a_post,b,pre_b);


	return 0;

}