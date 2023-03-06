#include <iostream>

class Rect {
	public:
		int area(){
			return width * length;
		}
		int width;
		int length;
};

int main(int argc, char** argv){
	Rect r;
	r.width = 10;
	r.length = 25;
	int area = r.area();
	std::cout << "Area: " << area << std::endl;
	return 0;
}
