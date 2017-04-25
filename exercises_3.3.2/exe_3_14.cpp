#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;

int main()
{
	int temp;
	vector<int> vec;
	
	while(cin >> temp)
	{
	    vec.push_back(temp);
	}
	
	return 0;
}
