#include <iostream>
#incldue <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main()
{
	string str;
	
	while(cin >> str)
	{
		str += str;
		
		str += (str + " ");
	}
	
	cout << str << endl;
	
	return 0;
}