#include <stdio.h>

typedef int bool_t;
typedef bool_t (*less_than_func_t)(int, int);

bool_t less_than(int a, int b) {
	return a < b ? 1 : 0;
}

bool_t less_than_modular(int a, int b) {
	return (a % 5) < (b % 5) ? 1 : 0;
}

int main(int argc, char** argv) {
	less_than_func_t ptr = NULL;

	ptr = &less_than;
	bool_t res = ptr (3, 7);
	printf("%d\n", res);

	ptr = &less_than_modular;
	res = ptr (3, 7);
	printf("%d\n", res);

	return 0;
}
