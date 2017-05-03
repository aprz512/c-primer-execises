#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main()
{
	int i;
	
	while (cin >> i)
	{
		if (i == 42)
		{
			break;
		}
	}
	
	char c = '0' - '0';
	
	if (c)
	{
		cout << "*p is  null" << endl;
	}
	
	return 0;
}
