#include <stdio.h>

int main(int argc, char** argv) {
	int var = 100;
	int* ptr = 0;
	ptr = &var;
	printf("&var value is %d\n", &var);
	printf("ptr value is ptr %d\n", ptr);
	printf("*ptr value is ptr %d\n", *ptr);

	*ptr = 200;
	printf("the value is ptr %d\n", var);
	return 0;
}

