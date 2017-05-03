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
	vector<int> ivec(5, 9);
	
	int iarr[5];
	
	for (auto b = begin(iarr), e = end(iarr); b != e; b++)
	{
		*b = ivec[b - begin(iarr)];
	}
		
	for (int i : iarr)
	{
		cout << i << endl;
	}
	
	return 0;
}
