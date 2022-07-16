#include <stdio.h>
#include <inttypes.h>
int main(void)
{
	int32_t me32;

	me32 = 45933945;
	printf("First, assum in32_t is int:");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumtion.\n");
	printf("Instead, use a \"macro\" from inttypes,h: ");
	printf("me32 = %" PRId32 "\n", me32);//参数PRId23被定义在inttypes头文件中的"d"所替换因而这句可以被替换成printf("me32 = %" " d " "\n");
	/*所以等价为*/
	printf("me32 = %" " d " "\n",me32);//又因为可以把多个连续的字符串组合成一个字符串
	/*所以继续等价为*/
	printf("me32 = %d\n",me32);
	printf("\n");
	printf("%.10f and %.10e", 0xa.1f23p10, 0xa.1f23p10);//C99的十六进制浮点数表示法，见书上P51

	return 0;

}