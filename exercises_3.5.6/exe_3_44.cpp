#include <iostream>
#include <iterator>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[3][4] = {
		0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11
	};
	
	typedef int int_array[4];
	
	for(int_array *p = ia; p != ia + 3; p++)
	{
		for (int *q = *p; q != *p + 4; q++)
		{
			cout << *q << endl;
		}
	}
	
	return 0;
}
