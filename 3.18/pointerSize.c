#include <stdio.h>

int main() {
	int *p;
	char *q;
	printf("int pointer size in bytes: %zu\n", sizeof(p));
	printf("char pointer size in bytes: %zu\n", sizeof(q));

	printf("int data size in bytes: %zu\n", sizeof(*p));
	printf("char data size in bytes: %zu\n", sizeof(*q));
}

