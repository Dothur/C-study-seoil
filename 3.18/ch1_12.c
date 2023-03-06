#include <stdio.h>
#define SIZE 5

int main(int argc, char** argv) {
	int arr[SIZE];
	arr[0] = 9;
	arr[1] = 22;
	arr[2] = 30;
	arr[3] = 23;
	arr[4] = 18;

	// int* ptr = &arr[0];  // &arr[0]= 배열의 시작주소, 배열의이름이 배열의 시작 주소이다
	// int* ptr = &arr;
	//
	int* ptr = arr;

	for (;;) {                         //무한 루프
		printf("%d\n", *ptr);
		if(ptr == &arr[SIZE - 1])           //조건절. 마지막주소가 ptr과 동일하다면 break 분기해라
			break;
		ptr++;           //ptr 1씩 증가 
	}
	return 0;
}
