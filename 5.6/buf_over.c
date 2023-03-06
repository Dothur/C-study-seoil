#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	char str[10];
	strcpy(str, argv[0]);
	printf("Hello %s!\n", str);
}
