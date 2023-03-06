#include <stdio.h>
#define get(s) #s

int main()
{
	char str[] = get(MacrosQuiz);
	printf("%s", str);
	return 0;
}

