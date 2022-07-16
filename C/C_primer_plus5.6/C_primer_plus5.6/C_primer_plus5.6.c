//***********************************C_primer_plus5.6*************************************
//***********************************2020-7-24 20:45:23************************************


#include <stdio.h>
int main(void)
{
	printf("integer division: 5/4  is %d  \n", 5 / 4);
	printf("integer division: 6/3  is %d  \n", 6 / 3);
	printf("integer division: 7/4  is %d  \n", 7 / 4);
	printf("floating division: 7./4.  is %1.2f  \n", 7. / 4.);
	printf("mixed division:    7./4  is %1.2f  \n", 7. / 4);
	printf("mixed division: 7./4  is %d  \n", 7. / 4);
	printf("floating division: 7./4.  is %d  \n", 7. / 4.);
	//以下为网上摘抄的，目的在于讨论浮点数在内存中的储存方式
		float m = 134.375;
		char* a = (char*)&m;

		printf("0x%p:%d\n", a, *a);
		printf("0x%p:%d\n", a + 1, *(a + 1));
		printf("0x%p:%d\n", a + 2, *(a + 2));
		printf("0x%p:%d\n", a + 3, *(a + 3));


	return 0;
}