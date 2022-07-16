//**************************************C_Primer_plus6.19******************************************
//*************************************2020-8-9 16:09:59******************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10
#define par 72
int main(void)
{
	int index, score[size];
	int sum;
	float average;

	printf("Enter %d golf score:\n", size);


	for (index = 0; index < size; index++)
	{
		scanf("%d", &score[index]);
	}
	printf("The scores read in are as follows:\n");


	for (index = 0; index < size; index++)
		printf("%d\t", score[index]);

	printf("\n");


	for (index = 0, sum = 0; index < size; index++)
		sum += score[index];



	average = (float)sum / size;


	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - (double)par);

	return 0;
}