#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main() 
{
	
	string line;
	
	/*
	while (getline(cin, line)) 
	{
		cout << line << endl;
	}
	*/

	while (cin >> line) 
	{
		cout << line << endl;
	}
	
	return 0;
}
