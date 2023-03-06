#include <stdio.h>

//#define YEARS_OLD 120
#ifndef YEARS_OLD
#define YEARS_OLD 100
#endif

int main()
{
	printf("The pine tree is over %d years old.\n", YEARS_OLD);
	return 0;
}

