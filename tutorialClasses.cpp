// my first pointer
#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int* mypointer;

    mypointer = &firstvalue; //mypointer使用地址运算符（&）分配了firstvalue的地址
    *mypointer = 10; //mypointer所指向的值分配为10  此时mypointer指向的存储位置为firstvalue 所以实际上修改了firstvalue的值
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    return 0;
}