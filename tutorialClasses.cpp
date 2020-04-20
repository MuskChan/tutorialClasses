#include <iostream>
using namespace std;

#define	PI 3.14159
#define NEWLINE '\n'
//请注意，这些#define行是预处理程序指令，因此是单行指令，与C ++语句不同，该行最后不需要分号（;）；该指令自动扩展到行尾。如果该行中包含分号，则它是替换序列的一部分，并且也包含在所有替换的事件中。

int main()
{
	double r = 5.0;
	double circle;

	circle = 2 * PI * r;
	cout << circle;
	cout << NEWLINE;
}