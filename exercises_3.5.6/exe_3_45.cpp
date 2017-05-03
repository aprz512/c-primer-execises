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
	
	for(auto &row : ia)
	{
		for (auto col : row)
		{
			cout << col << endl;
		}
	}
	
	return 0;
}
