//************************************************C_primer_plus5.16重点之重点**************************************************
//*************************************************2020-7-25 11:45:03********************************************************

//running.c -- a useful program for runners

//示例程序，精读该程序！！！！！！！！

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void)
{	
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("Please enter , in kilometers ,the distance run.\n");
	scanf("%lf", &distk);
	printf("Next enter your in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);
	
	time = S_PER_M * min + sec;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double)time / distm;
	mmin = (int) mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;

	printf("You ran %1.2f Km (%1.2f miles ) in %d min,%d sec.\n",
		distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min,",
		mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
		rate);

	return 0;
}