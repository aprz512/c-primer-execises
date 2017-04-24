#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	string str;
	string result;
	
	cin >> str;
	
	for(auto &c : str)
	{
		if(!ispunct(c))
		{
			result += c;
		} 
	}
	
	cout << result << endl;
	
	return 0;
}