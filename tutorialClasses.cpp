// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Initialization of variables 变量初始化
	string str{ "hello!" };
	for (char c : str)
	{
		cout << "[" << c << "]";
	}
	cout << '\n';
}