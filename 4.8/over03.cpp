#include <iostream>

using namespace std;

void print(int i) {
	cout << "Here is int "  << i << endl;
}

void print(double f) {
	cout << "Here is float "  << f << endl;
}

void print(char const c) {
	cout << "Here is char "  << c << endl;
}

int main() {
	print (15);
	print (3.4);
	print ('t');
	return 0;
}
