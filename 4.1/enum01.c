#include <stdio.h>

enum day { Mon = 1, Tue, Wed, Thur = 5, Fri, Sat = 8, Sun };

int main()
{
	printf("%d %d %d %d %d %d %d", Mon, Tue, Wed, Thur, Fri, Sat, Sun);
	return 0;
}

