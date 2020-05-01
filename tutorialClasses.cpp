// classes example 
#include <iostream>
using namespace std;

class Rectangle { //另一种写法 struct
		int width, height;
	public:
		void set_values(int, int);
		int area() { return width * height; }
};

//在此外部定义中，作用域（::）的运算符用于指定所定义的函数是该类的成员
void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}

int main() {
	Rectangle rect;
	rect.set_values(3, 4);
	cout << "area: " << rect.area();
	return 0;
}