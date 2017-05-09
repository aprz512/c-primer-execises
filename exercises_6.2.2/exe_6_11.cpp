#include <iostream>

using std::cout;
using std::endl;

void reset(int &x)
{
	x = 0;
}

int main()
{
	int x = 9;
	
	cout << x << endl;
	
	reset(x);
	
	cout << x << endl;
	
	return 0;
}
