#include <stdio.h>

int main(int argc, char** argv) {
	int var = 9;
	int* ptr = &var;
//	void* gptr = ptr;          //void 포인터

//	printf("%d\n", *gptr);       //역참조 = 값을 가져오기. void는 불가능
	printf("%d\n", *ptr);       //역참조가 가능하다.

	return 0;
}
