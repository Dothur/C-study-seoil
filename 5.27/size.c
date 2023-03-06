#include <stdio.h>

int main()
{
	int size;

	typedef struct{
		char first_name[32];
		char last_name[32];
		unsigned int birth_year;
	} person_t;

	size = sizeof(person_t);

	printf("num1 크기: %d\n", size);

	return 0;
}
