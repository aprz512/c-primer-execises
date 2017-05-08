#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec1{1, 2, 3, 4, 5};
	vector<int> ivec2{1, 2, 3, 4, 5, 4, 3, 2, 1};
	
	decltype(ivec1.size()) size, size1, size2, index = 0; 
	
	size1 = ivec1.size();
	size2 = ivec2.size();
	
	size = size1 > size2 ? size2 : size1;
	
	for (; index != size; ++index)
	{
		if (ivec1[index] != ivec2[index])
		{
			break;
		}
	}
	
	if (index == size)
	{
		cout << "ok" << endl;
	}
	else
	{
		cout << "not ok" << endl;
	}
	
	
	return 0;
	
}
