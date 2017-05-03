#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;

int main() 
{
	int ia[] = {0, 1, 2, 3, 4};
	
	// 最后一个元素的为元素尾元素，可以执行下标运算
	// 但是值无意义 一般用来取地址运算
	int test = ia[5];
	cout << test << endl;
	
	int *sp = begin(ia);
	int *ep = end(ia);
	
	while (sp != ep)
	{
		*sp = 0;
		++sp;
	}
	
	for (int i : ia)
	{
		cout << i << endl;
	}

	return 0;
}
