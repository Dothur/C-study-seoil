#include <stdio.h>
#define X 3

#if X == 3
	#define Y 3
#else
	#define Y 5
#endif

int main()
{
	printf("%d", Y);
	return 0;
}

