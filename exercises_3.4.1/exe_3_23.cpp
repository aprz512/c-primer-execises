#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	vector<int> ivec;
	int count = 0;
	int temp;
	while (count++ < 10) {
		cin >> temp;
		ivec.push_back(temp);
	}
	
	for (int &i : ivec)
	{
		i = i * 2;
	}
	
	for (int i : ivec)
	{
		cout << i <<endl;
	}

	return 0;
}
