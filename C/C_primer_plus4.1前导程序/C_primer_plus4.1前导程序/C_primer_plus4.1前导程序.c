//***************************************演示与用户交互***********************************************
//*****************************************************************2020年7月5日16:20:43***********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define DENSITY 62.4F

int main(void)
{
	float weight, volume;
	int size, letters;
	char name[50];//name是一个可以容纳40个字符的数组

	printf("%c%c%c\n", 'H', 105, '\41');
	printf("%d,%x,%c\n", '\41', '\41', '\41');
	printf("Hi! What's your first name?\n");
	scanf("%s", name);//%s代表字符串
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f", &weight);

	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;

	printf("Well, %s, your volume is %2.2f cubic feet.\n",name ,volume);

	printf("Also,your first name has %d letters\n", letters);

	printf("and we have %d bytes to store it/\n", size);

	return 0;
}