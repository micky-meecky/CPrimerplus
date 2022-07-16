//*************************************************C_primer_plus4.10*******************************************************
//*****************************************************2020年7月19日13:34:41************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define BLURB "Authentic imitation!"
int main(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	//**********************************************作业********************************************
	printf("**********************\t2.学以致用的作业啦啦啦啦啦！！！\t*************************\n");
	double cash;
	char name[40];
	scanf("%s", name);
	scanf("%Lf", &cash);
	printf("The %s family just may be $_______________\b\b\b\b\b\b\b\b\b\b\b%-10.3Lf dollars richer!\n",name,cash);
	return 0;
}


