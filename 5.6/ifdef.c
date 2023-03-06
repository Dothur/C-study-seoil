#include <stdio.h>
#define A 1

int main()
{
	#ifdef A
		printf("A is defined\n");
	#endif

	#if A
		printf("A is True\n");
	#else
		printf("A is False\n");
	#endif
	return 0;
}
