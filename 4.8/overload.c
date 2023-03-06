#include <stdio.h>

void foo(char c)
{
	printf("from foo : char.. ");
}

void foo(int i)
{
	printf("from foo : int.. ");
}

int main() {
	foo(50);
	return 0;
}
