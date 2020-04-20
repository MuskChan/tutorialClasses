// initialization of variables

#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b(3);
	int c{2};
	int result;

	// 初始化类型和值
	auto bar = a;
	//decltype(a) xtest;

	a = a + b;
	result = a - c;
	cout << result;
	cout << "  bar =" << bar;
	//cout << "  foo =" << xtest;

	return  0;
}