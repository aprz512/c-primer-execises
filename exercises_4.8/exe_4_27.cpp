#include <iostream>

using std::cout;
using std::endl;

int main()
{
	unsigned long ul1 = 3, ul2 = 7;
	
	cout << (ul1 & ul2) << endl;
	cout << (ul1 | ul2) << endl;
	cout << (ul1 && ul2) << endl;
	cout << (ul1 || ul2) << endl;
	
	// 011 111
	// 3 7 1 1 true 是 1
	
	return 0;
}
