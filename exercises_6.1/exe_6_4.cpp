#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
	int temp = 1;
	while (val > 1)
	{
		temp *= val--;
	}
	
	return temp;
}

int main()
{

	int ival;
	
	cin >> ival;

	cout << fact(ival) << endl;
	
	return 0;
	
}


