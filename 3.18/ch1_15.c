#include <stdio.h>

int* create_an_integer(int default_value) {           //함수선언 / 정의
	int var = default_value;                 //var = 지역변수
   return &var;                             //var 주소값을 리턴
}

int main() {
	int* ptr = NULL;                       //포인터 ptr 초기화
	ptr = create_an_integer(10);
	printf("%d\n", *ptr);                  // <----- *ptr = // dangling pointer
	return 0;
}
