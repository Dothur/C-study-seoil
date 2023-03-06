#include <iostream>
using namespace std;

class Test
{
	public:

	Test()
	{
		cout << "This is single inherit" << endl;
	}
};
class Demo : public Test
{
};
int main() {
	Demo obj;
	return 0;
}

