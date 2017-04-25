#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main()
{
	string str;
	string temp;
	
	while(cin >> temp)
	{
		//str += temp;
		
		str += (temp + " ");
	}
	
	cout << str << endl;
	
	return 0;
}
