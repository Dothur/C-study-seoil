#include <stdio.h>

int sum(int a, int b) {
	return a+b;
}
int subtract (int a, int b) {
	return a-b;
}
int multiply (int a, int b) {
	return a*b;
}
int main() {
	int (*ptr)(int, int);
	ptr = NULL;

	ptr = &sum;
	int res = ptr(5,4);
	printf("덧셈 : %d\n", res);
	
	ptr = &subtract;
	res = ptr(5, 4);
	printf("뺄셈 : %d\n", res);

	ptr = &multiply;
	res = ptr(5, 4);
	printf("곱셈 : %d\n", res);

	return 0;
}

