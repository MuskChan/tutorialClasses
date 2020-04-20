// my first string 
#include <iostream>
#include <string>
using namespace std;

int  main()
{
	string mystring;
	string mystring2 ("  this is a mystring2");
	string mystring3 {"  this is a mystring3" };

	//与基本类型一样，所有初始化格式对字符串均有效：
	mystring = "this is a string";

	cout << mystring;
	cout << mystring2;
	cout << mystring3;

	//换行符 endl
	cout << mystring << endl;
	mystring = "This is a different string content";
	cout << mystring << endl;
	return 0;
}