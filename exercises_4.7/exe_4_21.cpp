#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	for (auto &i : ivec)
	{
		i % 2 != 0 ? (i *= 2) : i;
	}
	
	for (const auto &i : ivec)
	{
		cout << i << endl;
	}

	return 0;
}
