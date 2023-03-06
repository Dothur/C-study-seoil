#include <stdio.h>

struct Record {
};

int main()
{
	struct Record s;
	printf("Size in C: %lu byte \n", sizeof(s));
	return 0;
}
