//*************************************************************C_primer_plus4.3*********************************************
//&**************************************************2020年7月6日20:20:52************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name ?\n");
	scanf("%s", name);
	printf("Hello,%s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupied &zd memory cells.\n", strlen(name), sizeof name);//如果编译器不识别%zd,则换成%u或者%lu
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));
	printf("and occupied %zd memory cells.\n", sizeof(PRAISE));

	return 0;
}