#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::endl;
using std::cout;
using std::cin;

int main()
{
	string temp;
	vector<string> vec;
	
	while(cin >> temp)
	{
	    vec.push_back(temp);
	}
	
	return 0;
}
