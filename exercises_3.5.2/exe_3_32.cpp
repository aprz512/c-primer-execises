#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec(10);
	vector<int> ivec2(10);
	
	int index = 0;
	for(int &i : ivec)
	{
		i = index;
		index++;
	}
	
	ivec2 = ivec;
	
	for(int i : ivec)
	{
		cout << i << endl;
	}
	
	ivec[0] = 10;
	
	for(int i : ivec2)
	{
		cout << i << endl;
	}
		
	return 0;
}
