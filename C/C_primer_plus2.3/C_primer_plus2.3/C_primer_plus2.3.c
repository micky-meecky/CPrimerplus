/*
*********************************************C primer plus���е�����2.3��27ҳ******************************************
*********************************************2020��7��1��19:26:31*************************************************
Ŀ����Ϊ��дһ���ļ��а����������
*/
#include<stdio.h>
void butler(void);/*ANSI/ISO C����ԭ�ͣ�ע���β�ķֺţ�*///ע�������Ǻ���ԭ�ͣ�prototype��Ϊ�˸��߱���������Ҫ��butler������
//��һ��void ��ʾ�ú�����������û�з���ֵ�ĺ����������void��ʾbutler()������������
int main(void)
{
	printf("I wil summon the butler function.\n");
	butler();	//�����Ǻ������ã�function call��
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;

}

void butler(void) /*�������壨function declaration����ʼ.�����������Դ����*/
{
	printf("You rang ,sir?\n");
}