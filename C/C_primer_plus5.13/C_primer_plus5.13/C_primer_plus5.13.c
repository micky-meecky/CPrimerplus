//**************************************C_primer_plus5.13********************************
//***************************************2020-7-25 11:02:20*****************************


//addemup.c -- ���ֳ��������

#include <stdio.h>
int main(void)
{
	int count, sum;//����ǰ20�������ĺ�

	sum = count = 0;
	while (count++ < 20)
		sum += count;
	printf("sum = %d\n", sum);



	return 0;
}