//**********************************************************************使用limits.h和float头文件中定义的明示常量**************************************
//***************************************************************2020年7月6日20:56:03************************************************************

#include<stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("Some number limits for this sysytem :\n");
	printf("Bisggest int :%d\n", INT_MAX);
	printf("Smallest long long :%lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;

}