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
	printf("me32 = %" PRId32 "\n", me32);//����PRId23��������inttypesͷ�ļ��е�"d"���滻��������Ա��滻��printf("me32 = %" " d " "\n");
	/*���Եȼ�Ϊ*/
	printf("me32 = %" " d " "\n",me32);//����Ϊ���԰Ѷ���������ַ�����ϳ�һ���ַ���
	/*���Լ����ȼ�Ϊ*/
	printf("me32 = %d\n",me32);
	printf("\n");
	printf("%.10f and %.10e", 0xa.1f23p10, 0xa.1f23p10);//C99��ʮ�����Ƹ�������ʾ����������P51

	return 0;

}