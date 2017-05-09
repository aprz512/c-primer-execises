#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
	if (val < 0)
	{
		return -val;
	}
	
	return val;
}

int main()
{

	int ival;
	
	cin >> ival;

	cout << fact(ival) << endl;
	
	return 0;
	
}


