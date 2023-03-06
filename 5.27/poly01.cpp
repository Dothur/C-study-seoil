#include <iostream>

using namespace std;

void print(int i) {
	cout << "Here is integer:" << i << endl;
}

void print(double f) {
	cout << "Here is float:" << f << endl;
}
void print(char const *c) {
	cout << "Here is char*:" << c << endl;
}

int main() {
	print(12);
	print(12.12);
	print("Good");
	return 0;
}
