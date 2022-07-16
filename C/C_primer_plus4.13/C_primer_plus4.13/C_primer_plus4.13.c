//*********************************C_primer_plus4.13***********************************************************
//********************************2020-7-19 18:17:46*****************************************

#include <stdio.h>
int main(void)
{
	int bph2o = 212; 
	int rv;

	rv = printf("%d F is water's boiling point .\n", bph2o);
	printf("The pritnf() function printed %d characters.\n", rv);

	return 0;
}