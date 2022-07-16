//*********************************************************************打印类型的大小*******************************************************
//********************************************************2020年7月4日14:59:25***************************************************************

#include <stdio.h>
int main(void)
{
	/*C99为类型大小提供%zd转换说明*/
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
	printf("Type float has a size of %zd bytes.\n", sizeof(float));

	float p = 3.1415926536;
	printf("\t\t\t\t\%f\n", p);




	return 0;


}