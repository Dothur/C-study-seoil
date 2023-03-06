#include <stdio.h>
//#define CONDITION
int main (int argc, char** argv) {
#ifdef CONDITION
	int i = 12;
	++i;
	printf("ifdef CONDITION %d\n", i);

#endif
	int j = 0;
	j++;
	printf("j is %d\n", j);
	return 0;
}

