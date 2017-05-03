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
	int iarr[] = {0, 1, 2, 3, 4, 5};
	
	vector<int> ivec(begin(iarr), end(iarr));
		
	for (int i : ivec)
	{
		cout << i << endl;
	}
	
	return 0;
}
