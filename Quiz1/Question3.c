#include <stdio.h>
#define X 0
int main()
{
#if !X
	printf("Macros");
#else
	printf("Quiz");

#endif
	return 0;
}
