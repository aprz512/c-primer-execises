#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x[10];
	int *p = x;
	
	cout << sizeof(x) / sizeof(*x) << endl; // 10
	cout << sizeof(p) / sizeof(*p) << endl; // int * 占几个字节？
	
	cout << sizeof(p) << endl;	// 8个字节，不同机器，位数不一样
	cout << sizeof(*p) << endl;
	
	return 0;
}
