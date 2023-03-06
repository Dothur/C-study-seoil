#include <stdio.h>
#define X 5
#define ISEQUAL(X,Y) X == Y
int main()
{
#if ISEQUAL(X,0)
	printf("Macros");
#else
	printf("Quiz");
#endif
	return 0;
}

