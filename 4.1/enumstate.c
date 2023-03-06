#include <stdio.h>

enum state {Working=0,Failed, Frezed};
enum state currState = 1;

enum state FindState() {
	return currState;
}

int main() {
	(FindState() == Working)? printf("Working") : printf("Not working");
	return 0;
}

